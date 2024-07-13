class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            int ci=nums[i]-1;
            if(nums[i] != nums[ci])
            { swap(nums[i], nums[ci]); }
            else { i++; }
            
        }
        
        vector<int> arr;
        for (int k=0; k<nums.size(); k++){
            if (nums[k] != k+1)
            {
                arr.push_back(nums[k]);
                arr.push_back(k+1);
            }
        }
        return arr;
    }
};