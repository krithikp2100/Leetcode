class Solution {
public:
    string longestPalindrome(string s) {
        string longest_string = "";
        for (int i = 0; i < s.size(); i++) {
            string str = {s[i]};
            int sides = 1;
            while (0 <= i-sides && i+sides <s.size() && s[i-sides] == s[i+sides]){
                str = s[i-sides] + str + s[i+sides];
                sides++;
            }
            if (str.size() > longest_string.size()) {
                longest_string = str;
            }
        }
        for (int i = 0; i < s.size()-1; i++) {
            string str = "";
            int sides = 0;
            while (0 <= i-sides && i+1+sides<s.size() && s[i-sides] == s[i+1+sides]){
                str = s[i-sides] + str + s[i+1+sides];
                sides++;
            }
            if (str.size() > longest_string.size()) {
                longest_string = str;
            }
        }
        return longest_string;
    }
};
