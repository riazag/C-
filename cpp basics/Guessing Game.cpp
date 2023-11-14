#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = (rand() % (50) + 1);
    int userGuess;
    int Num_Of_Tries = 0;
    cout << "Guess my Number!" << endl;
    do
    {
        cout << "Enter a Number between 1 to 50" << endl;
        cin >> userGuess;
        Num_Of_Tries++;
        if (userGuess == randomNumber)
        {
            cout << "Congratulation! You have Guess the correct Number : " << randomNumber << " in " << Num_Of_Tries << " tries" << endl;
        }
        else if (userGuess < randomNumber)
        {
            cout << "Too low! try again" << endl;
        }
        else if (userGuess > randomNumber)
        {
            cout << "Too high! try again" << endl;
        }
        else
        {
            cout << "You an entered an  incorrect input! " << endl;
        }
    } while (userGuess != randomNumber);
    return 0;
}
