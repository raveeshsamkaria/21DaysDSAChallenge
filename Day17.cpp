// Ques. Container With Most Water - https://www.geeksforgeeks.org/problems/container-with-most-water0535/1

long long maxArea(long long A[], int len)
{
    long long i = 0, j = len - 1, ans = 0;
    while(i < j) {
        ans = max(ans, min(A[i], A[j]) * (j - i));
        if(A[i] < A[j])
            i++;
        else
            j--;
    }
    return ans;
}