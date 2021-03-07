class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode h, *tail = &h;
        while (head) {
            if (head->next == NULL || head->next->val != head->val) {
                tail->next = head;
                tail = head;
                head = head->next;
            } else {
                int val = head->val;
                while (head && head->val == val) head = head->next;
            }
        }
        tail->next = NULL;
        return h.next;
        
    }
};
