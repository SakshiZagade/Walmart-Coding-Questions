class Solution {
  public:
  
    // Helper function to check balance and return height
    int checkHeight(Node* root) {
        if (root == NULL) return 0; // Base case: height of NULL is 0

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1) return -1; // If left subtree is unbalanced, stop

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1) return -1; // If right subtree is unbalanced, stop

        // If height difference is more than 1, return -1 (unbalanced)
        if (abs(leftHeight - rightHeight) > 1) return -1;

        return 1 + max(leftHeight, rightHeight);  // Compute the correct height
    }

    bool isBalanced(Node* root) {
        return checkHeight(root) != -1;  // If -1 is returned, the tree is unbalanced
    }
