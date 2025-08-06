class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int minl =INT_MAX;
        while(l<n){
            
           
            while(sum<target&&r<n){

                sum=sum+nums[r];
                r++;

            }
            if(sum>=target){
                minl=min(minl,r-l);
            }
             sum=sum-nums[l];
           l++; 
           
        }
         return minl==INT_MAX?0:minl;
       
    }
};
