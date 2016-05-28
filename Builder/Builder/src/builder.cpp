#include "../include/builder.h"

CarBuilder :: CarBuilder( bool ready )
{
    car_ready = ready;
}

string CarBuilder :: get_car_features()
{
    if( !car_ready)
        return nullptr;
    else
        return car_features;
}

void CarBuilder :: set_ready(bool ready)
{
    car_ready = ready;
}

ToyotaCarBuilder :: ToyotaCarBuilder() : CarBuilder( false)
{

}

void ToyotaCarBuilder :: set_feature(string feature)
{
    car_features += feature + ",";
}

void ToyotaCarBuilder :: construct(vector<CarLuxuryFeatures> features)
{
    set_ready(false);

    for(CarLuxuryFeatures f : features)
    {
        if( f == CarLuxuryFeatures :: AirCondition )
            set_feature("AC");
        else if ( f == CarLuxuryFeatures :: MusicPlayer )
            set_feature("MusicPlayer");
        else if ( f == CarLuxuryFeatures :: AutomaticOpenHood )
            set_feature("AutomaticOpenHood");
        else if ( f == CarLuxuryFeatures :: PremiumComfortSeats )
            set_feature("Premium seats");
    }

    set_ready(true);
}



