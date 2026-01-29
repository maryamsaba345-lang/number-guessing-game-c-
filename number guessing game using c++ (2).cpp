#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function declarations
void playGame();
void saveResult(int attempts, bool win);
void showPreviousResult();

int main()
{
    int choice;

    showPreviousResult();

    while (true)
    {
        cout << "\n1. Play Game";
        cout << "\n2. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            playGame();
        }
        else if (choice == 2)
        {
            cout << "Thank you for playing!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

// Function to play game
void playGame()
{
    srand(time(0));
    int secretNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;
    int guesses[3];
    int *ptr = guesses;
    bool win = false;

    cout << "\nGuess the number between 1 and 10" << endl;

    while (attempts < 3)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        *(ptr + attempts) = guess;
        attempts++;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed correctly." << endl;
            win = true;
            break;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high!" << endl;
        }
        else
        {
            cout << "Too low!" << endl;
        }
    }

    
    if (!win)
    {
        cout << "\nYou lost!" << endl;
    }
    
    cout << "\nYour guesses were: ";
    for (int i = 0; i < attempts; i++)
    {
        cout << guesses[i] << " ";
    }

    saveResult(attempts, win);
}

// Function to save result in file
void saveResult(int attempts, bool win)
{
    ofstream file("result.txt", ios::app);
    file << "Attempts used: " << attempts
         << " | Result: " << (win ? "WIN" : "LOSS") << endl;
    file.close();
}

// Function to show previous result
void showPreviousResult()
{
    ifstream file("result.txt");
    string line;

    cout << "Previous Results:\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

