/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL || t2==NULL){
            if(t1==NULL)
                return t2;
            else
                return t1;
            return NULL;
        }
        if(t1!=NULL && t2!=NULL){
            t1->val+=t2->val;
            mergeTrees(t1->left, t2->left);
        }
        
        if(t1->left==NULL && t2->left !=NULL){
            t1->left=t2->left;
            cout<<"\n Root Node:"<<t1->val;
            cout<<"\n->left was null: Added:"<<t1->left->val;
        }
        if(t1->right==NULL && t2->right !=NULL){
            t1->right=t2->right;
            cout<<"\n Root Node:"<<t1->val;
            cout<<"\n->right was null: Added:"<<t1->right->val;
            return t1;
        }
        cout<<"\n Going Right from Root Node:"<<t1->val;
        mergeTrees(t1->right, t2->right);
        return t1;
    }
};
