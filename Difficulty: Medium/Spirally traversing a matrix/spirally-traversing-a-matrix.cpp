class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int n = mat.size(); //rows
        int m = mat[0].size(); // column
        int top=0;
        int left=0;
        int right=m-1;
        int bottom=n-1;
        vector<int>answer;
        
        while(top<=bottom && left<=right){
            for(int i = left ;i<=right ;i++) answer.push_back(mat[top][i]);
            top++;
            for(int i = top ; i<=bottom;i++) answer.push_back(mat[i][right]);
            right--;
            if(top<=bottom) {
                for(int i = right ; i>=left;i--) answer.push_back(mat[bottom][i]);
                bottom--;
            }
            if(left<=right){
                for(int i = bottom;i>=top;i--) answer.push_back(mat[i][left]);
                left++;
            }
        }
        return answer;
    }
};