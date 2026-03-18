template <typename T>
LinkedQueue<T>::LinkedQueue() {
    // TODO
    head = nullptr;
    last = nullptr;
    this->length = 0;
}

template <typename T>
LinkedQueue<T>::LinkedQueue(const LinkedQueue<T>& copyObj) {
    // TODO
    copy(copyObj);
}

template <typename T>
LinkedQueue<T>& LinkedQueue<T>::operator=(const LinkedQueue<T>& rightObj) {
    // TODO
    if (this != &rightObj) {
        clear();
        copy(rightObj);
    }
    return *this;
}

template <typename T>
LinkedQueue<T>::~LinkedQueue() {
    // TODO
    clear();
}

template <typename T>
T LinkedQueue<T>::back() const {
    // TODO
    if (isEmpty()) {
        throw string("Queue is empty");
    }
    return last->value;
}

template <typename T>
void LinkedQueue<T>::clear() {
    // TODO
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename T>
void LinkedQueue<T>::copy(const LinkedQueue<T>& copyObj) {
    // TODO
    head = nullptr;
    last = nullptr;
    this->length = 0;

    typename LinkedQueue<T>::Node* temp = copyObj.head;
    while (temp != nullptr) {
        enqueue(temp->value);
        temp = temp->next;
    }
}

template <typename T>
void LinkedQueue<T>::dequeue() {
    // TODO
    if (isEmpty()) {
        throw string("Queue is empty");
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    this->length--;

    if (this->length == 0) {
        last = nullptr;
    }
}

template <typename T>
void LinkedQueue<T>::enqueue(const T& elem) {
    // TODO
    Node* newNode = new Node(elem);

    if (isEmpty()) {
        head = newNode;
        last = newNode;
    }
    else {
        last->next = newNode;
        last = newNode;
    }

    this->length++;
}

template <typename T>
T LinkedQueue<T>::front() const {
    // TODO
    if (isEmpty()) {
        throw string("Queue is empty");
    }
    return head->value;
}

template <typename T>
int LinkedQueue<T>::getLength() const {
    // TODO
    return this->length;
}

template <typename T>
bool LinkedQueue<T>::isEmpty() const {
    // TODO
    return this->length == 0;
}
