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

    const float BUS_STATION_ZONE_TOP = SCREEN_HEIGHT/2 + (bus.height + 150);
    const float BUS_STATION_ZONE_BOTTOM = SCREEN_HEIGHT/2 + (bus.height + 500);
    const float BUS_STATION_ZONE_LEFT = SCREEN_WEEDTH/2 - bus.width/2 - 30;
    const float BUS_STATION_ZONE_RIGHT =  SCREEN_WEEDTH/2 + bus.width/2 + 30;
    Texture2D road;

    Camera2D camera = { {0, 0}, {0, 0}, 0, 1};

    std::vector<Passenger> bus_passengers;
    std::vector<Passenger> station_passengers;

    void step();
    void boarding();
    void driving();
    void spawn_station_passengers();
    void draw_station_passengers();
public:
    void Run();
};

#endif