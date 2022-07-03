vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hash;
        
        for(int i = 0; i < nums.size(); ++i) {
            int numberTarget = target - nums[i];
            
            if (hash.find(numberTarget) != hash.end()) {
                ans.push_back(hash[numberTarget]);
                ans.push_back(i);
                
                return ans;
            }
            
            hash[nums[i]] = i;
        }
        
        return ans;
    }
