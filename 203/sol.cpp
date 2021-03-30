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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        ListNode* cur = head;
        ListNode* pre = head;
        while(head && head->val == val)
            head = head->next;
        while(cur!=NULL){
            if(cur->val != val){
                pre = cur;
                cur = cur->next;
            }
            else{//if cur->val == val
                pre->next = cur->next;
                cur = cur->next;                    
            }
        }
        return head;
    }
};
