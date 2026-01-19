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
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            ListNode* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // ListNode* temp=head;
        // stack<int>st;
        // while(temp!=nullptr){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        
        // bool b=true;
        // while(temp!=nullptr){
        //     if(temp->val!=st.top()){
        //         b=false;
        //         break;
        //     }
        //     else{
        //         st.pop();
        //         temp=temp->next;
        //     }
        // }
        // return b;
        
        if(head==nullptr && head->next==nullptr){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;            
        }
        ListNode* res=reverse(slow->next);
        ListNode* t1=head;
        ListNode* t2=res;
        bool b=true;;
        while(t1!=nullptr && t2!=nullptr){
            if(t1->val!=t2->val){
                b=false;
                return false;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return b;
        
    }
};