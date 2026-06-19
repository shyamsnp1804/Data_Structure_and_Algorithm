#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = nullptr;
  }

  Node(int val, Node *nextNode)
  {
    data = val;
    next = nextNode;
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
    current->next = new Node(arr[i]);
    current = current->next;
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

Node *insertionBeforeX(Node *head, int val, int k)
{
  if (head == nullptr)
  {
    return nullptr;
  }

  if (head->data == val)
  {
    return new Node(val, head);
  }

  Node *temp = head;

  while (temp != nullptr)
  {
  }

  return head;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  int val = 100;
  int k = 3;
  Node *head = arrayToLinkedList(arr);

  head = insertionBeforeX(head, val, k);

  printList(head);

  return 0;
}
