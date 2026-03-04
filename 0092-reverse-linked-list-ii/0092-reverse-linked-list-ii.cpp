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
    ListNode* reverse(ListNode* node,int left,int right){
        ListNode* curr=node;
        ListNode* prev=nullptr;
        int c=left;
        while(curr!=nullptr && c<=right){
            ListNode* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
            c++;
        }
        node->next=curr;
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr){
            return nullptr;
        }
        if(left==1){
            return reverse(head, left, right);
        }
        int c=1;
        ListNode* temp=head;
        while(temp!=nullptr && c<left-1){
            temp=temp->next;
            c++;
        }
        temp->next=reverse(temp->next,left,right);
        return head;
    }
};