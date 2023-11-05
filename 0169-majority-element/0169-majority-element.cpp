class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N=nums.size(),count=0,candidate=-1;
        
        for(int i=0;i<N;i++){
            if(count==0)candidate=nums[i];
            if(candidate==nums[i])count++;
            else count--;
        }
        return candidate;
    }
};