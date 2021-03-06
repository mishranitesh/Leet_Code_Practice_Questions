/*
	88. Merge Sorted Array (EASY)
	Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
	Note:
		The number of elements initialized in nums1 and nums2 are m and n respectively.
		You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

	Input:
		nums1 = [1,2,3,0,0,0], m = 3
		nums2 = [2,5,6],       n = 3
	Output:
		[1,2,2,3,5,6]
*/


// Includes all standard library (ONLY for GCC, not standard C++ library)
#include <bits/stdc++.h>

using namespace std;

/*
 * Class to perform 'Merge Sorted Array' implementation
 */
class MergeSortedArraySolution {
public:

	// Method to implement 'Merge Sorted Array'
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Merge nums2 vector elements into nums1
        nums1.insert(nums1.begin() + m, nums2.begin(), nums2.end());
        nums1.resize(m+n);

        // Sort nums1 elements
        sort(nums1.begin(), nums1.end());
    }
};

/*
 * Driver Code
 */
int main() {
	
	// TODO

	return 0;
}