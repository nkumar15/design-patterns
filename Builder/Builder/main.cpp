#include <iostream>
#include "include/builder.h"
#include "include/director.h"

using namespace std;

int main()
{
    CarBuilder *builder = new ToyotaCarBuilder();
    CarShowRoomDirector director(builder);

    vector<CarLuxuryFeatures> features;
    features.push_back(CarLuxuryFeatures :: AirCondition);
    features.push_back(CarLuxuryFeatures :: MusicPlayer);

    director.construct_car(features);
    string car = builder->get_car_features();

    cout<<"Features are : " << car;

    return 0;
}
