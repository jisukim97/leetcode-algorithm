class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        string nums = to_string(x);
        
        int flag = 0;
        int slen = nums.size();
        int half_index = slen/2;
        
        for(int i=0; i<half_index; i++){
            int back = slen - i - 1;
            if(nums[i]!=nums[back]) {
                flag = 1;
                break;
            }
        }
        
        if(flag) return false;
        else return true;
    }
};