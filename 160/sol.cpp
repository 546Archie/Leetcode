/*struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        unordered_set<ListNode* > A; 
        ListNode *taila;
        ListNode *tailb;
        taila = headA;
        tailb = headB;

        while(taila!=NULL){
            A.insert(taila);
            taila = taila->next;
        }
        
        while(tailb!=NULL){
            if(A.find(tailb)!=A.end()){
                return tailb;
            }
            tailb = tailb->next;
        }
        return NULL;
    }
};
