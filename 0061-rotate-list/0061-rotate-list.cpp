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
    ListNode* find(ListNode* temp, int tar){
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
        int c=1;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            c++;
            temp=temp->next;
        }
        if(c==k){
            return head;
        }
        k=k%c;
        temp->next=head;
        ListNode* newnode=find(head,c-k);
        ListNode* newhead=newnode->next;
        newnode->next=nullptr;
        return newhead;
    }
};