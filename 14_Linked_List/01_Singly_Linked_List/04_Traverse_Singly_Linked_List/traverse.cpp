#include <iostream>
#include <vector>
using namespace std;

// Node class
class Node
{
public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};

// Function to store linked list elements in a vector
vector<int> linkedListTraversal(Node *head)
{
  vector<int> result;

  Node *current = head;

  while (current != nullptr)
  {
    result.push_back(current->data);
    current = current->next;
  }

  return result;
}

int main()
{
  // Creating Linked List: 10 -> 20 -> 30 -> 40 -> NULL
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);

  vector<int> arr = linkedListTraversal(head);

  // Print Array
  cout << "Array elements: ";
  for (int x : arr)
  {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}

/* 

| Complexity       | Value    |
| ---------------- | -------- |
| Time Complexity  | **O(N)** |
| Space Complexity | **O(N)** |

 */