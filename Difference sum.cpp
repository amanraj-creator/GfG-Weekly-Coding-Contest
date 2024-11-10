/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int differenceSum(Node* root1, Node* root2) {
      int totalSum = 0;
        queue<Node*> q1, q2;
        if (root1) q1.push(root1);
        if (root2) q2.push(root2);

        while (!q1.empty() || !q2.empty()) {
            Node* node1 = nullptr, *node2 = nullptr;

            if (!q1.empty()) {
                node1 = q1.front();
                q1.pop();
            }
            if (!q2.empty()) {
                node2 = q2.front();
                q2.pop();
            }

            int data1 = node1 ? node1->data : 0;
            int data2 = node2 ? node2->data : 0;
            totalSum += abs(data1 - data2);
            
            if (node1) {
                if (node1->left) q1.push(node1->left);
                if (node1->right) q1.push(node1->right);
            }
            
            if (node2) {
                if (node2->left) q2.push(node2->left);
                if (node2->right) q2.push(node2->right);
            }
        }
        return totalSum;
    }
};
