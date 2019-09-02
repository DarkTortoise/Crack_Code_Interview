#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <list>

using namespace std;

template<class T>
struct Node {
    Node<T> *next;
    T value;

    explicit Node(T value) {
        this->value = value;
        this->next = nullptr;
    }
};

template<class T>
class LinkedList {
private:
    list<Node<T> *> nodes;
public:
    Node<T> *head;
    Node<T> *tail;

    LinkedList() {
        head = tail = nullptr;
    }

    LinkedList<T> &operator+(Node<T> *node) {
        if (head == nullptr) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = tail->next;
        }

        return *this;
    }

    LinkedList<T> &operator+(T value) {
        auto node = new Node<T>(value);

        if (head == nullptr)
            head = tail = node;
        else {
            tail->next = node;
            tail = tail->next;
        }

        nodes.push_back(node);

        return *this;
    }

    LinkedList<T> &operator+=(Node<T> *node) {
        if (head == nullptr) {
            head = tail = node;
        } else {
            tail->next = node;
            tail->next = tail;
        }

        return *this;
    }

    LinkedList<T> &operator+=(T value) {
        auto node = new Node<T>(value);

        if (head == nullptr)
            head = tail = node;
        else {
            tail->next = node;
            tail = tail->next;
        }

        nodes.push_back(node);

        return *this;
    }

    virtual ~LinkedList() {
        for (auto &it: nodes) {
            delete it;
        }
    }
};

#endif //LINKEDLIST_LINKEDLIST_H
