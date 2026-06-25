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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //BC
        if(list1 == NULL){ return list2;}
        if(list2 == NULL){ return list1; }

        // recursive call
        if( list1->val <= list2->val ){ // then l1 val will be the head of merged list
            list1->next = mergeTwoLists(list1->next,list2);  // list1->next means head->next or curr->next
            return list1;
        }else{   // 1val > val2
            list2->next = mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
};