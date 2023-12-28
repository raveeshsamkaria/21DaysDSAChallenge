// Ques. Right View of Binary Tree - https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        if(!root)
            return ans;
        // Level Order
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();
                if(i == 0)
                    ans.push_back(node -> data);
                if(node -> right)
                    q.push(node -> right);
                if(node -> left)
                    q.push(node -> left);
            }
        }
        return ans;
    }
};