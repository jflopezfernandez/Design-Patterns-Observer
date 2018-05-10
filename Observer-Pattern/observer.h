#ifndef OP_OBSERVER_H_
#define OP_OBSERVER_H_

#include <iostream>
#include <string>
#include <string_view>

class Observer
{
public:
    virtual void respond() = 0;
};

class Dog : public Observer
{
    std::string name_;

public:
    Dog() = delete;

    Dog(const std::string_view& str) : name_(str) { }

    std::string name() const noexcept { return name_; }

    void respond() { std::cout << "Dog [" << name() << "] responding!\n"; }
};

class Police : public Observer
{
    std::string name_;

public:
    Police() = delete;

    Police(const std::string_view& str) : name_(str) { }

    void respond() { std::cout << "Police Officer " << name_ << " responding!\n"; }
};

#endif // OP_OBSERVER_H_