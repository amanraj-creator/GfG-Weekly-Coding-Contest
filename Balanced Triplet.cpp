class Solution {
  public:
    long long minOps(long long a, long long b, long long c) {
     vector<long long>vec;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        sort(vec.begin(),vec.end());
        
        long long p=vec[1]-vec[0];
        
        long long q=vec[2]-vec[1];
        
        long long ans=ceil(abs(p-q)/(double)2);
        
        return ans;
    }
};


Complexity:
Time Complexity: O(1), As the operations within the check and minOps functions are constant-time operations, involving simple arithmetic and comparison.
Space Complexity: O(1), As we are using constant extra space.
