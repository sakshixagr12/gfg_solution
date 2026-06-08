class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int slargest = -1;
        for (auto it : arr ) {
            if (it > largest ){
                slargest = largest;
                largest = it;
            } else if ( it < largest && it > slargest){
                slargest = it;
            }
        }
        return slargest;
    }
};