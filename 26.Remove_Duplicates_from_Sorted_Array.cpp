class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int origin_length = nums.size();
        int prev = origin_length? nums[0] : -1; 
        
        if(origin_length==0) return 0;
        
        for(int i=1; i<origin_length; i++)
            if(nums[i]!=prev) //중복된 게 아니면 새로운 길이로 추가하기
                prev = nums[i];
            else{ //기존꺼랑 같으면 중복된 것 삭제
                nums.erase(nums.begin()+i);
                i--;
                origin_length--;
            }
                
        return nums.size();
    }
};