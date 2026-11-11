class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int mostArea=0;
        int currArea=0;
        while(i < j){
            currArea = min(heights[i],heights[j]) *(j- i);
            mostArea=max(currArea,mostArea);
            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return mostArea;
    }
};
