//Tashfeen Abbasi
//Task 2
//FAST,NUCES,ISLAMABAD
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    int tashi_rand = rand() % 100 + 1;
    int tashi_guess;
    int tashi_attempts = 0;
    cout << "\t\t\t_________________" << endl;
    cout << "\t\t\t|  Number Game  |" << endl;
    cout << "\t\t\t|_______________|" << endl;
    cout << endl;

    cout << "Try to guess a number between 1 and 100." << endl << endl;
    do
    {
        cout << "Enter your guess: ";
        cin >> tashi_guess;
        tashi_attempts++;

        if (tashi_guess > tashi_rand)
        {
            cout << "Too high! Try again :) " << endl;
        }
        else if (tashi_guess < tashi_rand)
        {
            cout << "Too low! Try again  :) " << endl;
        }
        else 
        {
            cout << "Congratulations! You guessed the number " << tashi_rand << " correctly." << endl << endl;

            cout << "Number of attempts: " << tashi_attempts << endl;
        }
    } while (tashi_guess != tashi_rand);

    return 0;
}
