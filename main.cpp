#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>

using namespace std;
int main() {
    /*
     * The player will start the program
     * will then guide the player through all four options to use the process of elimination
     * to select one of the four broad potential problems
     * - weather, track, train, or conductor.
     * Once the player has selected the correct option,
     * the program will tell them, and they may move onto the next stage.
     */
    int choice; // variable for the choice
    int ChoiceNum = 1; // updates to reflect print statement

    // variables to alter the question statement as you progress
    int Weather = 0;  // 0 = not selected, 1 = selected, 2 = chosen wrong
    int Track = 0;  // 0 = not selected, 1 = selected, 2 = chosen wrong
    int Train = 0;  // 0 = not selected, 1 = selected, 2 = chosen wrong
    int Conductor = 0;  // 0 = not selected, 1 = selected, 2 = chosen wrong
    bool AlreadySelected; // Stores if choice was previously selected, so if it gets reinvetigated it prints instantly.

    bool Correct = false; // determines if the user has determined the cause of the derailment

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // used to print different text colors in c++
    while (!Correct) {
        /* Colors:
         * 1 blue
         * 2 green
         * 3 turquoise
         * 4 red
         * 5 purple
         * 6 orange
         * 7 white
         * 8 gray
        */
        SetConsoleTextAttribute(hConsole, 7); // sets the color of text to default
        cout << "\nAfter looking at the train's route, there is a few possible causes for the train derailing. \n";
        if (Weather == 0) // enters slow printing loop below if hasn't been selected
        {
            SetConsoleTextAttribute(hConsole, 2); // green text for not selected
            cout << "(1) The Weather \n";
        }
        else if (Weather == 2)
        {
            SetConsoleTextAttribute(hConsole, 4); // red text for wrong
            cout << "(1) The Weather \n";
        }
        else // if has already been selected
        {
            SetConsoleTextAttribute(hConsole, 8); // gray text for already selected
            cout << "(1) The Weather \n";
        }

        if (Track == 0) // enters slow printing loop below if hasn't been selected
        {
            SetConsoleTextAttribute(hConsole, 2); // green text for not selected
            cout << "(2) The Track \n";
        }
        else if (Track == 2)
        {
            SetConsoleTextAttribute(hConsole, 4); // red text for wrong
            cout << "(2) The Track \n";
        }
        else // if has already been selected
        {
            SetConsoleTextAttribute(hConsole, 8); // gray text for already selected
            cout << "(2) The Track \n";
        }

        if (Train == 0) // enters slow printing loop below if hasn't been selected
        {
            SetConsoleTextAttribute(hConsole, 2); // green text for not selected
            cout << "(3) The Train \n";
        }
        else // if has already been selected
        {
            SetConsoleTextAttribute(hConsole, 8); // gray text for already selected
            cout << "(3) The Train \n";
        }

        if (Conductor == 0) // enters slow printing loop below if hasn't been selected
        {
            SetConsoleTextAttribute(hConsole, 2); // green text for not selected
            cout << "(4) The Conductor \n";
        }
        else if (Conductor == 2)
        {
            SetConsoleTextAttribute(hConsole, 4); // red text for wrong
            cout << "(4) The Conductor \n";
        }
        else // if has already been selected
        {
            SetConsoleTextAttribute(hConsole, 8); // gray text for already selected
            cout << "(4) The Conductor \n";
        }

        if (ChoiceNum > 4) // Prints the option to enter choice if user has read through all 4 scenarios
        {
            SetConsoleTextAttribute(hConsole, 2); // green text for not selected
            cout << "(5) Enter your guess \n";
        }

        SetConsoleTextAttribute(hConsole, 7); // sets the color of text to default for rest of code
        switch (ChoiceNum)
        {
            case 1:
                cout << "Which aspect would you like to investigate first? \n";
                break;
            case 2:
                cout << "Which aspect would you like to investigate second? \n";
                break;
            case 3:
                cout << "Which aspect would you like to investigate third? \n";
                break;
            case 4:
                cout << "Which aspect would you like to investigate fourth? \n";
                break;
            default:
                cout << "Enter your guess or which aspect would you like to reinvestigate? \n";
        }
        cin >> choice;

        string test; // declares the string printed for each choice
        chrono::milliseconds dura( 30); // will wait 30 ms between printing each character

        switch (choice) {
            case 1:
                if (Weather == 2) // if already guessed prints wrong statement
                {
                    cout << "You already guessed this and it was wrong, no need to reinvestigate. \n";
                }
                else
                {
                    // declaring the string to be printed
                    test = "\nThe weather was 62 degrees, with a few rain-clouds in the sky. \n"
                           "The sun was shining through the clouds, the air felt crisp and fresh. \n"
                           "A strong breeze carried through the air, rustling the trees and blowing off hats. \n"
                           "There was a hurricane in the forecast, just off the coast of Connecticut. \n"
                           "It was supposed to scrape by and stay off the coast, dying down of its own accord. \n";
                }

                AlreadySelected = true;
                if (Weather == 0)
                {
                    AlreadySelected = false;
                    ChoiceNum++; // only adds one if choice was not yet chosen
                    Weather = 1; // = 1 to make it already selected
                }
                break;
            case 2:
                if (Track == 2) // if already guessed prints wrong statement
                {
                    cout << "You already guessed this and it was wrong, no need to reinvestigate. \n";
                }
                else
                {
                    // declaring the string to be printed
                    test = "\nThe track was mostly newly built, but had parts first built in the 1850's as part of the NY & NE Railroad. \n"
                           "As track segments rusted or failed, they were replaced with new track. \n"
                           "Currently there is a small 25 mile segment left of old track. \n"
                           "The track was assessed to maintain safe operation until the scheduled maintenance date. \n"
                           "It was scheduled to be replaced in the month following the derailment. \n";
                }

                AlreadySelected = true;
                if (Track == 0)
                {
                    AlreadySelected = false;
                    ChoiceNum++; // only adds one if choice was not yet chosen
                    Track = 1; // = 1 to make it already selected
                }
                break;
            case 3:
                // declaring the string to be printed
                test = "\nThe train was an old train, designed and built in the early 1900s. \n"
                       "It has traveled all around the country and was going to be retired 5 years ago. \n"
                       "Luckily, it received a brand new engine and was kept in service a bit longer. \n"
                       "The train itself was recently inspected and results came back halfway through its journey showing it failed. \n"
                       "It was going to receive emergency service for repairs upon its arrival. \n";
                AlreadySelected = true;
                if (Train == 0)
                {
                    AlreadySelected = false;
                    ChoiceNum++; // only adds one if choice was not yet chosen
                    Train = 1; // = 1 to make it already selected
                }
                break;
            case 4:
                if (Conductor == 2) // if already guessed prints wrong statement
                {
                    cout << "You already guessed this and it was wrong, no need to reinvestigate. \n";
                }
                else
                {
                    // declaring the string to be printed
                    test = "\nThe conductor of the train was renowned for his job. \n"
                           "He has been operating and overseeing this train for the past 45 years \n"
                           "He was a bit sick and tired, but it was okay because it was going to be an easy journey. \n"
                           "The conductor made sure to always operate the train only when he was feeling well. \n"
                           "Otherwise his equally experienced and well health co-conductor would take over. \n";
                }

                AlreadySelected = true;
                if (Conductor == 0)
                {
                    AlreadySelected = false;
                    ChoiceNum++; // only adds one if choice was not yet chosen
                    Conductor = 1; // = 1 to make it already selected
                }
                break;
            case 5:
                if (ChoiceNum > 4) // only allows user to enter into case if they have read all options
                {
                    test = "Enter: \n"
                           "(1) Weather \n"
                           "(2) Track \n"
                           "(3) Train \n"
                           "(4) Conductor \n";
                }
                else // otherwise prints default because option is yet to exist
                {
                    test = "Please input one of the options presented \n"; // declaring the string to be printed
                }
                break;
            default:
                test = "Please input one of the options presented \n"; // declaring the string to be printed
                break;
        }
        if (choice == 5 && ChoiceNum > 4) // only enters if choice is available
        {
            int answer = 0; // allowing it to enter the loop

            while (answer > 4 || answer < 1)
            {
                cout << test;
                cin >> answer;
                switch (answer) {
                    case 1:
                        test = "Wrong... \n"; // declaring the string to be printed
                        Weather = 2; // makes it wrong chosen
                        break;
                    case 2:
                        test = "Wrong... \n"; // declaring the string to be printed
                        Track = 2; // makes it wrong chosen
                        break;
                    case 3:
                        test = "Good Job! \n"; // declaring the string to be printed
                        Correct = true;
                        break;
                    case 4:
                        test = "Wrong... \n"; // declaring the string to be printed
                        Conductor = 2; // makes it wrong chosen
                        break;
                    default:
                        cout << "Please input one of the options presented \n";
                        break;
                }
            }
        }

        if (!AlreadySelected && choice <= 5 && choice >= 1) // prints fast if choice was previously read and for incorrect input
        {
            for (int i = 0; i < test.length(); i++) // declares the loop to print one char at a time
            {
                cout << test.substr(i, 1); // prints out char #i
                this_thread::sleep_for(dura); // waits the declared 30 ms between each char being printed
            }
        }
        else
        {
            cout << test;
        }
        for (int i = 0; i < 50; i++) // declares loop to wait 1.5 seconds before reprinting the text
        {
            this_thread::sleep_for(dura); // waits 30ms, 50 times for a total 1.5 seconds
        }
    }
    return 0;
}