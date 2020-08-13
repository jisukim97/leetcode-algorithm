class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int vlen = nums.size();
        int flag = 0;
        int i,j;
        
        for(i=0; i<(vlen-1);i++){
            for(j=i+1;j<vlen;j++)
                if((nums[i]+nums[j])==target){
                    flag=1;
                    break;
                }
            if(flag) break;
        }
        vector<int> vec;
        vec.push_back(i);
        vec.push_back(j);
        
        return vec;
    }
};