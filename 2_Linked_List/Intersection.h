template<class T>
class Node {
public:
    Node *next;
    T value;

    explicit Node(T value) {
        this->value = value;
        this->next = nullptr;
    }
};

template<class T>
class LinkedList {
public:
    Node<T> *head;
    Node<T> *tail;

    LinkedList() {
        head = new Node<T>(-1);
        tail = head;
    }

    LinkedList<T> &operator+(Node<T> *node) {
        tail->next = node;
        tail = node;
    }
};

template<class T>
Node<T> *Intersection(LinkedList<T> &L1, LinkedList<T> &L2) {
    Node<T> *ptr1 = L1.head;
    Node<T> *ptr2 = L2.head;

    if (L1.tail != L2.tail)
        return nullptr;

    while (ptr1 != ptr2 && ptr1 != L1.tail && ptr2 != L2.tail) {
        ptr1++;
        ptr2++;
    }

    return ptr1;
}