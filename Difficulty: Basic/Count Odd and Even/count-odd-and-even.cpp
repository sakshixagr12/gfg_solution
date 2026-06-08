class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int oddCnt=0;
        int evenCnt=0;
        for(auto it:arr){
            if(it%2==0)evenCnt++;
            else oddCnt++;
        }
        return {oddCnt,evenCnt};
    }
};