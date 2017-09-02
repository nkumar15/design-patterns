#include "Singleton.h"

int main()
{
    /* Singleton instance created first time */
    Singleton &obj1 = get_singleton_instance();

    /* Its counter value will be 0 */
    cout << "First reference created single instance and counter is: ";
    obj1.show();

    /* First reference increments counter */
    cout << "First reference increments counter: ";
    obj1.increment();
    obj1.show();

    /* Get singleton object. This time it instance won't be created */
    /* Instead the previous instance referred by obj1 will be used */
    Singleton &obj2 = get_singleton_instance();

    /* obj1 will show value as  1 */
    /* because it is the same object which obj was referring to */
    cout << "From second reference, counter is: ";
    obj2.show();

    /* obj and obj1 referring to same object */
    /* so what obj has incremented obj1 will decrement it */
    /* obj show will display value as 0 */
    cout << "Second reference decrements counter: ";
    obj2.decrement();
    obj2.show();

    /* First reference will be effected by decrement done by second */
    cout << "Decrement has effect on first reference: ";
    obj1.show();

    return 0;
}
