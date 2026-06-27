#include <iostream>
#include <vector>
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

Node *deleteKth(Node *head)
{
  
}
int main()
{
  vector<int> arr = {2, 5, 8, 7};

  Node *head = arrayToLinkedList(arr);

  head = deleteKth(head);

  printList(head);

  return 0;
}

/*

 */