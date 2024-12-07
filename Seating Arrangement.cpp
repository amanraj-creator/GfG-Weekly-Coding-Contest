class Solution {
public:
    int maxStudentsAlone(int k, int n, int m) {
        // Step 1: Check if seating all students is possible
        if (1LL * m * k < n) return -1;

        // Step 2: If enough benches for everyone to sit alone
        if (k >= n) return n;

        // Step 3: Assign one student per bench and calculate remaining
        n -= k; // Remaining students after filling one student per bench

        // Step 4: Calculate extra benches needed for remaining students
        int extraBenches = (n + (m - 2)) / (m - 1); // Ceiling of (n / (m-1))

        // Step 5: Maximum students who can sit alone
        return k - extraBenches;
    }
};
