class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==nums.size()-1 || nums[i]!=nums[i+1])
            {
                nums[l]=nums[i];
                l++;
                    
            }
        }
        return l;
        
    }
};
