// Ques. Search in a Matrix - https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
        if(N == 0)
            return false;
        int i = 0, j = M - 1;
        while(i < N && j >= 0) {
            if(mat[i][j] == X) {
                return 1;
            }
            else if(mat[i][j] > X){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
	}
};