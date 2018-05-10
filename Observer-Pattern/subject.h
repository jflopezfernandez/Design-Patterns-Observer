#ifndef OP_SUBJECT_H_
#define OP_SUBJECT_H_

#include <vector>

class Observer;

class Subject
{
    int count;

    std::vector<Observer *> observers;

public:
    Subject() : count(0) { }

    void addObserver(Observer *observer) { observers.emplace_back(observer); }

    void removeObserver(Observer *observer);

    void event();
};

#endif // OP_SUBJECT_H_
