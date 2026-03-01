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
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        if(c==n){
            return head->next;
        }
        if(n==1 && c==1){
            return nullptr;
        }
        int rem=c-n,res=0;
        temp=head;
        while(res<rem-1){
            temp=temp->next;
            res++;
        }
        
        temp->next=temp->next->next;
        
        return head;

    }
};