#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;

  Node(int val)
  {
    data = val;
    prev = next = nullptr;
  }

  Node(int val, Node *next1, Node *prev1)
  {
    data = val;
    next = next1;
    prev = prev1;
  }
};

Node *arrayToLinkedList(vector<int> &arr)
{
  if (arr.size() == 0)
    return nullptr;

  // head node
  Node *head = new Node(arr[0]);

  // current node pointer
  Node *current = head;

  // Create remaining nodes
  for (int i = 1; i < arr.size(); i++)
  {
    Node *newNode = new Node(arr[i]);

    current->next = newNode;
    newNode->prev = current;

    current = newNode;
  }
  return head;
}

void printList(Node *head)
{
  while (head != nullptr)
  {
    cout << head->data << "->";
    head = head->next;
  }
  cout << "NULL";
}

Node *InsertionBeforeHead(Node *head, int val)
{
  Node *newHead = new Node(val, head, nullptr);
  head->prev = newHead;

  return newHead ;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  head = InsertionBeforeHead(head, 10);

  printList(head);

  return 0;
}

/*

Time Complexity
O(1) The function performs a constant number of operations: allocating memory for one new node, two pointer assignments, and one return statement, regardless of the input list size.

Space Complexity
O(1) The function allocates exactly one new ListNode object on the heap, which constitutes a constant amount of extra space.

 */