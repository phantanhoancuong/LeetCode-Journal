/* 4. Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
  */
 
public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {

        // How many values of median to calculate (2 for even, 1 for odd)
        int medianNumber = ((nums1.Length + nums2.Length) % 2) == 0 ? 2 : 1;

        // Array to contain medians
        int[] median = new int[medianNumber];

        // Where the medians start
        int medianIndex = (nums1.Length + nums2.Length) / 2;
        
        // How many medians have been added 
        int addedMedian = 0;

        // Pointers to keep track of nums1, nums2
        int index1 = 0;
        int index2 = 0;
        int emptyArrayNumber = 0;
        if(nums1.Length == 0) {
            emptyArrayNumber++;
        }
        if(nums2.Length == 0) {
            emptyArrayNumber++;
        }

        for(int i = 0; i < nums1.Length + nums2.Length + emptyArrayNumber; i++) {

            // If encounter medians
            if(i >= medianIndex - (medianNumber - 1)) {
                // Break if there are enough medians
                if(addedMedian >= median.Length) {
                    break;
                }

                // Get the median value
                // Increment the approriate pointer
                int value = 0;
                if(index1 >= nums1.Length && index2 < nums2.Length) {
                    value = nums2[index2];
                    index2++;
                }
                else if(index2 >= nums2.Length && index1 < nums1.Length) {
                    value = nums1[index1];
                    index1++;
                }
                else if(nums1[index1] < nums2[index2]) {
                    value = nums1[index1];
                    index1++;
                }
                else {
                    value = nums2[index2];
                    index2++;
                }
                // Add the median value
                median[addedMedian] = value;
                addedMedian++;
            }

            // If have not encountered median
            // Increment the approriate pointer
            else if(index1 >= nums1.Length && index2 < nums2.Length) {
                index2++;
            }
            else if(index2 >= nums2.Length && index1 < nums1.Length) {
                index1++;
            }
            else if(nums1[index1] < nums2[index2]) {
                index1++;
            }
            else {
                index2++;
            }
        } 
    
        // Get average of medians
        double result = 0;
        for(int i = 0; i < median.Length; i++) {
            result += median[i];
        }
        return (result / median.Length);
    }
}