// Ques. Generate Parentheses - https://www.geeksforgeeks.org/problems/generate-all-possible-parentheses/1

class Solution
{
    vector<string> ans;
    void dfs(string s, int countOpen, int n) {
        if(s.length() == 2*n){
            ans.push_back(s);
            return;
        }
        if(countOpen < n)
            dfs(s + '(', countOpen + 1, n);
        if(s.length() - countOpen < countOpen)
            dfs(s + ')', countOpen, n);
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        ans.clear();
        dfs("", 0, n);
        return ans;
    }
};