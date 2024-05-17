#ifndef _WINDOW_H
#define _WINDOW_H

#include <vector>
#include <iostream>

#include "Passenger.h"
#include "Bus.h"

enum State{
TRANSITION_TO_DRIVING,
DRIVING,
TRANSITION_TO_BOARDING,
BOARDING,

};

class Game{
private:
    Bus bus;
    State state = TRANSITION_TO_BOARDING;

    float BusStationZone = 0;

    Texture2D road;

    Camera2D camera = { {0, 0}, {0, 0}, 0, 1};

    std::vector<Passenger> bus_passengers;
    std::vector<Passenger> station_passengers;

    void step();
    void boarding();
    void driving();
    void spawn_passengers_on_station();
public:
    void Run();
};

#endif