class Solution {
    public String longestCommonPrefix(String[] strs) {
        String st="";
        for(int i=0;i<strs[0].length();i++){
            char c=strs[0].charAt(i);
            int j=1;
            while(j<strs.length){
                if(i>=strs[j].length() || strs[j].charAt(i)!=c){
                    return st;
                
                }
                j++;
            }
            st+=c;
        }
        return st;
    }
}