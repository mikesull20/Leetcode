class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit = 0;
        int start = prices[0];
        int end = prices[0];

        for(int i = 0; i < size; i++){   
            if(prices[i] > end){
                end = prices[i];
            }else{
                profit += (end - start);
                start = prices[i];
                end = prices[i];
            }
        }
        if(end == prices[size - 1]){
            profit += (end - start);
        }

        return profit;
    }
};