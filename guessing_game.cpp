#include <iostream>
using namespace std;

int main()
{
    int random = rand() % 1000 + 1;
    int guess;
    cout << "guess the number: ";
    cin >> guess;
    int trys = 1;
    while(guess != random)
    {
        if(guess > random)
        {
            cout << "too high, try again: ";
        }
        else
        {
            cout << "too low, try again: ";
        }
        cin >> guess;
        trys++;
    }
    cout << "total number of trys: " << trys ;
}