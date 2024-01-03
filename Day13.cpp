// Ques. Overlapping Intervals - https://www.geeksforgeeks.org/problems/overlapping-intervals--170633/1

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int interval = 0, n = intervals.size();
        vector<vector<int>> ans;
        while(interval < n) {
            int start = intervals[interval][0];
            int end = intervals[interval][1];
            interval++;
            while(interval < n && intervals[interval][0] <= end) {
                end = max(end, intervals[interval][1]);
                interval++;
            }
            ans.push_back({start, end});
        }
        return ans;
    }
};