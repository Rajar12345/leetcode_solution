class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int> result;
      
      if(!root) return result;
      
      queue<Node*> temproots;
      
      temproots.push(root);
      
      while(!temproots.empty())
       {
                Node* topnode=temproots.front();
                temproots.pop();
                result.push_back(topnode->data);
                
                if(topnode->left)  temproots.push(topnode->left);
                if(topnode->right)  temproots.push(topnode->right);
           
       }
      
      return result;
    }
};
