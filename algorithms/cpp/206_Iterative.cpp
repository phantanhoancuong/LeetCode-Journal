/*
206. Reverse Linked List
Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]

Example 3:
Input: head = []
Output: []
 
Constraints:
The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
 
Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?
*/


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
        ListNode* reverseList(ListNode* head) {
            if (head == nullptr || head->next == nullptr) {
                return head;
            }
    
            ListNode* prev_node = head;
            ListNode* curr_node = head->next;
            head->next = nullptr;
            while (curr_node != nullptr) {
                ListNode* next_node = curr_node->next;
                curr_node->next = prev_node;
                prev_node = curr_node;
                curr_node = next_node;
            }
            return prev_node;
        }
    };