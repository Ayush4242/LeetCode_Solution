class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>mp=new HashMap<>();
        ArrayList<Integer>arr=new ArrayList();
       HashMap<Integer,Integer>dup=new HashMap<>();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
            if(!dup.containsKey(i) && mp.get(i)>n/3){
                arr.add(i);
                dup.put(i,dup.getOrDefault(i,0)+1);
            }
        }
        return arr;

    }
}