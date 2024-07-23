Number Guessing Game
Overview
This Number Guessing Game is a simple interactive game where the player tries to guess a randomly generated number between 1 and 100. The program provides feedback on whether the guessed number is too high or too low, and it tracks the number of attempts made.

Features
Randomly generates a number between 1 and 100
Provides feedback on whether the guessed number is too high or too low
Tracks the number of attempts
Allows the player to play multiple times
Prerequisites
C++ compiler (e.g., g++, clang++)
Command-line interface
Usage
Compilation
To compile the program, use the following command:

g++ -o guessing_game guessing_game.cpp
Execution
Run the compiled program with:

Instructions
Upon running the program, you will be prompted to guess a number between 1 and 100.
Enter your guess, and the program will provide feedback:
If your guess is too high, it will prompt you to guess a lower number.
If your guess is too low, it will prompt you to guess a higher number.
Continue guessing until you find the correct number.
The program will display the number of attempts it took for you to guess correctly.
After successfully guessing the number, you will be asked if you want to play again. Enter y or Y to play again, or n or N to exit.
Code Explanation
Gauss_number Class
The Gauss_number class manages the game logic, including generating the random number, handling user input, and providing feedback.

gaussing_number_game(): Main method that runs the game loop. It generates a random number, takes user guesses, provides feedback, and tracks the number of attempts.
Main Function
The main function creates an instance of the Gauss_number class and starts the game.

Example
Here's a snippet of the game loop in the gaussing_number_game method:

start:
cout << "Enter Your Guess: " << endl;
while (true) {
    cin >> num;
    if (num > c_guase) {
        cout << "You guessed a greater number \n--> Guess a lower number :" << endl;
        cout << "----------------------------" << endl;
    }
    else if (num < c_guase) {
        cout << "You guessed a lower number \n--> Guess a greater number :" << endl;
        cout << "----------------------------" << endl;
    }
    else {
        cout << "Congratulations :) you guessed the number in " << num_gusess << " attempts " << endl;
        break;
    }
    num_gusess++;
}
cout << "===============================================" << endl;
cout << "Do you want to try again?" << endl;
cout << "Press y/Y for YES and n/N for NO" << endl;
cin >> option;
if (option == 'y' || option == 'Y') {
    goto start;
} else {
    cout << "Game successfully terminated!" << endl;
    exit(0);
}
Author
Muhammad ALi
License
This project is licensed under the MIT License - see the LICENSE file for details.
