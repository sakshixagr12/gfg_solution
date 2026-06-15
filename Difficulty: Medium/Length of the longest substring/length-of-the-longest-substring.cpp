class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        int n = s.size();
        int l = 0;
        int r = 0;
        unordered_map<char,int>mpp;
        int len = 0;
        int maxLen = -1;
        
       while(r<n){
           if(mpp.find(s[r])!=mpp.end()) {
               l=max(l,mpp[s[r]]+1);
               mpp[s[r]]=r;
               
           }else {
               
              mpp[s[r]]=r;
           }
           len = r-l+1;
           maxLen=max(maxLen,len);
           r++;
       }
        return maxLen;
    }
};