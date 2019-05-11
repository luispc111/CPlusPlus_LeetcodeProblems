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
    ListNode* reverseList(ListNode* head) {
        
        // Si no hay nacesidad de hacer cambios
        if (head == NULL || head->next == NULL){
            return head;
        }
        
        // Si solo hay DOS elementos
        if(head->next->next == NULL){
            ListNode* curr = head;
            head = head->next;
            head->next = curr;
            curr->next = NULL;
           // delete curr;
            return head;
        }
        
        // Si hay TRES o + elementos
        ListNode* curr = head;
        ListNode* currfront = curr->next;
        
        head = currfront;
        currfront = currfront->next;
        head->next = curr;
        curr->next = NULL;
        curr=head;
                
        while(currfront != NULL){
            head = currfront;
            currfront = currfront->next;
            head->next = curr;
            curr=head;
        }
        
        // delete curr;
        // delete currfront;
        return head;
    }
};