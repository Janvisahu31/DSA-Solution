vector<vector<int>> subsetsWithDup(vector<int>& nums) {

         int n = nums.size();

        int sub = 1<<n;
        vector<vector<int>> ans;
        set<vector<int>> ans1;

        sort(nums.begin(),nums.end());

        for(int num=0;num<sub;num++){
            vector<int> list;
            for(int i= 0;i<n;i++){
                if(num & (1<<i)){
                    list.push_back(nums[i]);
                }
            }
            ans1.insert(list);
        }

        for (auto it = ans1.begin(); it != ans1.end(); it++) {
      ans.push_back( * it);
    }
return ans;


        
    }

// same as subset quetion we just use set to store the answer and then insert all the answer to the vector to return a vector .. we can return the  set as well but quetion on leetcode has the given format.
