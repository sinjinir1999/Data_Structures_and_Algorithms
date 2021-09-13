class Solution {
public:
    void reve(vector<int>& nums, int i,int j)
    {
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reve(nums,0,n-1);
        reve(nums,0,k-1);
        reve(nums,k,n-1);
        
    }
};
