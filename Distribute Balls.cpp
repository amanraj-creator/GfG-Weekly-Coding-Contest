>> BASICALLY WE HAVE TO CALCULATE (2^n-2)% 1e9+7 <<

class Solution {
  public:
    int distributeBalls(int n) {
      int mod=1e9+7;
      if(n<2) return 0; // BASE CASE (since each bag needs 1 ball)
      int totalways=1; //  start with 2^0 (when there is no ball)
      for(int i=0;i<n;i++){
          totalways=(totalways*2)%mod;
      }
      totalways-=2; // subtract two conditions when two balls in same bag
      return totalways;
    }
};

