#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

TreeNode* buildBSTFromArray(vector<int>& arr, int left, int right) {
    if (left > right) {
        return nullptr; // Base case: Empty subtree.
    }

    int mid = left + (right - left) / 2; // Calculate the middle element.
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = buildBSTFromArray(arr, left, mid - 1); // Recursively build the left subtree.
    root->right = buildBSTFromArray(arr, mid + 1, right); // Recursively build the right subtree.

    return root;
}

TreeNode* buildBalancedBST(vector<int>& arr) {
    return buildBSTFromArray(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> sortedArr = {1, 2, 3, 12, 5, 6, 7, 8, 9};

    TreeNode* root = buildBalancedBST(sortedArr);
cout<<root->left->left->val;

    // Now, the 'root' points to the root of the balanced binary search tree.

    return 0;
}
