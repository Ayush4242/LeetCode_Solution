class Solution {
    public boolean isAnagram(String s, String t) {
        char[] ch=s.toCharArray();
        char[] ch1=t.toCharArray();
        Arrays.sort(ch);
        Arrays.sort(ch1);
        String str1=String.valueOf(ch);
        String str2=String.valueOf(ch1);
        if(str1.equals(str2)){
            return true;
        }
        return false;
    }
}