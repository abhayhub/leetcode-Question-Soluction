class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        
        if(n<3 || arr[0]>arr[1]) return false;
        bool peak=false;
        
        for(int i=1;i<arr.size();++i){
            
            if(peak and arr[i-1]<arr[i] || arr[i-1]==arr[i]) return false;
             peak=arr[i-1]>arr[i];
        }
        return peak;
    }
};
