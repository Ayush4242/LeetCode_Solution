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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* smalldummy=new ListNode(0);
        ListNode* largedummy=new ListNode(0);
        ListNode* smalltail=smalldummy;
        ListNode* largetail=largedummy;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(temp->val<x){
                smalltail->next=temp;
                smalltail=smalltail->next;
            }
            else{
                largetail->next=temp;
                largetail=largetail->next;
            }
            temp=temp->next;
        }
        largetail->next=nullptr;
        smalltail->next=largedummy->next;
        return smalldummy->next;

    }
};