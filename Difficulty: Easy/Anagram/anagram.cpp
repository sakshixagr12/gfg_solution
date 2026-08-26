class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()) return false;
        int mpp[26]={0};
        for(auto ch:s1){
            mpp[ch-'a']++;
        }
        for(auto ch:s2){
            mpp[ch-'a']--;
        }
        for(auto i:mpp){
            if(mpp[i]!=0) return false;
        }
        return true;
    }
};