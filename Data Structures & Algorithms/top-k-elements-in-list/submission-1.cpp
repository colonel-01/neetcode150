class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        while(k--){
            int maxEle;
            int count=0;
            for(auto it:mp){
                if(it.second > count){
                    maxEle = it.first;
                    count = it.second;
                }
            }
            ans.push_back(maxEle);
            mp.erase(maxEle);
        }
        return ans;
    }
};
