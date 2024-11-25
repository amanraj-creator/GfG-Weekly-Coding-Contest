class Solution {
  public:
    int minTime(int k, vector<int> &positions) {
       // Step 1: Sort the positions array
    // Sorting helps us analyze contiguous subarrays of k balloons in an ordered manner
    sort(positions.begin(), positions.end());

    int n = positions.size(); // Number of balloons
    int minTime = INT_MAX;    // Initialize the minimum time to a large value

    // Step 2: Use a sliding window to find the optimal group of k balloons
    for (int i = 0; i <= n - k; ++i) {
        // Identify the current window of k balloons
        int left = positions[i];            // Leftmost balloon in the window
        int right = positions[i + k - 1];  // Rightmost balloon in the window

        // Step 3: Calculate the time to burst balloons in two scenarios:
        // Case 1: Move to the leftmost balloon first, then the rightmost
        int timeLeftFirst = abs(left) + abs(right - left);

        // Case 2: Move to the rightmost balloon first, then the leftmost
        int timeRightFirst = abs(right) + abs(right - left);

        // Update the minimum time among the calculated scenarios
        minTime = min({minTime, timeLeftFirst, timeRightFirst});
    }

    // Step 4: Return the minimum time found
    return minTime;
    }
};
