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
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        // ListNode* temp=head;
        // stack<int>st;
        // while(temp!=nullptr){
        //     if(st.empty()){
        //         st.push(temp->val);
        //     }
        //     else{
        //         while(!st.empty() && st.top()<temp->val){
        //         st.pop();
        //         }
        //         st.push(temp->val);
        //     }
        //     temp=temp->next;
        // }
        // // ListNode* newnode=new ListNode(st.top());
        // ListNode* tail=nullptr;
        // while(!st.empty()){
        //     ListNode* newnode=new ListNode(st.top());
        //     newnode->next=tail;
        //     tail=newnode;
        //     st.pop();
        // }
        // return tail;
        ListNode* ans=reverse(head);
        ListNode* temp=ans;
         int maxi=ans->val;
        while(temp!=nullptr && temp->next!=nullptr){
            if(temp->next->val<maxi){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
                maxi=temp->val;
            }
        }
        return reverse(ans);


    }
};