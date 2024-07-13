class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int i=0;
        int n = nums.size();
        while(i<n){
            int coridx = nums[i]-1;
            if (nums[i] != nums[coridx]){
                swap(nums[i], nums[coridx]);
            }
            else{ i++; }
        }
        
            for (int k=0; k<nums.size(); k++)
            {
                if (nums[k] != k+1){
                    return nums[k];
                }
            }
                return nums.size()-1;
            
        
    }
};