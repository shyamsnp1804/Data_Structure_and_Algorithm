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

Node *insertionAtTail(Node *head, int val)
{
  if (head == nullptr)
  {
    return new Node(val);
  }

  Node *temp = head;

  while (temp->next != nullptr)
  {
    temp = temp->next;
  }

  Node *newNode = new Node(val);
  temp->next = newNode;

  return head;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  int val = 100;

  Node *head = arrayToLinkedList(arr);

  head = insertionAtTail(head, val);

  printList(head);

  return 0;
}

/*

Time Complexity
O(n) where n is the number of nodes in the linked list, as the function traverses the entire list to reach the last node in the worst-case scenario.

Space Complexity
O(1) as the function uses a constant amount of extra space, only allocating a new node regardless of the input list size.

 */