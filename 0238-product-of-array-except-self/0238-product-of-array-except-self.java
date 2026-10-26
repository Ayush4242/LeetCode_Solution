class Solution {
    public int[] productExceptSelf(int[] nums) {
        //[1,2,3,4]=>suff=[1,2,1,1],pref=[1,1,1,1]
        int n=nums.length;
        int[] pre=new int[n];
        int[] suff=new int[n];
        Arrays.fill(pre,1);
        Arrays.fill(suff,1);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i+1];
        }
        int res[]=new int[n];
        for(int i=0;i<n;i++){
            res[i]=suff[i]*pre[i];
        }
        return res;

        

    }
}