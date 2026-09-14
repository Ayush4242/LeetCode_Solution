class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer>mp=new HashMap<>();
        int i=0,j=0,maxi=0;
        while(j<s.length()){
            char ch=s.charAt(j);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
            while(mp.get(ch)>1){
                char ch1=s.charAt(i);
                mp.put(ch1,mp.get(ch1)-1);
                i++;
            }
            maxi=Math.max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
}