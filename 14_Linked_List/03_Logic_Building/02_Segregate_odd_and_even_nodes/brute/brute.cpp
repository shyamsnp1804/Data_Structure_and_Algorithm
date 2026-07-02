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
    // If the list is empty or contains only one node,
    // no rearrangement is required.
    if (head == nullptr || head->next == nullptr)
      return head;

    // Vectors to store values at odd and even positions.
    vector<int> odd;
    vector<int> even;

    // Pointer used to traverse the linked list.
    ListNode *temp = head;

    // Position counter (1-based indexing).
    int pos = 1;

    // First Traversal:
    // Store values of odd-indexed nodes in 'odd'
    // and even-indexed nodes in 'even'.
    while (temp != nullptr)
    {
      if (pos % 2 == 1)
      {
        odd.push_back(temp->data);
      }
      else
      {
        even.push_back(temp->data);
      }

      temp = temp->next;
      pos++;
    }

    // Start again from the head of the linked list.
    temp = head;

    // Second Traversal:
    // Fill the linked list with all odd-position values first.
    for (int x : odd)
    {
      temp->data = x;
      temp = temp->next;
    }

    // Continue filling with all even-position values.
    for (int x : even)
    {
      temp->data = x;
      temp = temp->next;
    }

    // Return the modified linked list.
    return head;
  }
};

// Function to print the linked list
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
Time Complexity: O(2N) ≈ O(N)
First traversal to store values: O(N)
Second traversal to rewrite values: O(N)

Space Complexity: O(N)
Two vectors together store all N node values.
*/