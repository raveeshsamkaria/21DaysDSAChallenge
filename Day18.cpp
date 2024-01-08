// Ques. Parenthesis Checker - https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(auto i:x)
        {
            if(i == '(' or i == '{' or i == '[')
                st.push(i);
            else {
                if(st.empty() or
                  (st.top() == '(' and i != ')') or
                  (st.top() == '{' and i != '}') or
                  (st.top() == '[' and i != ']'))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};