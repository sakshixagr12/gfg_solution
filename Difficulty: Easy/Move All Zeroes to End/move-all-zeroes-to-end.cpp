class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        int j=0;
        while(j<arr.size()) {
            if(arr[j]!=0) {
                swap(arr[i],arr[j]);
                i++;
            }
            j++;
        }
    }
};