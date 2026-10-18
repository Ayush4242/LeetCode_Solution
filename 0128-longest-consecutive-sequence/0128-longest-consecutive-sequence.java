class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer>set=new HashSet();
		for(int i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        int maxi=0;
        for(int ch:set){
            int c=1;
            if(!set.contains(ch-1)){
                while(set.contains(ch+1)){
                    c++;
                    ch++;
                }
                maxi=Math.max(maxi,c);
            }
        }
        return maxi;
    }
}