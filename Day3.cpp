// Ques. Buy Stock 2 - https://practice.geeksforgeeks.org/problems/buy-stock-2/1

class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        long long ans = 0;
        for(long long i = 1; i < n; i++) {
            if(prices[i] - prices[i-1] > 0)
                ans = ans + prices[i] - prices[i-1];
        }
        return ans;
    }
};