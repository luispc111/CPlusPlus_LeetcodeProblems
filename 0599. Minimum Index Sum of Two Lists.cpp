#include <map>
#include <iterator>
#include <vector>
#include <climits>

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        map<string, int> myMap;
            
        // Añado todos los restaurantes de list1 a un map
        for (int i = 0; i < list1.size(); i++){
            myMap.insert ({list1[i], -(i+1)});
        }
        
        // Busco si algun elemento de mi list2 está en el map
        for (int i = 0; i < list2.size(); i++){
            
            // Si mi restaurante esta en el map, actualiza el valor
            if(myMap.find(list2[i]) != myMap.end()){
                myMap.find(list2[i])->second *= -1;
                myMap.find(list2[i])->second += i;
            }
        }

        vector<string> result;
        int min = INT_MAX;
        map<string, int>::iterator it = myMap.begin();
        
        while(it != myMap.end()){
            
            // Add elements to vector
            if (it->second == min && it->second >= 0){
                result.push_back(it->first);
            }
        
            // Delete the vector and add the newest least index sum
            else if (it->second < min && it->second >= 0){
                min = it->second;
                result.clear();
                result.push_back(it->first);
            }
            
            it++;
        } 
        return result;
    }
};
