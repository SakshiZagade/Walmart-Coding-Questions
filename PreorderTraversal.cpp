class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
        // write code here
           vector<int> result;
        if (!root) return result;

        stack<Node*> st;
        st.push(root);

        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();
            result.push_back(curr->data);

            // Push right child first so that left is processed first
            if (curr->right) st.push(curr->right);
            if (curr->left) st.push(curr->left);
        }

        return result;
        
    }
};
