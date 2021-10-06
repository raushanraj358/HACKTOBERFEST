class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        int pos = -1;
        for(int i = 0; i < nums.size();i++){
            rightSum += nums[i];
        }
        for(int j = 0; j < nums.size();j++){
            rightSum -= nums[j];
            if(rightSum == leftSum){
                pos = j ;
                break;
            }
            leftSum += nums[j];
        }
        return pos;
        
    }
};
