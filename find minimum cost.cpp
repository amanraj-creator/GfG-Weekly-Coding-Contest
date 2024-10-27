class Solution {
  public:
    long long minCost(int n, vector<int> &a) {
       long long oddcount=0,evencount=0,oddcost=0,evencost=0;
//counting even and odd number
       for(int i=0;i<n;i++){
           if(a[i]%2==0){
               evencount++;
            //cost to make even number odd   
               oddcost+=a[i];
           }
           else{
               oddcount++;
               //cost to make odd number even
               evencost+=a[i];
           }
       }
       // return the minimum
       return min(oddcost,evencost);
    }
};
