
class Solution {
  public:
    int firsthour(int n, vector<vector<int>> arr) {
          int mn = -1; // maximum start
          int mx = INT_MAX; // minimum end
        for (int i = 0; i < n; i++) {
            mn = max(mn, arr[i][0]);
            mx = min(mx, arr[i][1]);
        }

        return mx >= mn ? 1 : 0; //If the minimum end time is greater 
                                 //than or equal to the maximum start time, 
                            //it means there is an overlap, and we returns true.
                                 //otherwise, it returns false.
    }
};


Complexity:
Time Complexity: O(n), As we iterate through the n intervals exactly once.
Space Complexity: O(1), As we are using constant extra space.
