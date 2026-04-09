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
            ListNode* newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;
        }
        return prev;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        stack<pair<int,int>>st;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(!st.empty() && st.top().first==temp->val){
                st.top().second++;
            }
            else{
                st.push({temp->val,1});
            }
            temp=temp->next;
        }
        ListNode* newhead=nullptr;
        ListNode* tail=nullptr;
        while(!st.empty()){
            if(!st.empty() && st.top().second==1){
                ListNode* dummy=new ListNode(st.top().first);
                if(tail==nullptr){
                    newhead=dummy;
                    tail=dummy;
                }
                else{
                    tail->next=dummy;
                    tail=tail->next;
                }                
                st.pop();
                
            }
            else{
                st.pop();
            }
        }
        return reverse(newhead);

    }
};