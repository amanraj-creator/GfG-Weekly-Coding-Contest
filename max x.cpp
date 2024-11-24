class Solution {
  public:
    int findMaxX(int n) {
      int ans = 0; // Variable to store the maximum x
        for (int x = 0; (1 << x) <= n; x++) { // Iterate while 2^x <= n
            ans = x;  // Update ans with the current value of x
        }
        return ans; // Return the maximum x
    }
};
