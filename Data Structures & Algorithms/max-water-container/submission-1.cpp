class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l=0,r= arr.size()-1;
        int vol = r*min(arr[0],arr[arr.size()-1]);
        int maxvol=r*min(arr[0],arr[arr.size()-1]);
        while (l<r) {
            if (arr[l]>arr[r])
                r--;
            else
                l++;
            vol=(r-l)*min(arr[r],arr[l]);
            maxvol=max(maxvol,vol);
        }
        return maxvol;
    }
};
