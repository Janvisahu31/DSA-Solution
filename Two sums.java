public int[] twoSum(int[] nums, int target) {
        int i,j;
        for(i=0;i<nums.length;i++)
        {
            for(j=i+1;j<nums.length;j++){
                if(nums[i] + nums[j]==target){
                    return new int[]{i,j}; 
                    }
            }
        }
        return new int[] {};
    }  
 
}

// this is the simplest dsa quetion of finding the two places that adds up to given target.
//We simply used 2 for loop to traverse through the array and find all the combination of i and j that adds up to the target.
