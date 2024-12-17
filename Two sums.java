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

// C++ code for the same

// vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] + nums[j] == target) {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }


//python code 

// def twoSum(nums, target):
//     for i in range(len(nums)):
//         for j in range(i + 1, len(nums)):
//             if nums[i] + nums[j] == target:
//                 return [i, j]
//     return []
