class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        if(n<m) return 0;
        sort(a.begin(),a.end());
        int ans = a[m-1]-a[0];
        for(int i=1; i+m-1<n; i++) {
            ans = min(ans,a[i+m-1]-a[i]);
        }
        return ans;
    }
};