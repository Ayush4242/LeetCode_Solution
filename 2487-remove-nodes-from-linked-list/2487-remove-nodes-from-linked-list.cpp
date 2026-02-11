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
    ListNode* removeNodes(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp!=nullptr){
            st.push(temp->val);
            temp=temp->next;
        }
        int start=st.top();
        st.pop();
        int maxi=start;
        ListNode* newNode=new ListNode(start);
        while(!st.empty()){
            int curr=st.top();
            st.pop();
            if(curr<maxi){
                continue;
            }
            else{
                ListNode* resNode=new ListNode(curr);
                resNode->next=newNode;
                newNode=resNode;
                maxi=curr;
            }
        }
        return newNode;
    }
};