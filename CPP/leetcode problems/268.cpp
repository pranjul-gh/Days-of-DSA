class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            int corrIdx = nums[i];
            if (nums[i]<nums.size() && nums[i] != nums[corrIdx]){
                swap(nums[i], nums[corrIdx]);
            }
            else{
                i++;
            }
        }
        
        for(int k=0; k<nums.size(); k++){
            if(nums[k] != k){ return k; }
        }
    return nums.size();
    }
};