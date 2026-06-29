class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod =1;
        int maxprod=nums[0];
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                prod*=nums[j];
                if(prod>maxprod){
                    maxprod = prod;
                }
            }
            prod =1;
        }
        return maxprod;
    }
};
