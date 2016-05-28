#ifndef DIRECTOR_H_INCLUDED
#define DIRECTOR_H_INCLUDED

#include "builder.h"

/* reader or director */
class CarShowRoomDirector
{
    CarBuilder *builder;
public:
    CarShowRoomDirector( CarBuilder *b );
    void construct_car( vector<CarLuxuryFeatures> features);
};


#endif // DIRECTOR_H_INCLUDED
