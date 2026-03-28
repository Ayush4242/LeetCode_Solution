class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0, j = 0;
        vector<int> ans;
        deque<int> dq;  // use deque instead of queue

        while (j < nums.size()) {

            // maintain decreasing order (remove smaller elements from back)
            while (!dq.empty() && nums[j] > dq.back()) {
                dq.pop_back();
            }

            dq.push_back(nums[j]);

            // when window size is less than k → just expand
            if (j - i + 1 < k) {
                j++;
            }
            // when window size == k
            else if (j - i + 1 == k) {

                // front always has max
                ans.push_back(dq.front());

                // before sliding, check if outgoing element is max
                if (nums[i] == dq.front()) {
                    dq.pop_front();
                }

                i++;
                j++;
            }
        }

        return ans;
    }
};