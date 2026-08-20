class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i=0;
        int j=n-1;
        int a=0;
        int ans = 0;
        while(i<j) {
            a = min(arr[i],arr[j]) * (j-i);
            ans = max (ans,a);
            if(arr[i]>arr[j]) j--;
            else i++;
        }
        return ans;
    }
};