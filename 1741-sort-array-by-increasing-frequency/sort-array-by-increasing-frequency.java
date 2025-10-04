class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer,Integer> freq= new HashMap<>();

        for(int n: nums)freq.put(n,freq.getOrDefault(n,0)+1);

        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                int fi=freq.get(nums[i]);
                int fj=freq.get(nums[j]);
                if(fi >fj ||(fi==fj) && nums[i]<nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        return nums;
    }
}