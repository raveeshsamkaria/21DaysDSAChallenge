// Ques. Remove character - https://www.geeksforgeeks.org/problems/remove-character3815/1

class Solution {
    public:
        string removeChars(string string1, string string2) {
            unordered_set<char> s2(string2.begin(), string2.end());
            int current = 0;
            for(int i = 0; i < string1.size(); i++) {
                if(s2.find(string1[i]) != s2.end())
                    continue;
                string1[current++] = string1[i];
            }
            string1.erase(string1.begin() + current, string1.end());
            return string1;
        }
};