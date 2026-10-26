class Solution {
    public String reverseWords(String s) {
        //eulb si yks eht
        StringBuilder sb=new StringBuilder(s).reverse();
        String[] str=sb.toString().split(" ");
        String fin="";
        for(String word:str){
            StringBuilder sb1=new StringBuilder(word).reverse();
            if(sb1.toString()!=""){
                fin+=" "+sb1.toString();
            }
        }
        return fin.substring(1);
    }
}