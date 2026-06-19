#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// ── Helper 1: Merge two sorted lists (Q5) ──
ListNode* merge(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);           // dummy node to avoid head special case
    ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    // attach remaining nodes
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

// ── Helper 2: Find middle and split (Q4 variant) ──
// Returns the HEAD of the second half
// Also cuts the first half (sets its tail->next = NULL)
ListNode* splitAtMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        // first middle technique — ensures halves are equal or
        // first half is one longer (for odd length)
    }
    // slow is at end of first half
    ListNode* secondHalf = slow->next;  // start of second half
    slow->next = nullptr;               // cut: isolate first half
    // without this cut, merge sort recurses on connected halves
    // and infinite loop occurs
    return secondHalf;
}

// ── Main: Merge Sort ──
ListNode* sortList(ListNode* head) {

    // Base case: 0 or 1 node is already sorted
    if (!head || !head->next) return head;
    // If we don't return here, splitAtMiddle on a single node
    // would set slow=head, secondHalf=NULL, cut head->next=NULL
    // then recurse on NULL forever — infinite recursion

    // Step 1: Split into two halves
    ListNode* secondHalf = splitAtMiddle(head);
    // head now points to first half (its tail->next == NULL)
    // secondHalf points to second half

    // Step 2: Recursively sort each half
    ListNode* left  = sortList(head);        // sort first half
    ListNode* right = sortList(secondHalf);  // sort second half

    // Step 3: Merge two sorted halves
    return merge(left, right);
    // merge returns the new head of the fully sorted list
}

// Helper to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " → ";
        head = head->next;
    }
    cout << " → NULL" << endl;
}