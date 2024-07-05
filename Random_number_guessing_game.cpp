#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
    int guess,number;
    srand((unsigned int) time(NULL));
    number=(rand()%250)+1;
    do
    {
        std::cout << "Guess the number (1-250): ";
        std::cin >> guess;
        if(guess > number)
            std::cout << "Guess a lower number" << "\n";
        else if(guess < number) 
            std::cout << "Guess a higher number" << "\n";
        else
            std::cout << "You guessed the right number" << "\n";       
    }while(guess != number);
    return 0;
}