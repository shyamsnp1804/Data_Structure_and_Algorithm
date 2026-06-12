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

Node *deleteKthElement(Node *head, int k)
{
  if (head == nullptr)
    return nullptr;

  // Special case: delete the head node
  if (k == 1)
  {
    Node *temp = head;
    head = head->next;

    delete temp;
    return head;
  }

  int cnt = 0;
  Node *temp = head;
  Node *prev = nullptr;

  while (temp != nullptr)
  {
    cnt++;

    // Found the k-th node
    if (cnt == k)
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

  int k;
  cout << "enter element you want to delete : ";
  cin >> k;

  Node *head = arrayToLinkedList(arr);

  head = deleteKthElement(head, k);

  printList(head);

  return 0;
}

/*

Time Complexity
O(n) where n is the number of nodes in the linked list, as the loop traverses nodes until the kth position is reached.

Space Complexity
O(1) because only a constant number of pointer variables are used regardless of the input list size.

 */