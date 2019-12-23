/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL){
            return head;
        }
        if(head->next == NULL){
            return head;
        }
        
        ListNode *ptr1 = head;
        ListNode *ptr2 = head->next;
        while(ptr2 != NULL){
            if (ptr1->val == ptr2->val){
                ptr2 = ptr2->next;
                ptr1->next = ptr2;
            }
            else{
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }   
        }
        return head;
    }
};
