class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> store(26,0);
        for(int i=0;i < s1.size();i++){
            store[s1[i] - 'a']++;
        }
        int i=0;
        int j=0;
        vector<int> check(26,0);
        while(j < s2.size()){
            check[s2[j] - 'a']++;
            while(j - i + 1 > s1.size()){
                check[s2[i] - 'a']--;
                i++;
            }
            if(check == store) return true;

            j++;
        }
        return false;
    }
};
