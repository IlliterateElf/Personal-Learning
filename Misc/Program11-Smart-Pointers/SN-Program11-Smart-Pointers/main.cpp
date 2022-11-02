#include <iostream>
#include <queue>

#include "Captain.h"
#include "Crew.h"
#include "Lifeboat.h"
#include "Passenger.h"

int main()
{
    srand(time(NULL));
    std::queue<std::shared_ptr<Passenger>> passengerQueue;

    Lifeboat boat1; //Init team and boats
    Lifeboat boat2;
    Crew crew1(boat1);
    Crew crew2(boat2);
    Captain captain(crew1.GetBoat(), crew2.GetBoat());

    for (int i = 0; i < 50; i++) //Init queue
    {
        std::shared_ptr<Passenger> tPass(new Passenger);
        passengerQueue.push(tPass);
    }

    while (!passengerQueue.empty() && captain.BoatsHere()) //Passengers get on boats
    {
        if (passengerQueue.front()->GetGender() == Gender::female
            || passengerQueue.front()->GetAge() < passengerQueue.front()->CHILD_AGE
            || passengerQueue.front()->HadTried() == true)
        {
            if (!crew1.DroppedBoat())
            {
                if(boat1.AddPassenger(passengerQueue.front())) {
                    passengerQueue.pop();
                    crew1.Drop();
                    continue;
                }
            }
        }
        else if(!crew2.DroppedBoat())
        {
            if (boat2.AddPassenger(passengerQueue.front())) {
                passengerQueue.pop();
                crew2.Drop();
                continue;
            }
        }
        passengerQueue.front()->SetTried(true);
        passengerQueue.push(passengerQueue.front());
        passengerQueue.pop();
    }
}
