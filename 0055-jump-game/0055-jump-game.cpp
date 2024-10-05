class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        cout<<n;
      /*  int sum =0;int x;
        for (int i=0;i<n;i++){
            if(nums[i]==0||1) return true;
            if(nums[i]<0) return false;
            if (nums[i]>0){
                sum =sum+nums[i];
                x=i;
                if(sum==n)return true;
                i=nums[i];    
            }
            
        }
        return false;*/
        int maxreach =0;
            for(int i=0;i<nums.size();i++){
                //if(nums[i]==0||1) return true;
                if (i > maxreach) return false;
                maxreach = max(maxreach, i + nums[i]);
                if(maxreach>= n) return true;
            }
           return true;
    }
};