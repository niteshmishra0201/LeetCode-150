#include <bits/stdc++.h>
#include<vector>
using namespace std;

// Definition of a linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* detectCycleStart(ListNode* head){
    if(head == nullptr || head->next == nullptr) return nullptr;

    ListNode* slow = head;
    ListNode* fast = head;
    bool cycleExists = false;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cycleExists = true;
            break;
        };
    }

    
    if(!cycleExists) return nullptr;

    ListNode* ptr1 = head;
    ListNode* ptr2 = slow;

    while(ptr1 != ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

    }
    return ptr1;
}