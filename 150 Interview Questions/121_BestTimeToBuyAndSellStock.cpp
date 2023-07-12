class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int lowPrice = -1;
        int highPrice = -1;
        for(auto i : prices){
            if(lowPrice == -1 || i < lowPrice){
                lowPrice = i;
                highPrice = i;
            }
            if(highPrice == -1 || i > highPrice){
                highPrice = i;
                
            }
            if((highPrice - lowPrice) > profit){
                    profit = (highPrice - lowPrice);
            }
        }
        return profit;
    }
};