class Solution {
public:
    void in(TreeNode* root, vector<int>& v) {
        if (root != nullptr) {
            v.push_back(root->val);
            in(root->left, v);
            in(root->right, v);
        }
        else {
            v.push_back(INT_MIN);
        }
    }

    vector<int> inorder(TreeNode* p) {
        vector<int> v;
        in(p, v);
        
        return v;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v1;
        vector<int>v2;
        v1=inorder(p);
        for(int i=0;i<v1.size();i++){
          cout<<v1[i]<<" ";
        }
        cout<<endl;
        
        v2=inorder(q);
        for(int i=0;i<v2.size();i++){
          cout<<v2[i]<<" ";
        }
        cout<<endl;
        
        if(v1==v2){
            return true;
        }
        else{
           return  false;
        }
    }
};