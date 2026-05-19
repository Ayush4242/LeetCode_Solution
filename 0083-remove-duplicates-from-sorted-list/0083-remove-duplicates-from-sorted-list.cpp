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
        if(head==nullptr){
            return head;
        }
        ListNode* temp=head;
        ListNode* trav=head->next;
        
        while(trav!=nullptr){
            if(trav->val!=temp->val){
                temp->next=trav;
                temp=temp->next;
            }
            
            trav=trav->next;
        }
        temp->next=nullptr;
        return head;
        
    }
};