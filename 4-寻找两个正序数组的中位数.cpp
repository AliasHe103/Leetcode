class Solution {
public:
    vector<int> mergelists(vector<int>& nums1, vector<int>& nums2) {
        int c1 = 0, c2 = 0;
        int v1 = 0, v2 = 0, maxint = 1000001;
        vector<int> ans;
        while (c1 < nums1.size() || c2 < nums2.size()) {
            v1 = c1 < nums1.size() ? nums1[c1] : maxint;
            v2 = c2 < nums2.size() ? nums2[c2] : maxint;
            if (v1 < v2) {
                ans.push_back(v1);
                c1++;
            }
            else {
                ans.push_back(v2);
                c2++;
            }
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge = mergelists(nums1, nums2);
        int hsize = merge.size() / 2;
        if (merge.size() % 2 == 0) {
            return ((double)merge[hsize - 1] + merge[hsize]) / 2;
        }
        else return merge[(merge.size() - 1) / 2];
    }
};