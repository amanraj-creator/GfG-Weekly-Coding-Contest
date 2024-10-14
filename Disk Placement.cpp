class Solution {
  public:
    long long maxProduct(int n) {
     long long p,q;
     if(n%2==0){
     p=n/2,q=n/2;
     }
     else{
     p=n/2;q=n/2+1;
     }
     return p*q;
    }
};
