class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;
        int currentwater,w,ht;
        while(lp<rp)
        {
            w=rp-lp;
            ht=min(height[lp],height[rp]);
            currentwater = w*ht;
            maxwater=max(currentwater,maxwater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxwater;

    }
};
