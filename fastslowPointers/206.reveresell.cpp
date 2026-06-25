/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;


        while(curr != NULL){
            ListNode* nextNode = curr->next;

            // 1 -> curr next to prev
            curr->next = prev;

            // 2 -> update prev curr next by one
            prev = curr;
            curr = nextNode;
        }    
        return prev; // prev will be head
    }
};