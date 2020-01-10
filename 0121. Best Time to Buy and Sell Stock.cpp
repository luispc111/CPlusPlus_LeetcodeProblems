class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        } 
        int max=0;
        for(int i = 0; i < prices.size()-1; i++){
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j]-prices[i] > 0 && prices[j]-prices[i] > max){
                    max = prices[j]-prices[i];
                }
            }
        }
        return max;
    }
};