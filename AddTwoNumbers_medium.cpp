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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> temporary(100, 0);
        size_t i {0};
        ListNode* help = new ListNode();
        while (l1 || l2){
            if(!l1){
                l1 = help;
            }

            if(!l2){
                l2 = help;
            }
            int val = l1->val + l2->val;
            temporary[i] = temporary[i] + val%10;

            if (temporary[i]/10){
                temporary[i+1] =temporary[i+1] + temporary[i]/10;
                temporary[i] = temporary[i]%10;
            }
            temporary[i+1] =temporary[i+1] + val/10;
            ++i;
            l1 = l1->next;
            l2 = l2->next;
        }

        for (auto l = temporary.begin(); l != temporary.end(); ++l){
            std::cout << *l;
        }
        
        while (temporary[i] == 0 && i != 0){
            --i;
        }

        ListNode* l3 = new ListNode (temporary[i]);
        ListNode* l4;
        for (size_t k = i-1; k!=-1; --k ){
            l4 = new ListNode (temporary[k], l3);
            l3 = l4;
        }

        return l3;
    }
};