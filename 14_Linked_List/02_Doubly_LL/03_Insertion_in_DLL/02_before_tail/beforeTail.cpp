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

Node *InsertionBeforeTail(Node *head, int val)
{

  // edge case - single element
  if (head->next == nullptr)
  {
    Node *newHead = new Node(val, head, nullptr);
    head->prev = nullptr;

    return newHead;
  }

  Node *tail = head;

  while (tail->next != nullptr)
  {
    tail = tail->next;
  }

  // Keep track of node before tail using prev
  Node *prev = tail->prev;

  // Create new node with value = val
  Node *newNode = new Node(val, tail, prev);

  // Join the new node
  prev->next = newNode;
  tail->prev = newNode;

  // Return updated linked list
  return head;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  head = InsertionBeforeTail(head, 10);

  printList(head);

  return 0;
}

/*

Time Complexity: O(N) where N is the length of the array. We iterate through the input array exactly once and at each element perform constant time operations.

Space Complexity: O(1) as no extra space is used.

 */