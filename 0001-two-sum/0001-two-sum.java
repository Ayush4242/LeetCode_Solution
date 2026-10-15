class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        
        ArrayList<Integer>arr=new ArrayList();
        for(int i=0;i<nums.length;i++){
            if(mp.containsKey(target-nums[i])){
                return new int[]{i,mp.get(target-nums[i])};
            }
            mp.put(nums[i],i);
        }
        // int[] result=arr.stream().mapToInt(Integer::intValue).toArray();
        // return result;
        return new int[]{};
    }
}