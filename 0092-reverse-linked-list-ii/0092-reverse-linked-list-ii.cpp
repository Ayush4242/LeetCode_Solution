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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
        int c=1;
        stack<int>st;
        while(temp!=nullptr){
            if(c>=left && c<=right){
                st.push(temp->val);
            }
            c++;
            temp=temp->next;
        }
        temp=head;
        c=1;
        while(temp!=nullptr){
            if(c>=left && c<=right){
                temp->val=st.top();
                st.pop();

            }
            c++;
            temp=temp->next;

        }
        return head;
    }
};