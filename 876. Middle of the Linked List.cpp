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
    ListNode* middleNode(ListNode* head) {
        ListNode* test = head;
        int numOfNodes = 0;
        if (head == NULL) return NULL;
        while (head != NULL) {
            numOfNodes++;
            head = head->next;
        }
        int i = 0;
        while (i < numOfNodes/2) {
            test = test->next;
            i++;
        }
        return test;
    }
};
