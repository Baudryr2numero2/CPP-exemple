#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int numGuesses = 0;

    cout << "Devinez le nombre secret entre 1 et 100." << endl;

    do {
        cout << "Entrez un nombre : ";
        cin >> guess;
        numGuesses++;

        if (guess < secretNumber) {
            cout << "Trop bas." << endl;
        } else if (guess > secretNumber) {
            cout << "Trop haut." << endl;
        } else {
            cout << "Bravo. Vous avez trouvé le nombre secret en " << numGuesses << " devinettes." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
