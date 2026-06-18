#include <bits/stdc++.h>
#include<vector>
using namespace std;

// Definition of a linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head){
    if(head == nullptr || head->next == nullptr) return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }

    return false;
}