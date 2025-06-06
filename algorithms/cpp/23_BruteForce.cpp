"""
23. Merge k Sorted Lists
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.

Example 1:
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6

Example 2:
Input: lists = []
Output: []

Example 3:
Input: lists = [[]]
Output: []

Constraints:
k == lists.length
0 <= k <= 10^4
0 <= lists[i].length <= 500
-10^4 <= lists[i][j] <= 10^4
lists[i] is sorted in ascending order.
The sum of lists[i].length will not exceed 10^4.
"""

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 
class Solution {
    public:
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            ListNode* mergeKLists(vector<ListNode*>& lists) {
            ListNode dummy(0);              
            ListNode* currentNode = &dummy; 
    
            // Repeat until all lists are exhausted
            while (true) {
                int minIndex = -1;
    
                // Find the list with the smallest current node
                for (int i = 0; i < lists.size(); i++) {
                    if (lists[i] != nullptr) {
                        if (minIndex < 0 || (lists[i]->val < lists[minIndex]->val)) {
                            minIndex = i;
                        }
                    }
                }
    
                // If no minimum index found, all lists are done
                if (minIndex < 0) {
                    break;
                }
    
                // Append the smallest node to the merged list
                currentNode->next = lists[minIndex];
                currentNode = currentNode->next;
    
                // Move forward in the selected list
                lists[minIndex] = lists[minIndex]->next;
            }
    
            return dummy.next; 
        }
    };