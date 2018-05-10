
#include <iostream>

#include "observer.h"
#include "subject.h"


int main()
{
    Dog fido { "Fido" };
    Police officerTed { "Ted" };
    Police officerJon { "Jon" };
    
    Subject alarm;
    alarm.addObserver(&fido);
    alarm.addObserver(&officerTed);
    alarm.addObserver(&officerJon);

    alarm.event();
}
