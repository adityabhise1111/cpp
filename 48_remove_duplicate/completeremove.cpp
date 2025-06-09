
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode*& head) {
        if (head == NULL)
            return head;
        if (head->next == NULL)
            return head;

        ListNode* t1 = head;
        if (t1->val == t1->next->val) {
            int data0 = t1->val;
            while ((t1->next != NULL) && (t1->val == data0)) {
                t1 = t1->next;
                head = t1;

                if ((t1->next == NULL) && (t1->val == data0)) {
                    return NULL;
                }
                
                if(t1->next){
                    if ((t1->val == t1->next->val) && (t1->val != data0)) {

                    data0 = t1->val;
                }
                }
                if ((t1->next == NULL) && (t1->val == data0)) {
                    return NULL;
                }
            }
        }
        if (head == NULL)
            return head;
        if (head->next == NULL)
            return head;

        ListNode* t2 = t1->next;

        while (t2->next != NULL) {
            cout << " t2=" << t2->val << " t2nxt " << t2->next << endl;

            if (t2->val != t2->next->val) {
                cout << "not same t1=" << t1->val << " t2=" << t2->val << endl;
                t1->next = t2;
                t1 = t2;
                t2 = t2->next;

            } else {
                int data = t2->val;

                while ((t2->next != NULL) && (t2->val == data)) {
                    cout << "same t1=" << t1->val << " t2=" << t2->val << endl;

                    t2 = t2->next;
                    if ((t2->next == NULL) && (t2->val != data)) {
                        t1->next = t2;
                        cout << "last" << endl;
                    }
                    if ((t2->next == NULL) && (t2->val == data)) {
                        t1->next = NULL;
                        cout << "last" << endl;
                        return head;
                    }
                }
                cout << " t2=" << t2->val << " t2nxt " << t2->next << endl;
            }
        }

        return head;
    }
};