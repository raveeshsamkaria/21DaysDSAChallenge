// Ques. Nth Fibonacci Number - https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

class Solution {
    const int mod = 1e9+7;
    int dp[100001] = {0};
  public:
    int nthFibonacci(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(dp[n] != 0)
            return dp[n];
        int n_1 = nthFibonacci(n-1) % mod;
        int n_2 = nthFibonacci(n-2) % mod;
        return dp[n] = (n_1+n_2) % mod;
    }
};