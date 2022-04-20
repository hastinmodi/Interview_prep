/*
Link to problem - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
Approach - Find the maximum profit possible while iterating through each element of the array and return the max of all profits (Reference - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/1735493/JavaC%2B%2B-best-ever-EXPLANATION-could-possible)
Time complexity - O(size of prices)
Space complexity - O(1)
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int least_so_far = INT_MAX;
        int max_profit = 0;
        int profit_if_sold_today = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < least_so_far)
                least_so_far = prices[i];

            profit_if_sold_today = prices[i] - least_so_far;

            if (profit_if_sold_today > max_profit)
                max_profit = profit_if_sold_today;
        }
        return max_profit;
    }
};