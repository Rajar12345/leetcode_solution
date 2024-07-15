TreeNode* createBinaryTree(vector<vector<int>>& A) {
        unordered_map<TreeNode*, TreeNode*> parentMap; 
        unordered_map<int, TreeNode*> m; 
        for (auto &v : A) {
            int p = v[0], c = v[1], isLeft = v[2];
            auto parent = m.count(p) ? m[p] : (m[p] = new TreeNode(p));
            auto child = m.count(c) ? m[c] : (m[c] = new TreeNode(c));
            if (isLeft) parent->left = child;
            else parent->right = child;
            parentMap[child] = parent;
        }
        auto root = m.begin()->second; 
        while (parentMap.count(root)) root = parentMap[root];
        return root;
    }
