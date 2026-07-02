#include <bits/stdc++.h>
using namespace std;

// Definition of singly linked list
class ListNode
{
public:
  int data;
  ListNode *next;
  ListNode() : data(0), next(nullptr) {}
  ListNode(int x) : data(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : data(x), next(next) {}
};

class Solution
{
public:
  ListNode *oddEvenList(ListNode *head)
  {
    // Empty list or only one node
    if (head == nullptr || head->next == nullptr)
      return head;

    // odd points to first odd-position node
    ListNode *odd = head;

    // even points to first even-position node
    ListNode *even = head->next;

    // Store the head of the even list
    ListNode *evenHead = even;

    // Rearrange pointers
    while (even != nullptr && even->next != nullptr)
    {
      // Link current odd node to next odd node
      odd->next = even->next;
      odd = odd->next;

      // Link current even node to next even node
      even->next = odd->next;
      even = even->next;
    }

    // Attach the even list after the odd list
    odd->next = evenHead;

    return head;
  }
};

void printLL(ListNode *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{
  ListNode *head = new ListNode(1, new ListNode(3, new ListNode(4, new ListNode(2, new ListNode(5, new ListNode(6))))));

  Solution sol;

  head = sol.oddEvenList(head);

  printLL(head);

  return 0;
}

/*
Time Complexity: O(N)
Each node is visited only once while rearranging pointers.

Space Complexity: O(1)
Only three pointers (odd, even, evenHead) are used, regardless of the size of the linked list.
*/