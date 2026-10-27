class Solution {
    public boolean isPalindrome(String s) {
        // String val=s;
        String str="";
        for(char ch:s.toCharArray()){
            if(Character.isLetterOrDigit(ch)){
                str+=Character.toLowerCase(ch);
            }            
        }

        StringBuilder sb=new StringBuilder(str).reverse();
        String res=sb.toString();
        if(str.equals(res)){
            return true;
        }
        return false;
    }
}