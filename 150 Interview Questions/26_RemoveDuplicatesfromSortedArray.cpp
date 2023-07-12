class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
    
        int ticker = 1;
    
         for (int i = 1; i < size; i++) {
            if (nums[i] != nums[ticker - 1]) {
                nums[ticker] = nums[i];
                ticker++;
            }
        }
    
        return ticker;
    }
};