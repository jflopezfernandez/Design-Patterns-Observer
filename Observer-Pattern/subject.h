#ifndef OP_SUBJECT_H_
#define OP_SUBJECT_H_

#include <string>
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

    virtual void event();
};

class Alarm : public Subject
{
    std::string name_;

public:
    Alarm() : name_("<Untitled Alarm>") { }

    Alarm(const std::string_view& str) : name_(str) { }

    std::string name() const noexcept { return name_; }

    void ring() { event(); }
};

#endif // OP_SUBJECT_H_
