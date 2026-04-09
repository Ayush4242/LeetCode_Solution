/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1=headA;
        ListNode * temp2=headB;
        int c=0,c1=0;
        while(temp1!=nullptr){
            c++;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            c1++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(c>c1){
            while(temp1!=nullptr && c>c1){
                temp1=temp1->next;
                c--;
            }
        }
        else{
            while(temp2!=nullptr && c1>c){
                temp2=temp2->next;
                c1--;
            }
        }
        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return nullptr;
    }
};