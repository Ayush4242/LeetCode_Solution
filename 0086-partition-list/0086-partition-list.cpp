class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummysm = new ListNode(0);
        ListNode* dummylar = new ListNode(0);

        ListNode* tailsm = dummysm;
        ListNode* taillar = dummylar;

        ListNode* t1 = head;
        while(t1 != nullptr){
            if(t1->val < x){
                tailsm->next = t1;
                tailsm = tailsm->next;
            }
            else{           
                taillar->next = t1;
                taillar = taillar->next;
            }
            t1 = t1->next;
        }
        taillar->next = nullptr;          
        tailsm->next = dummylar->next;

        return dummysm->next;
    }
};