class Solution {
  public:
    bool hasGeekSubsequence(string s) {
          string res = "geek";
    int k = 0; // Pointer for the target string "geek"

    // Iterate through the given string
    for (char c : s) {
        // If the current character matches the target character
        if (c == res[k]) {
            k++; // Move to the next character in "geek"
        }
        // If we've matched all characters in "geek", we can return true
        if (k == res.length()) {
            return true;
        }
    }
     return false;
    }
};
