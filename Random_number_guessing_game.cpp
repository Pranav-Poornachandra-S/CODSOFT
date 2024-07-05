#include<iostream>
#include<cstdlib>
using namespace std
int main()
{
    int guess,number;
    number=rand()%250;
    do
    {
        cout << "Guess the number: ";
        cin >> guess;
        if(guess > number)
            cout << "Guess a lower number" << '\n';
        else if(guess < number) 
            cout << "Guess a higher number" << '\n';
        else
            cout << "You guessed the right number" << '\n';       
    }while(guess!=number);
}