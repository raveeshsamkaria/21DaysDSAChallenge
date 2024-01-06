// Ques. Spirally Traversing a Matrix - https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int n = matrix.size(), m = matrix[0].size();
        int left = 0, right = m - 1, up = 0, down = n - 1;
        vector<int> ans;
        while(1) {
            int i = left;
            while(i <= right) ans.push_back(matrix[up][i++]);
            up++;
            if(up > down)
                break;

            i = up;
            while(i <= down) ans.push_back(matrix[i++][right]);
            right--;
            if(left > right)
                break;

            i = right;
            while(i >= left) ans.push_back(matrix[down][i--]);
            down--;
            if(up > down)
                break;

            i = down;
            while(i >= up) ans.push_back(matrix[i--][left]);
            left++;
            if(left > right)
                break;
        }
        return ans; 
    }
};