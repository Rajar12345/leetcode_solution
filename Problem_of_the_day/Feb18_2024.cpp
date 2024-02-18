int sum=0;
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             if(root==NULL)
             {
                 return 0;
             }
             
             sumOfLeafNodes(root->left);
             sumOfLeafNodes(root->right);
             
             
             if(root->left==NULL && root->right==NULL)
             {
                 sum+=root->data;
             }
             
             return sum;
             
        }
