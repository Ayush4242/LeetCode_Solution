class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;         
        for (int x : nums) {
            if (j < 2 || x != nums[j - 2]) {
                nums[j] = x;
                j++;
            }
        }
        
        return j;
    }
};
