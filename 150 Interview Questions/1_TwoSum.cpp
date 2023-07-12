class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;

        for(auto ir = nums.cbegin(); ir != nums.cend(); ir++)
        {
            for(auto jr = nums.cbegin() + 1; jr != nums.cend(); jr++ ){
     
                if(*jr + *ir == target && ans.empty() && jr != ir)
                {
                    ans.push_back(ir - nums.begin());
                    ans.push_back(jr - nums.begin());
                }
            }
        }

        return ans;
    }
};