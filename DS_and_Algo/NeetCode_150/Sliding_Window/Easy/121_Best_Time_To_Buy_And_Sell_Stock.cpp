/*
Link to problem - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Approach - Keep 2 pointers for buying and selling day respectively and keep on checking the max profit for each transaction and increment the buying and selling day accordingly (Reference - https://www.youtube.com/watch?v=1pkOgXD63yU)
Time complexity - O(n)
Space complexity - O(1)
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bDay = 0, sDay = 1, mProfit = 0;
        
        while(sDay < prices.size()){
            if(prices[sDay] - prices[bDay] > 0){
                mProfit = max(mProfit, prices[sDay] - prices[bDay]);
            }
            else{
                bDay = sDay;
            }
            sDay++;
        }
        return mProfit;
    }
};