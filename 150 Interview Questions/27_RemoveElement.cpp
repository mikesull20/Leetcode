class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ticker = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(nums[i] == val){
                for(int j = i; j < size - 1; j++){
                    nums[j] = nums[j+1];
                }
                nums[size - 1] = 0;
                i--;
                size--;
            }else{
                ticker++;
            }
        }
        return ticker;
        
    }
};