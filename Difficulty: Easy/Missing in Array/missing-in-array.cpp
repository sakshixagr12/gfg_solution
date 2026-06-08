class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int xor1=0,xor2=0;
        for(int i = 0;i<arr.size();i++) {
            xor1=xor1^(i+1);
            xor2=xor2^arr[i];
        }
        xor1^=(n+1);
        int ans=xor1^xor2;
        return ans;
      
    }
};