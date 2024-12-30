class Solution {
  public:
  #define MOD 1000000007 // Define the modulo value to avoid large numbers
    int nthTerm(int n) {
        // Handle base cases directly
    if (n == 1 || n == 2) {
        return 1; // First two terms are 1
    }

    // Initialize variables for the first two terms
    long long prev2 = 1; // f(n-2)
    long long prev1 = 1; // f(n-1)
    long long curr;      // Current term f(n)

    // Loop to calculate terms from 3 to n
    for (int i = 3; i <= n; ++i) {
        // Calculate the current term using the recurrence relation
        curr = ((i * prev1) % MOD - ((i - 1) * prev2) % MOD  + ((i - 2) * 3) % MOD + MOD) % MOD; // Add MOD to handle negative values

        // Update previous terms for the next iteration
        prev2 = prev1;
        prev1 = curr;
    }
    return curr; // Return the nth term
    }
};
