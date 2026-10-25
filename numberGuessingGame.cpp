#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int secret = rand() % 100 + 1;

    int guess;

    while(true){

        cout<< "Enter your guess (1-100): ";

        cin >> guess;

        if(guess > secret){

            cout<< "Too high\n";

        }

        else if(guess < secret){

            cout<< "Too low\n";

        }

        else{

            cout << "Congratulations! You guessed correctly.\n";
            break;

        }
    }

    return 0;
}