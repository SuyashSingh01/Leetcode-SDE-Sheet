#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <complex>
 
using namespace std;
 
typedef long long LL;
typedef pair<LL, LL> PL;
typedef vector<LL> VL;
typedef vector<PL> VPL;
typedef vector<VL> VVL;
 
typedef pair<int, int> PI;
typedef vector<int> VI;
typedef vector<PI> VPI;
typedef vector<vector<int>> VVI;
typedef vector<vector<PI>> VVPI;
 
typedef long double LD;
typedef pair<LD, LD> PLDLD;
 
typedef complex<double> CD;
typedef vector<CD> VCD;
 
typedef vector<string> VS;
#define P pop_back
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
 
#define sz(x) ((int)x.size())
#define LEN(x) ((int)x.length())
#define ALL(x) begin(x), end(x)
#define RSZ resize
#define ASS assign
#define REV(x) reverse(x.begin(), x.end());
 
#include <iostream>
#include <vector>

using namespace std;

// ----------------------binary tree------------------------------------
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

TreeNode* buildTreeFromArray(vector<int>& arr, int i) {

    if (i >= arr.size() || arr[i] == -1) {
        return nullptr; // Base case: Reached the end of the array or encountered a null node (-1).
    }

    TreeNode* root = new TreeNode(arr[i]);
    root->left = buildTreeFromArray(arr, 2 * i + 1); // Recursive call to build left subtree.
    root->right = buildTreeFromArray(arr, 2 * i + 2); // Recursive call to build right subtree.

    return root;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, -1, 5, 6};

    TreeNode* root = buildTreeFromArray(arr, 0);
    cout<<root->left->left->val;
    // Now, the 'root' points to the root of the binary tree constructed from the array.

    return 0;
}
