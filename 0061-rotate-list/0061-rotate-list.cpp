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
    ListNode* find(ListNode*temp,int tar){
        int c=1;
        while(temp!=nullptr){
            if(c==tar){
                break;
            }
            c++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        int c=1;
        ListNode* start=head;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            c++;
            temp=temp->next;
        }
        
        if(k%c==0){
            return head;
        }
        temp->next=head;
        k=k%c;
        ListNode* newtail=find(head,c-k);
        ListNode* newhead=newtail->next;
        newtail->next=nullptr;
        head=newhead;
        return newhead;
    }
};