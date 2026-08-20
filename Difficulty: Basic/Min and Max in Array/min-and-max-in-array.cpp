class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> ans;
        int mmax = arr[0];
        int mmin = arr[0];
        for(auto x:arr) {

                mmax=max(mmax,x);
                mmin=min(mmin,x);
        }
        ans.push_back(mmin);
        ans.push_back(mmax);
        return ans;
    }
};