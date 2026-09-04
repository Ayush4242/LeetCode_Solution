class Solution {
    public int helper(String text1, String text2,int ind1,int ind2,int[][]memo){
        if(ind1<0 || ind2<0){
            return 0;
        }
        if(memo[ind1][ind2]!=-1){
            return  memo[ind1][ind2];
        }
        if(text1.charAt(ind1)==text2.charAt(ind2)){
            return memo[ind1][ind2]=1+helper(text1,text2,ind1-1,ind2-1,memo);
        }
        else{
            return memo[ind1][ind2]=0+Math.max(helper(text1,text2,ind1-1,ind2,memo),helper(text1,text2,ind1,ind2-1,memo));
        }
    }
    public int longestCommonSubsequence(String text1, String text2) {
        int n=text1.length();
        int m=text2.length();
        int [][] memo=new int[n][m];
        for(int[] row:memo){
            Arrays.fill(row,-1);
        }
        return helper(text1,text2,n-1,m-1,memo);
    }
}