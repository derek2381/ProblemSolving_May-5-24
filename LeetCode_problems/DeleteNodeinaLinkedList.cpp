// problem link
// https://leetcode.com/problems/delete-node-in-a-linked-list/?envType=daily-question&envId=2024-05-05

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        while(node){
            node->val = node->next->val;
            if(node->next->next == NULL){
                node->next = NULL;
            }

            node = node->next;
        }
    }
};
