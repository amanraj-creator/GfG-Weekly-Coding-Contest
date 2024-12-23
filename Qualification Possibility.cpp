class Solution {
  public:
    bool isPossible(string &s) {
       int win = 0;

        // Count the number of 'W' characters in the string
        for (auto it : s) {
            if (it == 'W')
                win++;
        }

        // Calculate the total possible wins
        int totalPossibleWins = win + (14 - s.size());

        // Return true if total possible wins are at least 8
        return (totalPossibleWins >= 8);

    }
};
