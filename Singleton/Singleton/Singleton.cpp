#include "Singleton.h"

Singleton :: Singleton(){
    counter = 0;
}

Singleton& Singleton :: get_instance(){
    /* local static member instance is thread safe from C++11 onwards */
    /* no locks mutex are required unlike C++03 */
    static Singleton *instance;

    if(instance == nullptr)
    {
        instance  = new Singleton();
    }
    return  *instance;
}


void Singleton :: increment(){
        counter++;
}

void Singleton :: decrement(){
        counter--;
}

void Singleton :: show(){
    cout<<counter<<endl;
}

/* Why this static function is required */
/* Will put details soon */
Singleton& get_singleton_instance()
{
    Singleton& obj = Singleton::get_instance();
    return obj;
}
