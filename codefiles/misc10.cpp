class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        int size = nums.end()-nums.begin();
        for(int i=0;i<size;i++){
            int num = nums.at(i);
            int diff = target - num;
            int index = find(nums.begin()+i+1,nums.end(),diff) - nums.begin();
            if (index != size) {
                result.push_back(i);
                result.push_back(index);
            }
        }
        return result;
    }
};
