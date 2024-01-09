// Ques. Longest Consecutive Subsequence - https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_set<int>s(arr,arr+N);
      int ans = 0;
      for(auto x:s) {
          if(s.count(x - 1) == 0) {
                int count = 1;
                while(s.count(x + count) != 0)
                    count++;
                ans = max(ans, count);
            }
        }
      return ans;
    }
};