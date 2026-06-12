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

Node *deleteKthElement(Node *head, int X)
{
  if (head == nullptr)
    return nullptr;

  if (head->data == X)
  {
    Node *temp = head;
    head = head->next;

    delete temp;
    return head;
  }

  Node *temp = head;
  Node *prev = nullptr;

  while (temp != nullptr)
  {

    if (temp->data == X)
    {
      prev->next = temp->next; // Skip the k-th node
      delete temp;             // Free memory
      break;
    }

    prev = temp;
    temp = temp->next;
  }

  return head;
}

int main()
{
  vector<int> arr = {2, 5, 8, 7};

  int X;
  cout << "enter element you want to delete : ";
  cin >> X;

  Node *head = arrayToLinkedList(arr);

  head = deleteKthElement(head, X);

  printList(head);

  return 0;
}

/*

Time Complexity
O(n) where n is the number of nodes in the linked list, as the function traverses the list at most once to find the target node X.

Space Complexity
O(1) as only a constant amount of extra space is used for pointers regardless of the input list size.

 */