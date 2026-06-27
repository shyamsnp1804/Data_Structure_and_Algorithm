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

Node *InsertionBeforeKth(Node *head, int val, int k)
{
  // edge case
  if (k == 1)
  {
    Node *newHead = new Node(val, head, nullptr);
    return newHead;
  }

  Node *temp = head;
  int cnt = 0;

  while (temp != nullptr)
  {
    cnt++;

    if (cnt == k)
      break;

    temp = temp->next;
  }

  Node *prev = temp->prev;

  Node *newNode = new Node(val, temp, prev);

  prev->next = newNode;
  temp->prev = newNode;

  return head;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  head = InsertionBeforeKth(head, 10, 4);

  printList(head);

  return 0;
}

/*

Time Complexity: O(N), where N is the number of nodes in the Linked List. In the worst case, it involves traversing N nodes in the Doubly Linked List to reach the last element. In the best case, when K is 0 (insertion at the head), the time complexity is O(1) as it involves a constant number of operations. In the average case, it's O(K).

Space Complexity: O(1) as no extra space is used.

 */