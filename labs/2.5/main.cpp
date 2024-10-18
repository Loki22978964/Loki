#include <iostream>
#include "list.h"

using namespace std;

// Function to add a node to the head of the list
void add(List*& head, char value) {
    List* newNode = new List(value);
    newNode->next = head;
    head = newNode;
}

void createEvenPositionList(List* firstList, List*& secondList) {
    List* temp = firstList;
    List* last = nullptr;
    int p = 1; 

    while (temp != nullptr) {
        // Check if the position is even
        if (p % 2 == 0) {
            List* newNode = new List(temp->data);

            // Add new node to the end of the second list
            if (secondList == nullptr) {
                secondList = newNode;
                last = newNode;
            }
            else {
                last->next = newNode;
                last = newNode;
            }
        }

        temp = temp->next; // Move to the next element
        position++; 
    }
}


// Function to print the list
void printList(List* head) {
    List* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    List* firstList = nullptr;
    List* secondList = nullptr;

    // a to j
    for (char c = 'a'; c < 'a' + 10; ++c) {
        add(firstList, c); // Call the add function
    }
    return 0;
}
