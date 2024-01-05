// Ques. Merge Sort for Linked List - https://www.geeksforgeeks.org/problems/sort-a-linked-list/1

class Solution {
    Node* mergeList(Node* l1, Node* l2) {
        Node* node = new Node(0);
        Node* curr = node;

        while(l1 && l2) {
            if(l1 -> data <= l2 -> data) {
                curr -> next = l1;
                l1 = l1 -> next;
            }
            else {
                curr -> next = l2;
                l2 = l2 -> next;
            }
            curr = curr -> next;
        }
        curr -> next = (l1 != NULL) ? l1 : l2;
        return node -> next;
    }
    
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if(!head || !head -> next)
            return head;
        auto slow = head, fast = head, temp = head;

        while(fast && fast -> next) {
            temp = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        temp -> next = NULL;
        auto l1 = mergeSort(head);
        auto l2 = mergeSort(slow);
        return mergeList(l1, l2);
    }
};