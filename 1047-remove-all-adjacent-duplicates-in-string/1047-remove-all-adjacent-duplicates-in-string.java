class Solution {
    public String removeDuplicates(String s) {
        Stack<Character>st=new Stack<>();
        String str="";
        for(char ch:s.toCharArray()){
            if(!st.empty() && st.peek()==ch){
                st.pop();
            }            
            else{
                st.add(ch);
            }
            
        }
        while(!st.empty()){
            char top=st.peek();
            str+=top;
            st.pop();
        }
        String sb=new StringBuilder(str).reverse().toString();
        return sb; 
    }
}