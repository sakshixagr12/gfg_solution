class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        string word;
        vector<string> words;

        while (getline(ss, word, '.')) {
            if (!word.empty()) {
                words.push_back(word);
    }
        }
        reverse(words.begin(), words.end());
        string ans = "";

        for (int i = 0; i < words.size(); i++) {
            ans += words[i];

            if (i != words.size() - 1) {
                    ans += '.';
                }
                }
        return ans;
    }
};