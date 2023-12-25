// Ques. Lowest Common Ancestor in a Binary Tree - https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        if(root == NULL || n1 == root -> data || n2 == root -> data)
            return root;
        auto left = lca(root -> left, n1, n2);
        auto right = lca(root -> right, n1, n2);
        if(left == NULL) return right;
        if(right == NULL) return left;
        return root;
    }
};