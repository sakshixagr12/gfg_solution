class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans;
        int mmin=arr[n-1];
        ans.push_back(arr[n-1]);
        int j = n-2;
        while(j>=0) {
            if (arr[j]>=mmin){
                ans.push_back(arr[j]);
                mmin=arr[j];
            }
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};