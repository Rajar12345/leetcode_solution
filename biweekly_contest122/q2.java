class Solution { 
    public boolean canSortArray(int[] nums) { 
        
        int j=0,n=nums.length,k=0; 
        int ct[]=new int[101]; 
        for(int i:nums){ 
            ct[j++]=setbits(i); 
        } 
        while(k<nums.length){ 
        for(int i=1;i<n;i++){ 
            if(ct[i]==ct[i-1] && nums[i]<nums[i-1]){ 
                int temp=nums[i]; 
                nums[i]=nums[i-1]; 
                nums[i-1]=temp; 
            }    
        } 
        if(check(nums)) return true; 
            k++; 
        } 
        return false; 
    } 
    public boolean check(int nums[]){ 
        for(int i=0;i<nums.length-1;i++){ 
            if(nums[i]>nums[i+1]) return false; 
        } 
        return true; 
    } 
    public int setbits(int num){ 
        int c=0; 
        for(int i=31;i>=0;i--){ 
            if(((num>>i)&1) ==1) c++; 
        } 
        return c; 
    } 
}
