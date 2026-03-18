#include "LinkedQueue.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    LinkedQueue<int> intQueue;

    try {
        cout << intQueue.front() << endl;
    } catch (string& e) {
        cout << e << endl;
    }

    try {
        cout << intQueue.back() << endl;
    } catch (string& e) {
        cout << e << endl;
    }

    try {
        intQueue.dequeue();
    } catch (string& e) {
        cout << e << endl;
    }

    intQueue.enqueue(10);
    cout << "Length: " << intQueue.getLength() << endl;
    cout << "Front: " << intQueue.front() << endl;
    cout << "Back: " << intQueue.back() << endl;

    intQueue.dequeue();

    if (intQueue.isEmpty()) {
        cout << "Empty: true" << endl;
    } else {
        cout << "Empty: false" << endl;
    }

    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.enqueue(40);

    cout << "Length: " << intQueue.getLength() << endl;
    cout << "Front: " << intQueue.front() << endl;
    cout << "Back: " << intQueue.back() << endl;

    LinkedQueue<int> copyQueue = intQueue;
    cout << "Copy Front: " << copyQueue.front() << endl;
    cout << "Copy Back: " << copyQueue.back() << endl;

    intQueue.dequeue();
    cout << "Original Front after dequeue: " << intQueue.front() << endl;
    cout << "Copy Front still: " << copyQueue.front() << endl;

    LinkedQueue<int> assignedQueue;
    assignedQueue = copyQueue;
    cout << "Assigned Front: " << assignedQueue.front() << endl;
    cout << "Assigned Back: " << assignedQueue.back() << endl;

    copyQueue.clear();

    if (copyQueue.isEmpty()) {
        cout << "Copy Empty: true" << endl;
    } else {
        cout << "Copy Empty: false" << endl;
    }

    cout << endl;

    LinkedQueue<string> stringQueue;

    try {
        cout << stringQueue.front() << endl;
    } catch (string& e) {
        cout << e << endl;
    }

    try {
        stringQueue.dequeue();
    } catch (string& e) {
        cout << e << endl;
    }

    stringQueue.enqueue("apple");
    cout << "String Length: " << stringQueue.getLength() << endl;
    cout << "String Front: " << stringQueue.front() << endl;
    cout << "String Back: " << stringQueue.back() << endl;

    stringQueue.enqueue("banana");
    stringQueue.enqueue("cherry");

    cout << "String Length: " << stringQueue.getLength() << endl;
    cout << "String Front: " << stringQueue.front() << endl;
    cout << "String Back: " << stringQueue.back() << endl;

    LinkedQueue<string> stringCopy = stringQueue;
    cout << "String Copy Front: " << stringCopy.front() << endl;
    cout << "String Copy Back: " << stringCopy.back() << endl;

    stringQueue.clear();

    if (stringQueue.isEmpty()) {
        cout << "String Queue Empty: true" << endl;
    } else {
        cout << "String Queue Empty: false" << endl;
    }

    cout << "String Copy Front still: " << stringCopy.front() << endl;

    return 0;
}
