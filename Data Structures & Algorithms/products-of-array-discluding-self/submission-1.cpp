class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> prefix;
        vector <int> postfix(nums.size());
        vector <int> output(nums.size());
        int n=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            prefix.push_back(n);
            n*=nums[i+1];
        }
        prefix.push_back(n);
        n=nums[nums.size()-1];
        for(int i= nums.size()-1;i>=1;i--){
            postfix[i]=n;
            n*=nums[i-1];
        }
        postfix[0]=n;
        for(int i=1;i<nums.size()-1;i++){
            n=prefix[i-1]*postfix[i+1];
            output[i]=n ;
        }
        output[0]=postfix[1];
        output[nums.size()-1]=prefix[nums.size()-2];
        return output;
    }
};
