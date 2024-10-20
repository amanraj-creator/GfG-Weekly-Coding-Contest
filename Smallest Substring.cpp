class Solution {
  public:
    string smallestSubstring(string str, int k) {
   int n = str.length();
  // If the string length is less than k, return an empty string  
    if (n < k) {
        return NULL;  
    }
    int minScore = 1e9;  // To track the minimum score 
    int currentScore = 0;  // To track the current window score
    int minIndex = 0;// To track the starting index of the minimum score substring
     // Return the substring with the lowest score
    for (int i = 0; i < k; i++) {
        currentScore += int(str[i]);
    }
    // Initialize the minimum score with the first window's score
    minScore = currentScore;
    
     // Slide the window across the string
    for (int i = 1; i <= n - k; i++) {
// Update the current score by removing the left character and adding the right character
        currentScore = currentScore - int(str[i - 1]) + int(str[i + k - 1]);
        if (currentScore < minScore) {
            minScore = currentScore;
            minIndex = i;
        }
    }
     // Return the substring with the lowest score
    return str.substr(minIndex, k);
    }
};


TIME COMPLEXITY: O(n*k)
