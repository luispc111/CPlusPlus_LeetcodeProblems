class Solution {
public:
    bool isNumber(string s) {
        int size = s.size();
        int aux = 0;
        int status = 0;
        bool wasANumber=false;
        int wasThereSomething=0;
        int pointsBefore=0;
        bool afterE = false;
        
        /*
        status = last seen:
            start  -> 0
            e      -> 1
            sign   -> 2
            point  -> 3
            number -> 4
            space  -> 5
        */
        
        while(aux < size){
            if(s[aux] == '0' || s[aux] == '1' || s[aux] == '2' || s[aux] == '3' || s[aux] == '4' 
               || s[aux] == '5' || s[aux] == '6' || s[aux] == '7' || s[aux] == '8' || s[aux] == '9'){
                if(status == 5 && wasANumber){
                    return false;
                }
                status = 4;
                wasANumber=true;
                if(wasThereSomething == 2){
                    return false;
                }
                wasThereSomething=1;
            }
            else if(s[aux] == 'e'){
                if(status != 4 && status != 3){
                    return false;
                }
                if(!wasANumber && status == 3){
                    return false;
                }
                status = 1;
                if(wasThereSomething == 2){
                    return false;
                }
                wasThereSomething=1;
                if(afterE){
                    return false;
                }
                afterE=true;
            }
            else if(s[aux] == '-' || s[aux] == '+'){
                if(status != 0 && status != 2 && status != 1 && status != 5){
                    return false;
                }
                status = 2;
                if(wasThereSomething == 2){
                    return false;
                }
                wasThereSomething=1;
            }
            else if(s[aux] == '.'){
                if(status != 4 && status != 0 && status != 5 && status != 2){
                    return false;
                }
                status = 3;                
                if(wasThereSomething == 2){
                    return false;
                }
                wasThereSomething=1;
                pointsBefore++;
                if(pointsBefore > 1){
                    return false;
                }
                if(afterE){
                    return false;
                }
            }
            else if(s[aux] == ' '){
                if(status != 5 && status != 0 && status != 4 && status != 3){
                    return false;
                }
                if(wasThereSomething == 1){
                    wasThereSomething = 2;
                }
                status = 5;
            }
            else{
                return false;
            }
            aux++;
        }
        
        if(status != 1 && status != 2){
            if(wasANumber){
                return true; 
            }
        }
        return false;
    }
};