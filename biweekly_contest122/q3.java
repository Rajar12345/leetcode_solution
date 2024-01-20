class Solution {
    public int minimumArrayLength(int[] nums) {
        
        int ct=0;
        int n=nums.length;
        Arrays.sort(nums);
        if(n>2 && nums[0]!=nums[1])
            return 1;
        int d=nums[0];//greatest common divisor
        for(int i: nums){
            d=f(d,i);
        }
        for(int i:nums){
            if(i==d)
                ct++;
        }
        return Math.max(1,(ct+1)/2);
    }
    private int f(int i,int j){
        while(j!=0){
            int temp=j;
            j=i%j;
            i=temp;

        }
        return i;
    }
    
}
