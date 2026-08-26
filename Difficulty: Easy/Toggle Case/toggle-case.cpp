class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        int n = s.size();
        for(char &c:s){
            if(c>='a'&&c<='z'){
                c=toupper(c);
            }else if(c>='A'&&c<='Z'){
                c=tolower(c);
            }
        }
        return s;
    }
};