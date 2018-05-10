
#include "subject.h"
#include "observer.h"

void Subject::removeObserver(Observer *observer)
{
    for (auto i = 0; i < observers.size(); i++)
    {
        if (observers[i] == observer)
        {
            observers.erase(observers.begin() + i);
        }
    }
}

void Subject::event()
{
    for (auto& observer : observers)
    {
        observer->respond();
    }
}
