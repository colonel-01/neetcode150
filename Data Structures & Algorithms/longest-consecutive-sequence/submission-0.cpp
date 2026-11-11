class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int lastSmaller = INT_MIN;
        int res=1;
        int count=1;
        for(int i=0;i < n;i++){
            if(nums[i] - 1 == lastSmaller){
                count++;
                lastSmaller=nums[i];
            } else if(nums[i] == lastSmaller) continue;
            else if(nums[i] - 1 != lastSmaller){
                cout<<nums[i]<<" "<<count<<endl;
                lastSmaller = nums[i];
                
                count=1;
            }
            res=max(res,count);
        }
        return res;
    }
};
