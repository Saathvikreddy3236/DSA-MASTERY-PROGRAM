class Solution {
public:
    int ans = 0;

    pair<int, int> postorder(TreeNode* root) {
        if (root == nullptr)
            return {0, 0};

        // Left
        auto left = postorder(root->left);

        // Right
        auto right = postorder(root->right);

        // Root
        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;

        // Check average
        if (root->val == sum / count)
            ans++;

        // Return sum and count to parent
        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        postorder(root);
        return ans;
    }
};
