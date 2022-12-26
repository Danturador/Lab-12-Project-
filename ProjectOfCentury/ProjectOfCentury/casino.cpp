#include "casino.h"
void rules()
{
    system("cls");
    wprintf(L"\t\t\033[1;43;30m======CASINO NUMBER GUESSING RULES!======\033[0;93m\n");
    wprintf(L"\t1. Choose a number between 1 to 10\n");
    wprintf(L"\t2. Winner gets 10 times of the money bet\n");
    wprintf(L"\t3. Wrong bet, and you lose the amount you bet\n\n");
}
extern int casino()
{
    char playerName[10] = {};
    int balance;
    int bettingAmount;
    int guess;
    int dice;
    char choice;
    srand(time(0));
    wprintf(L"\n\t\t\033[1;43;30m========WELCOME TO CASINO WORLD=======\033[0m\n\n");
    wprintf(L"\n\n\033[33mWhat's your Name : \033[1;4;32m");
    cin >> playerName;
    wprintf(L"\n\n\033[0;32mEnter the starting balance to play game : \033[32;1;4m$");
    cin >> balance;
    if (balance <= 0) {
        wprintf(L"\033[0;91mYou have no money to play\033[0m\n");
        system("pause");
        return 0;
    }
    wprintf(L"\033[0m");
    do
    {
        system("cls");
        rules();
        wprintf(L"\n\nYour current balance is \x1B[1;32m$%d\033[0m\n", balance);
        do {
            wprintf(L"\033[0mHey, \033[1;33m%S\033[0m, enter amount to bet : \033[1;92m$", playerName);
            cin >> bettingAmount;
            wprintf(L"\033[0m");
            if (bettingAmount > balance)
                wprintf(L"Betting balance can't be more than current balance!\n\nRe-enter balance\n ");
            if (bettingAmount < 0)
                wprintf(L"Betting balance can't be less than 1!\n\nRe-enter balance\n ");
        } while (bettingAmount > balance);
        do {
            wprintf(L"Guess any betting number between \033[1;36m1 \033[0m& \033[1;36m10\033[0m: \033[1;4;94m");
            cin >> guess;
            wprintf(L"\033[0m");
            if (guess <= 0 || guess > 10)
                wprintf(L"\nNumber should be between 1 to 10\nRe-enter number:\n ");
        } while (guess <= 0 || guess > 10);
        dice = rand() % 10 + 1;
        if (dice == guess) {
            wprintf(L"\n\nYou are in luck!! You have won Rs.%d", bettingAmount * 10);
            balance = balance + bettingAmount * 10;
        }
        else {
            wprintf(L"Oops, better luck next time !! You lost \033[91m$%d\033[0m\n", bettingAmount);
            balance = balance - bettingAmount;
        }
        wprintf(L"\nThe winning number was: \033[1;94m%d\033[0m\n", dice);
        wprintf(L"\n\033[1;33m%S\033[0m, You have balance of \033[1;32m$ %d\033[0m\n", playerName, balance);
        if (balance == 0) {
            wprintf(L"\033[91mYou have no money to play ");
            break;
        }
        wprintf(L"\n\n-->Do you want to play again (y/n)? ");
        cin >> choice;
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            wprintf(L"\033[31mWrong enter. Try again\033[0m\n");
            wprintf(L"\n\n-->Do you want to play again (y/n)? ");
            cin >> choice;
        }
    } while (choice == 'Y' || choice == 'y');
    wprintf(L"\n\n\n\n\n\033[1;30;103mThanks for playing the game. Your balance is $ %d\033[0m\n\n", balance);
    system("pause");
    return 0;
}