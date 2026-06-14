class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(auto it : arr) sum += it;
        int lsum = 0, rsum = 0;
        for(int i = 0 ; i< n;i++){
            if(i==0){
                lsum=0;
            }else {
                lsum+=arr[i-1];
            }
            rsum= sum - (lsum + arr[i]);
            
            if(lsum==rsum) return i;
        }
        
        return -1;
    }
};