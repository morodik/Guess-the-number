#include <iostream>
#include <time.h>
using namespace std;

int main () {
    srand(time(NULL));
    int rand_num = 1 + rand() % 15;
    bool stop = false;
    while (stop == false)
    {
        cout << "Enter number: "<< endl;
        int a;
        cin >> a;

        if (a == rand_num)
        {
            stop = true;
            cout << "You guessed the number" << a << endl;
        } else
        {
            cout << "You didn't guess the number" << endl;
        }        
    }

    return 0;
}