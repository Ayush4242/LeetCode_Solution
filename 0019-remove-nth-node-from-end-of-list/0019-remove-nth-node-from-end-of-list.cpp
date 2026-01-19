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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(n==1){
        //     if(head->next==nullptr){
        //         return nullptr;
        //     }
        // }
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        int tar=c-n;
        // if(tar==n){
        //     temp=head;
        //     while(temp->next!=nullptr && temp->next->next!=nullptr){
        //         temp=temp->next;
        //     }
        //     temp->next=nullptr;
        //     return head;
        // }
        if(tar==0){
            return head->next;
            // return head;
        }
        else{       
        temp=head;
        while(temp!=nullptr && tar>1){
            temp=temp->next;
            tar--;
        }
        temp->next=temp->next->next;
        }
        return head;
    }
};