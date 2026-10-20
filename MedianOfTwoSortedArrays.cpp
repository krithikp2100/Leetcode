class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        unsigned int i1 = 0;
        unsigned int i2 = 0;
        vector<int> nums = {};
        while ((i1 + i2) < (nums1.size() + nums2.size())) {
            if (i2 >= nums2.size() || (i1 < nums1.size() && nums1[i1] <= nums2[i2])) {
                nums.push_back(nums1[i1]);
                i1++;
            } else {
                nums.push_back(nums2[i2]);
                i2++;
            }
        }
        if (nums.size()%2 == 0) {
            return (static_cast<double>(nums[nums.size()/2 - 1] + nums[nums.size()/2])/2);
        } else {
            return static_cast<double>(nums[nums.size()/2]);
        }
    }
};
