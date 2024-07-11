#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Welcome to Number Guessing Game!! \n"
         << "In this game you have to guess the number between 1 and 100 \n"
         << "You'll have limited choices based on the level chosen by you. \nAll the best!!\n"
         << endl;

    while (true) {
        cout << "Enter the level of difficulty\n"
             << "1 for easy\n"
             << "2 for medium\n"
             << "3 for difficult\n"
             << endl;

        int levelChoice;
        cout << "Enter the number:\n";
        cin >> levelChoice;

        srand(time(0));
        int num = 1 + (rand() % 100);
        int playerNum;
        bool gameWon = false;

        if (levelChoice == 1) {
            cout << "You have 10 guesses for finding the number\n";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {
                cout << "Enter the number: ";
                cin >> playerNum;

                if (playerNum == num) {
                    cout << "Bingo!! Right guess!! " << playerNum << " is the number. \n"
                         << "Thanks for playing!!" << endl;
                    gameWon = true;
                    break;
                } else {
                    cout << "Wrong!! " << playerNum << " is not the right number. "
                         << "Try again!!\n" << endl;
                    if (playerNum > num) {
                        cout << "The number is smaller than your number" << endl;
                    } else {
                        cout << "The number is greater than your number" << endl;
                    }

                    choicesLeft--;
                    cout << choicesLeft << " choices are left." << endl;

                    if (choicesLeft == 0) {
                        cout << "Woops!! You ran out of choices!! Try again!! " << num 
                             << " was the number!" << endl;
                    }
                }
            }
        } else if (levelChoice == 2) {
            cout << "You have 8 guesses for finding the number\n";
            int choicesLeft = 8;
            for (int i = 1; i <= 8; i++) {
                cout << "Enter the number: ";
                cin >> playerNum;

                if (playerNum == num) {
                    cout << "Bingo!! Right guess!! " << playerNum << " is the number. \n"
                         << "Thanks for playing!!" << endl;
                    gameWon = true;
                    break;
                } else {
                    cout << "Wrong!! " << playerNum << " is not the right number. "
                         << "Try again!!\n" << endl;
                    if (playerNum > num) {
                        cout << "The number is smaller than your number" << endl;
                    } else {
                        cout << "The number is greater than your number" << endl;
                    }

                    choicesLeft--;
                    cout << choicesLeft << " choices are left." << endl;

                    if (choicesLeft == 0) {
                        cout << "Woops!! You ran out of choices!! Try again!! " << num 
                             << " was the number!" << endl;
                    }
                }
            }
        } else if (levelChoice == 3) {
            cout << "You have 6 guesses for finding the number\n";
            int choicesLeft = 6;
            for (int i = 1; i <= 6; i++) {
                cout << "Enter the number: ";
                cin >> playerNum;

                if (playerNum == num) {
                    cout << "Bingo!! Right guess!! " << playerNum << " is the number. \n"
                         << "Thanks for playing!!" << endl;
                    gameWon = true;
                    break;
                } else {
                    cout << "Wrong!! " << playerNum << " is not the right number. "
                         << "Try again!!\n" << endl;
                    if (playerNum > num) {
                        cout << "The number is smaller than your number" << endl;
                    } else {
                        cout << "The number is greater than your number" << endl;
                    }

                    choicesLeft--;
                    cout << choicesLeft << " choices are left." << endl;

                    if (choicesLeft == 0) {
                        cout << "Woops!! You ran out of choices!! Try again!! " << num 
                             << " was the number!" << endl;
                    }
                }
            }
        } else {
            cout << "Invalid level choice! Please try again." << endl;
        }

        if (gameWon) {
            break;
        }

        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (playAgain == 'n' || playAgain == 'N') {
            cout << "Thanks for playing! Goodbye!" << endl;
            break;
        }
    }

    return 0;
}
