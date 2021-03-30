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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode *head;
        ListNode *tail;

        if(l1==NULL||l2==NULL){
            if(l1)
                return l1;
            else
                return l2;
        }

        l1->val <= l2->val ? (head = tail = l1, l1 = l1->next) : (head = tail = l2, l2 = l2->next);
                
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2 ->next;
            }
            tail = tail->next;
        }
        if(l1 == NULL){
            while(l2!=NULL){
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }
        }
        if(l2 == NULL){
            while(l1!=NULL){
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            }
        }

        return head;
    }
};
