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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;

        //1 size
        int n = 1;
        ListNode* temp = head;
        while(temp->next){
            temp = temp->next;
             n++;
        }// now temp will be at end

        //2 optimize k
        k = k % n;
        if(k == 0) return head;
        
        //circular
        temp->next = head; // makes circular

        //3 move newTail until steps become 0
        int steps = n-k;
        ListNode* newTail = head;
        while(--steps){
            newTail = newTail->next;
        }

        //4 remove circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};