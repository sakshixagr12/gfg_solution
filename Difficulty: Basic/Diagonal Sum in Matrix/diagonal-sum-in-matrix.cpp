// User function Template for C++
class Solution {
  public:
    int diagonalSum(vector<vector<int> >& mat) {
        // Code here
        long long sum = 0;
        int n = mat.size();
        for(int i = 0; i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][n-1-i];
        }
        return sum;
    }
};