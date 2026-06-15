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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        vector<ListNode*>ans(k);
        int c=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        int curr=c/k;
        int ext=c%k;
        temp=head;       
        for(int i=0;i<k;i++){            
            ans[i]=temp;
            ListNode* prev=nullptr;
            for(int i=0;i<curr+((ext>0)?1:0);i++){
                prev=temp;
                temp=temp->next;
            }
            if(prev){
                prev->next=nullptr;
            }
            
            if(ext>0){
                ext--;
            }   
        }       
        return ans;
    }
};