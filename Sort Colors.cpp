class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>count(3,0);
        for(int n:nums) count[n]++;
        int i=0;
        for(int j=0;j<3;j++){
            while(count[j]--) nums[i++] = j;
        }
    }
};
