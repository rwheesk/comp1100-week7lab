#include <iostream>
#include <stdlib.h> // Library needed to get a random seed
#include <time.h>

int main() {
    int money = 500;        //The starting amount of money giving to the user
    int bet;                //How much the user wishes to bet
    int guess;              //the users guess for 1 or 0
    std::cout << "Welcome to Binary Roulette. You have $500 to start betting with.\n";
    
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand( time(NULL) );

    while (money>0){
        
        std::cout << "Choose the number 1 or 0.\n";
        std::cin >> guess;
        if(guess >= 2){
        std::cout << "Cashing out.\n";
        break;
        }
        std::cout << "You chose " << guess << ".\n";
        std::cout << "How much would you like to bet?\n";
        std::cin >> bet;
        std::cout << "You chose to bet " << bet << ".\n";

    // Picks either 0 or 1 randomly with equal probablilty	
    // CAN BE RUN AS MANY TIMES AS NEEDED
         int random = rand() % 2;
        std::cout << "The correct number to win is " << random << ".\n";

         if(random == guess)
        {
        std::cout << "Congrats you won!\n";
        money = bet * 2 + money; //Where the bet amount is doubled and added to the money available to play.
        std::cout << "Your new amount is " << money << "!\n";

        }    
    
        else
        {
        std::cout << "Sorry you lost.\n";
        money = money - bet; //Where the bet is subtracted from the total amount of money available to play.
        std::cout << "Your new amount is " << money << "!\n";
        }
    }
    std::cout << "You cashed out or lost all your money.\n";
    
    return 0;





}
