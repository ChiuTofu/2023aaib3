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
///week12-2.cpp(�٨S�g��)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /// ListNode* ans = list1;//�i�H��L�h�C
        ///ListNode* ans = new ListNode(99);//�i�H�}�s��(��99)
        ListNode* ans = new ListNode(99, new ListNode(90));
        ///�}�s�� Node �̭���99,�᭱�౵[�s��Node�̦�90]
        return ans;
    }
};
