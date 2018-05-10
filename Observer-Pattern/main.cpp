
#include <iostream>

#include "observer.h"
#include "subject.h"


int main()
{
    Dog fido { "Fido" };
    Police officerTed { "Ted" };
    Police officerJon { "Jon" };
    
    Alarm homeAlarm;
    homeAlarm.addObserver(&fido);
    homeAlarm.addObserver(&officerTed);
    homeAlarm.addObserver(&officerJon);

    homeAlarm.ring();
}
