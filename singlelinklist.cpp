#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;
};

class LinkedList {
public:
  LinkedList() {
    head = NULL;
  }

  ~LinkedList() {
    Node* current = head;
    while (current != NULL) {
      Node* next = current->next;
      delete current;
      current = next;
    }
  }

  void add(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
      head = newNode;
    } else {
      Node* current = head;
      while (current->next != NULL) {
        current = current->next;
      }
      current->next = newNode;
    }
  }

  void deleteNode(int data) {
    Node* previous = NULL;
    Node* current = head;

    while (current != NULL && current->data != data) {
      previous = current;
      current = current->next;
    }

    if (current == NULL) {
      cout << "Element not found in the list" << endl;
      return;
    }

    if (previous == NULL) {
      head = current->next;
    } else {
      previous->next = current->next;
    }

    delete current;
  }

  void display() {
    Node* current = head;
    while (current != NULL) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }

private:
  Node* head;
};

int main() {
  LinkedList linkedList;

  // Add some elements to the list
  linkedList.add(1);
  linkedList.add(2);
  linkedList.add(3);
  linkedList.add(4);
  linkedList.add(5);


  linkedList.display();

  linkedList.deleteNode(3);

  linkedList.display();
return 0;
}