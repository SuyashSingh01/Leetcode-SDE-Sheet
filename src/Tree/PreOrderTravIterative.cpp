#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

// ----------------------------preorder- traversal-------------------------------

struct treenode
{
    int val;
    treenode *left;
    treenode *right;
    treenode(int val)
    {
        this->val= val;
        right = left = nullptr;
    }
};
class solution{

    public:
    vector<int> preorder(treenode *root){
        vector<int>ans;
        queue<treenode*>q;
        q.push(root);

        while(!q.empty()){
            treenode* node=q.front();
            int data=node->val;
            ans.push_back(data);
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }return ans;
    }
};

int main()
{
    struct treenode *mytree = new treenode(1);
    mytree->left = new treenode(2);
    mytree->right = new treenode(3);
    mytree->left->left = new treenode(4);
    mytree->left->right = new treenode(5);
    solution obj;
    vector<int>answer= obj.preorder(mytree);
    for(auto it:answer)
    cout<<it<<"";
    return 0;
}