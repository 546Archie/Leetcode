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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        ListNode* tmp;
        while(cur!=NULL){
            while((cur->next!=NULL) && (cur->val == cur->next->val)){
                if(cur->next->next!=NULL){
                    tmp = cur->next;
                    cur->next = cur->next->next;
                    delete tmp;
                }
                else{
                    if(cur->next)
                        delete cur->next;
                    cur->next = NULL;
                }
            }
            cur = cur->next;
        }
        return head;
    }
};
