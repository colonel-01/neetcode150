class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        // for O(n) add space we can use , unordered_map 
        //sorted is the hint
        int i=0;
        int j=a.size()-1;
        while(i < j){
            if(a[i] + a[j] == target) return {i+1,j+1};
            if(a[i] + a[j] > target) j--;
            else i++;
        }
        return {};
    }
};
