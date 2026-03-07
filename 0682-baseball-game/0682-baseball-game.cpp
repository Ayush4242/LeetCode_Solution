class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto i:operations){            
            if(i=="C"){
                if(!st.empty()){
                
                st.pop();
                }
            }
            else if(i=="D"){
                st.push(st.top()*2);
            }
            else if(i=="+"){
                int a=st.top();
                if(!st.empty()){                
                    st.pop();
                }
                int b=st.top();
                if(!st.empty()){               
                    st.pop();
                }
                st.push(b);
                st.push(a);
                
                st.push(a+b);
            }
            else{
                st.push(stoi(i));
            }
        }
        
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};