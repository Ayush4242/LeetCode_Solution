class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length==0){
            return 0;
        }
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        int maxi=Integer.MIN_VALUE;
        for(int i:mp.keySet()){
            int c=0;
            if(!mp.containsKey(i-1)){
                int j=i;
                while(mp.containsKey(j)){
                    j++;
                    c++;
                }
                maxi=Math.max(maxi,c);
            }

        }
        return maxi;

    }
}