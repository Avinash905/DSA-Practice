class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(),i=0,j=n-1,sum=numbers[0]+numbers[n-1];

        while(i<n && j<n){
            if(sum==target)return {i+1,j+1};
            else if(sum>target){
                sum-=numbers[j--];
                sum+=numbers[j];
            }
            else if(sum<target){
                sum-=numbers[i++];
                sum+=numbers[i];
            }
        }
        return {i+1,j+1};
    }
};