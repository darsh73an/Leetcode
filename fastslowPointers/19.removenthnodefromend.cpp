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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* slow = head;
       ListNode* fast = head;

       for(int i=0; i<n; i++){ // if n=2 then fast will be at only 2nd index from st not deleting node left
            fast = fast->next;
       }

       //if n is head
       if(!fast) return head->next;

        // move both slow and fast
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;

        return head;
    }
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;

        // Step 1: find size
        while (temp) {
            size++;
            temp = temp->next;
        }

        // Step 2: if removing head
        if (n == size) {
            return head->next;
        }

        // Step 3: go to node before target
        ListNode* prev = head;
        for (int i = 1; i < size - n; i++) {
            prev = prev->next;
        }

        // Step 4: delete node
        prev->next = prev->next->next;

        // Step 5: return head
        return head;
    }
};