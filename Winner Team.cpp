class Solution {
  public:
    int winnerTeam(int N, vector<int> &X, vector<int> &Y, vector<int> &Z) {
      int x= *max_element(X.begin(),X.end());
      int y= *max_element(Y.begin(),Y.end());
      int z= *max_element(Z.begin(),Z.end());
      
      int winnerteam=-1;
      
      if(x>=y && x>=z)
       winnerteam=0; // TEAM X WINS
      else if(y>=x && y>=z)
       winnerteam=1; // TEAM Y WINS
      else if(z>=x && z>=y)
       winnerteam=2; // TEAM Z WINS
       
       return winnerteam;
    }
};

//Time Complexity: O(n), because finding the maximum element in each vector (X, Y, Z) takes linear time, and there are three such operations.
//Space Complexity: O(1), As we are using constant extra space.
