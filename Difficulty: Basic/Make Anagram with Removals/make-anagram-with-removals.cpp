class Solution {
public:
    int remAnagram(string& s1, string& s2) {
      
        int hash[26] = {0};
        for (char c : s1) {
            hash[c - 'a']++;
        }
        for (char c : s2) {
            hash[c - 'a']--;
        }
        int minDeletions = 0;
        for (int i = 0; i < 26; i++) {
            minDeletions += abs(hash[i]);
        }
        return minDeletions;
    }
};