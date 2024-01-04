// Ques. Reverse a Linked List - https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

class Solution
{
    Node* prev=NULL,* curr=NULL;
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL)
            return curr;
        curr = head;
        head = head -> next;
        curr -> next = prev;
        prev = curr;
        head = reverseList(head);
        return head;
    }  
};