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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> result;
        if(head == NULL){
            return result;
        }
        if(head->next == NULL){
            result.insert(result.end(), 0);
            return result;
        }
        
        ListNode *cons = head;
        ListNode *aux = cons;
        bool foundOne = false;
        while(cons != NULL){
            aux = cons->next;
            while(!foundOne && aux != NULL){
                if(aux->val > cons->val){
                    result.insert(result.end(), aux->val);
                    foundOne=true;
                }
                aux = aux->next;
            }
            if(!foundOne){
                result.insert(result.end(), 0);
            }
            cons = cons->next;
            foundOne = false;
        }
        return result;
    }
};