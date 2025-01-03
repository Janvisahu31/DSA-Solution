vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        int sub = 1<<n;
        vector<vector<int>> ans;

        for(int num=0;num<sub;num++){
            vector<int> list;
            for(int i= 0;i<n;i++){
                if(num & (1<<i)){
                    list.push_back(nums[i]);
                }
            }
            ans.push_back(list);
        }
           
        return ans;
        
    }


// this quetion wants user to retuen the power set(set of all the subset) of the given input set.
// To do this we will be using binary or bit manipulation technique to take or remove the given elemwnt in the given list.
// sub = 1<< n give the list of 2^n list in binary format by bit manipulation and the loop is used for pushing the elment in the given answr vector.
