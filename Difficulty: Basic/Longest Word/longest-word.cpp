class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string ans="";
        int mmax=-1;
        for(string s : arr){
            int n = s.size();
            if(n>mmax){
                mmax=n;
                ans=s;
            }
        }
        return ans;
    }
};
