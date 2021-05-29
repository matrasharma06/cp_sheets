class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy = INT_MAX, sell = INT_MIN;
        int n = prices.size();
        int profit = 0;
        for (int i = 0; i < n; i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else if (prices[i] - buy > profit)
            {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};