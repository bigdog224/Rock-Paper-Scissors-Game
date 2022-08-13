/* Steven Lam
 * 9/25/21
 * GE1501 C++ Assignment 2 - Rock, Paper, Scissors - Best of 3 Extra Credit
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    char userInput, compChoice; //variable that stores the user and computer choice (r, p, or s)
    int num; //variable used to hold the randomized integer between 1-3 which will be converted to a choice
    char redo = 'Y'; //variable that determines if the game/program will run again or end
    int uWins, cWins =0;
    srand(time(0));

    //These next 4 lines of code introduce the game rock, paper, scissors and sets the input the user needs to use
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "(r) for Rock" << endl;
    cout << "(p) for Paper" << endl;
    cout << "(s) for Scissors" << endl;

    /* loop gets the input from user and generates a random choice for the computer
     * the two are compared and follow the logic rules of rock, paper, scissors, and a statement of who wins is printed at the end
     * the user is asked if they want to play and can decide to play again or not
     */
    while(redo=='Y'){
        cout << "What will you choose?" << endl;
        cin >> userInput;

        // this loop restricts the user to choosing r, p, or s for the code to function, prints error message
        while (userInput != 'r' && userInput != 's' && userInput != 'p') {
            cout << "Please enter one of the following options only" << endl;
            cout << "(r) for rock, (p) for paper, or (s) for scissors" << endl;
            cin >> userInput;
        }
        // this stores a random number in num that determines which choice the computer makes
        num = rand() % 3 + 1;

        if (num == 1) {
            compChoice = 'r';
        } else if (num == 2) {
            compChoice = 'p';
        } else {
            compChoice = 's';
        }

        cout << "You chose: " << userInput << endl;
        cout << "Computer chose: " << compChoice << endl;


        // The below if and else if statements set the rules in rock, paper, scissors.
        if (compChoice == 'r' && userInput == 'p') {
            cout << "You win! Would you like to play again (Y or N)?" << endl; //prints result and asks if user would like to play again
            cin >> redo;
            while(redo!= 'Y' && redo != 'N'){ //prints error statement if input is not Y or N
                cout << "Please input a valid response." << endl;
                cout << "Y or N?" << endl;
                cin >> redo;
            }
        } else if (compChoice == 'r' && userInput == 's') {
            cout << "Computer wins! Would you like to play again (Y or N)?" << endl;
            cin >> redo;
            while(redo!= 'Y' && redo != 'N'){
                cout << "Please input a valid response." << endl;
                cout << "Y or N?" << endl;
                cin >> redo;
            }
        } else if (compChoice == 's' && userInput == 'r') {
            cout << "You win! Would you like to play again (Y or N)?" << endl;
            cin >> redo;
            while(redo!= 'Y' && redo != 'N'){
                cout << "Please input a valid response." << endl;
                cout << "Y or N?" << endl;
                cin >> redo;
            }
        } else if (compChoice == 's' && userInput == 'p') {
            cout << "Computer wins! Would you like to play again (Y or N)?" << endl;
            cin >> redo;
            while(redo!= 'Y' && redo != 'N'){
                cout << "Please input a valid response." << endl;
                cout << "Y or N?" << endl;
                cin >> redo;
            }
        } else if (compChoice == 'p' && userInput == 'r') {
            cout << "Computer wins! Would you like to play again (Y or N)?" << endl;
            cin >> redo;
            while(redo != 'Y' && redo != 'N'){
                cout << "Please input a valid response." << endl;
                cout << "Y or N?" << endl;
                cin >> redo;
            }
        } else if (compChoice == 'p' && userInput == 's') {
            cout << "You win! Would you like to play again (Y or N)?" << endl;
            cin >> redo;
            while(redo != 'Y' && redo != 'N'){
                cout << "Please input a valid response." << endl;
                cout << "Y or N?" << endl;
                cin >> redo;
            }
        }
            //reasks user to play again since it is a tie
        else {
            cout << "It's a tie... try again! What is your guess?" << endl;
            // error statement to prevent code from not working
            while (userInput != 'r' && userInput != 's' && userInput != 'p') {
                cout << "Please enter one of the following options only" << endl;
                cout << "(r) for rock, (p) for paper, or (s) for scissors" << endl;
                cin >> userInput;
            }
        }
    }
    cout << "Thank you for playing. Come back again :)" << endl; //a nice message to thank the user for playing
}
