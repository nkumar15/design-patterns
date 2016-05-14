#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

#include<iostream>

using namespace std;

class Singleton
{
public:
    /* Why static function is required? */
    /* Will put detail soon */
    static Singleton* get_instance();

    void increment();
    void decrement();
    void show();

private:
    int counter;

    /* Will put details on rule of 5 */
    Singleton();
    Singleton(Singleton&){}
    Singleton(Singleton &&) {}
    Singleton& operator=(Singleton &)= delete;
    Singleton& operator=(Singleton &&) = delete;

};


Singleton* get_singleton_instance();

#endif // SINGLETON_H_INCLUDED
