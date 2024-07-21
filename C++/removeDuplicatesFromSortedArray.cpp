#include<iostream>
#include<vector>
int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty())
        return 0;

    int uniqueIndex = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }
    return uniqueIndex + 1;
}

int main() {
    std::vector<int> nums{1,1,2,2,2,3,4,4,4};
    std::cout<<"Number of unique elements: "<< removeDuplicates(nums)<<std::endl;
    return 0;
}
