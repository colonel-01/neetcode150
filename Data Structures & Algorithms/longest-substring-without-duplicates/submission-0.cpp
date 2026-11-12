class Solution {
public:
    int lengthOfLongestSubstring(string a) {
        int n = a.size();
        int i=0;
        int j=0;
    
        int res=0;
        set<int> s;
        while(j < n){
            while(s.find(a[j]) != s.end()){
                s.erase(a[i]);
                i++;
            }
            s.insert(a[j]);
            res=max((int)s.size(),res);
            j++;
        }
        return res;
    }
};
