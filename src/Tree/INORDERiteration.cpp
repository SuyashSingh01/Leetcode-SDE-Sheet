#include <bits/stdc++.h>
using namespace std;

struct treenode
{
    int data;
    treenode *left;
    treenode *right;
    treenode(int val)
    {
        data = val;
        right = left = nullptr;
    }
};
class inordertraverse
{
public:
    int inorder(treenode *root)
    {
        stack<treenode *> st;
        vector<int> ans;
        treenode *node = root;
        while (true)
        {
            if (node != NULL)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if (st.empty())
                    break;
                node = st.top();
                st.pop();
                ans.push_back(node->data);
                node=node->right;
            }
        }
        for (auto &it : ans)
            cout << it << " ";
    }
};
int main()
{
    struct treenode *mytree = new treenode(1);
    mytree->left = new treenode(2);
    mytree->right = new treenode(3);
    mytree->left->left = new treenode(4);
    mytree->left->right = new treenode(5);
    inordertraverse obj;
    obj.inorder(mytree);
    return 0;
}
//  O/P
// 4 2 5 1 3 