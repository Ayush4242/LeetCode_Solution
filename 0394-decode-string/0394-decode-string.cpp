class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for (char c : s) {
            if (c != ']') {
                st.push(c);
            } 
            else {
                string curr = "";

                // get string inside []
                while (!st.empty() && st.top() != '[') {
                    curr += st.top();
                    st.pop();
                }
                reverse(curr.begin(), curr.end());

                st.pop(); // remove '['

                // get number
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());

                int k = stoi(num);

                // push repeated string back
                while (k--) {
                    for (char ch : curr) {
                        st.push(ch);
                    }
                }
            }
        }

        // build result
        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};