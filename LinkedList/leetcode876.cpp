//middle of the Linked list
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        // First pass: count nodes
        while (temp != NULL) {      // TC = O(n)
            count++;
            temp = temp->next;
        }

        int middleIdx = count/2;
        ListNode* t =head;
        for (int i = 0; i < count / 2; i++) {
            t = t->next;
        }

        return t;
    }
};


//better method 
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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

        
    