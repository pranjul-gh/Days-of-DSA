class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        while(i<n){
            int coridx = nums[i]-1;
            if (nums[i] != nums[coridx]){
                swap(nums[i], nums[coridx]);
            }
            else{ i++; }
        }
        vector<int> arr;
        for (int j=0; j<n; j++){
            if (nums[j] != j+1){ arr.push_back(j+1); }
            
        }
        return arr;
    }
};