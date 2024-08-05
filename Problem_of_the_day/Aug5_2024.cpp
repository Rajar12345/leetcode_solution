if(!root) return {};
        else if(!root->left && !root->right) return {root->data};
        map<int, int>mpp;
        queue<pair<Node*, int>>q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            
            Node* node=it.first;
            int line=it.second;
            mpp[line]=node->data;
            
            if(node->left){
                q.push({node->left, line-1});
            }
            if(node->right){
                q.push({node->right, line+1});
            }
        }
        vector<int>ans;
        
        for(auto &it:mpp){
            ans.push_back(it.second);
        }
        return ans;
