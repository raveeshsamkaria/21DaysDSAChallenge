// Ques. K Largest Elements - https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // The smallest element is always at the top of min heap.
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++) {
            pq.push(arr[i]);
            if(pq.size() > k) pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};