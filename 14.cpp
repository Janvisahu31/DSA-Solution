 string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        if (n == 0) return "";


        int m = strs[0].size();
        int o = strs[n-1].size();

        string ans="";

        sort(strs.begin(), strs.end());
        for(int i=0;i<min(m,o);i++){
            if(strs[0][i] == strs[n-1][i]){
                ans+=strs[0][i];
            }
            else{
                break;
            }
        }
        return ans; 
    }

// to ease the solution we first sort the array of string in lexicographical order.
// Because the longest common substring will lie between this two
// then we compare each character of first and last string to get the longest common substring.
