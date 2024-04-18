 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        stack<int> s;
        vector<vector<int>>v1;
        if(root==nullptr){
            return v1;
        }
        bool reverse = false;
        q.push(root);
        while (q.empty() == false) {
            vector<int>v;
            int count = q.size();
            for (int i = 0; i < count; i++) {

                TreeNode* curr = q.front();
                q.pop();
                if (reverse) {
                    s.push(curr->val);
                } else {
                    v.push_back(curr->val);
                }
                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            if (reverse) {
                while (s.empty() == false) {
                    v.push_back(s.top());
                    s.pop();
                }
            }
            reverse=!reverse;
            v1.push_back(v);
        }
        return v1;
    }

    //method-2

     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // using two stack
        vector<vector<int>>v1;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        s1.push(root);
        if(root==nullptr){
            return v1;
        }
        while(!s1.empty()||!s2.empty()){
            vector<int>v;
            while(!s1.empty()){
                TreeNode* curr=s1.top();
                s1.pop();
                v.push_back(curr->val);
                if(curr->left){
                    s2.push(curr->left);
                }
                if(curr->right){
                    s2.push(curr->right);
                }
            }

            v1.push_back(v);
            v.clear();

            while(!s2.empty()){
                TreeNode* curr=s2.top();
                s2.pop();
                v.push_back(curr->val);
                if(curr->right){
                    s1.push(curr->right);
                }
                if(curr->left){
                    s1.push(curr->left);
                }
            }
            if(v.size()!=0){

            v1.push_back(v);
            }
        }
        return v1;
    }