/*
Given two non-empty linked lists linkedList1 and linkedList2 which represent two non-negative integers.
The digits are stored in reverse order with each node storing one digit.
Add two numbers and return the sum as a linked list.
The sum Linked List will be in reverse order as well.
The Two given Linked Lists represent numbers without any leading zeros, except when the number is zero itself.

Example

Input: linkedList1 = [5, 4], linkedList2 = [4]
Output: [9, 4]

Explanation:

linkedList1 = 45, linkedList2 = 4.
linkedList1 + linkedList2 = 45 + 4 = 49.
The sum is 49 and when prepare the linked list we reverse the number [9, 4]

*/

#include <bits/stdc++.h>
using namespace std;

// Definition of Singly Linked List
struct ListNode
{
  int val;
  ListNode *next;
  ListNode()
  {
    val = 0;
    next = NULL;
  }
  ListNode(int data1)
  {
    val = data1;
    next = NULL;
  }
  ListNode(int data1, ListNode *next1)
  {
    val = data1;
    next = next1;
  }
};

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *linkedList1, ListNode *linkedList2)
  {
    // Dummy node to simplify insertion
    ListNode *dummy = new ListNode(0);

    // Tail always points to the last node of answer list
    ListNode *tail = dummy;

    int carry = 0;

    while (linkedList1 != nullptr || linkedList2 != nullptr || carry)
    {
      int sum = carry;

      // Add value from first list
      if (linkedList1 != nullptr)
      {
        sum += linkedList1->val;
        linkedList1 = linkedList1->next;
      }

      // Add value from second list
      if (linkedList2 != nullptr)
      {
        sum += linkedList2->val;
        linkedList2 = linkedList2->next;
      }

      // Calculate new carry
      carry = sum / 10;

      // Store current digit
      int digit = sum % 10;

      // Create new node
      tail->next = new ListNode(digit);

      // Move tail
      tail = tail->next;
    }

    // Head of answer
    return dummy->next;
  }
};

// Fixed: Added the missing print function
void printList(ListNode *head)
{
  while (head != nullptr)
  {
    cout << head->val << " ";
    head = head->next;
  }
  cout << endl;
}

int main()
{
  // Manual creation of linked list (342 + 465 = 807)
  // Reverted: [2, 4, 3] + [5, 6, 4] = [7, 0, 8]
  ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
  ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

  Solution sol;
  ListNode *result = sol.addTwoNumbers(l1, l2);

  printList(result);

  return 0;
}

/*

Time Complexity: O(max(M, N)) Here, M and N represent the sizes of the linked lists l1 and l2, respectively. The algorithm traverses both lists at most once, hence, the time complexity depends on the length of the longer list.

Space Complexity: O(max(M,N)) The length of the new list is at most max(M, N)+1.

*/