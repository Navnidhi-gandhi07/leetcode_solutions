class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (nums[i]==1){
                count++;
              maxx=max(maxx,count);
            }
            if(nums[i]!=1){
                count=0;
            }

        }
        return maxx;
    }
};
