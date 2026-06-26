class Solution{
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n= nums.size();
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int res_sum = 0;
        
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                int diff=abs(target-sum);
                if(diff<max_diff){
                    max_diff=diff;
                    res_sum=sum;
                }

                if(sum==target){
                    left++;
                    right--;
                }
                else if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }

            }

        }  
        return res_sum;   
    }
};