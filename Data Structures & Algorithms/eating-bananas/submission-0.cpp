class Solution {
public:
    bool check(vector<int>& piles,int h,int k){
        long long taken=0;
        for(int i=0;i<piles.size();i++){
            taken+= (1LL * piles[i] + k - 1) / k;
        }
        return (taken <= h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());

        int res;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(check(piles,h,mid)){
                // it could be that this vlue might be the ans

                res=mid;
                r=mid-1;
            }else l=mid+1;
        }
        return res;
    }
};
