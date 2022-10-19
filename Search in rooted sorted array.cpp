class Solution {
public:
    int pivot(int lb,int ub,vector<int> &nums)
    {
        if(lb+1==ub)
            return lb;
        int mid=lb+(ub-lb)/2;
        if(nums[lb]>nums[mid])
                return pivot(lb,mid,nums);
        else
            return pivot(mid,ub,nums);
        
    }
    int bsearch(int lb,int ub,vector<int> &nums,int target)
    {
        if(lb>ub)
            return -1;
        int mid=lb +(ub-lb)/2;
        
        if(target==nums[mid])
            return mid;
        if(target>nums[mid])
            return bsearch(mid+1,ub,nums,target);
        else
            return bsearch(lb,mid-1,nums,target);
    }
    int search(vector<int>& nums, int target) {
      
        if(nums.size()==1)
        {
            if(target==nums[0])
                return 0;
            else
                return -1;
        }
        
        int p=pivot(0,nums.size()-1,nums);
      //  return p;
        int ans;
        if(target<=nums[p]&&target>=nums[0])
            ans=bsearch(0,p,nums,target);
        else
            ans=bsearch(p+1,nums.size()-1,nums,target);
        
        return ans;
        
    }
};
