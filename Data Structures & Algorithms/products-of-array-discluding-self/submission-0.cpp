class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        vector<int> res(n,0);
        long long temp=1LL*nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = temp;
            temp*=nums[i];
        }
        temp=1LL;
        for(int i=n-1;i >=0;i--){
            suffix[i]=temp;
            temp*=nums[i];
        }
        for(int i=0;i < n;i++){
            res[i] = suffix[i] * prefix[i];
        }
        return res;
    }
};
