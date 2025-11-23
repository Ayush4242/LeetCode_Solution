class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // if (!head) return nullptr;

        // for (int i = 0; i < nums.size(); i++) {
        //     ListNode* temp = head;
        //     ListNode* prev = nullptr;

        //     while (temp != nullptr) {
        //         if (temp->val == nums[i]) {
        //             if (temp == head) { 
        //                 head = head->next; 
        //                 temp = head;
        //             } else {
        //                 prev->next = temp->next;
        //                 temp = temp->next;
        //             }
        //         } else {
        //             prev = temp;
        //             temp = temp->next;
        //         }
        //     }
        // }
        // return head;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        
        while(mp.find(head->val)!=mp.end()){
            head=head->next;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
            if(mp.find(temp->val)!=mp.end()){
                prev->next=temp->next;
            }
            else{
                prev=temp;
            }
            temp=temp->next;
        }
        return head;

    }
};
