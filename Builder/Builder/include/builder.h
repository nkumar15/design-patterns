#ifndef BUILDER_H_INCLUDED
#define BUILDER_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

enum class  CarLuxuryFeatures
{
    AirCondition = 0,
    MusicPlayer,
    AutomaticOpenHood,
    PremiumComfortSeats,
};

class CarBuilder
{
protected:
    string car_features;
    bool car_ready ;
    CarBuilder(bool ready);
public:
    virtual void construct(vector<CarLuxuryFeatures>) = 0;
    virtual void set_feature(string feature) = 0;

    string get_car_features();
    void set_ready(bool ready);
};

class ToyotaCarBuilder : public CarBuilder
{
public:
    ToyotaCarBuilder();
    void construct(vector<CarLuxuryFeatures>) override ;
    void set_feature(string feature) override ;
};


#endif // BUILDER_H_INCLUDED
