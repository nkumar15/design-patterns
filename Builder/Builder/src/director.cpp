#include "../include/director.h"

CarShowRoomDirector :: CarShowRoomDirector(CarBuilder *b )
{
    builder = b;
}

void CarShowRoomDirector :: construct_car(vector<CarLuxuryFeatures> features)
{
    builder->construct(features);

}
