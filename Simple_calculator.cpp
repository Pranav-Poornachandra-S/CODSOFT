#include<iostream>

int main()
{
    float num1,num2;
    char ch;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the operation to be performed(+,-,*,/): ";
    std::cin >> ch;
    switch(ch)
    {
        case '+':
            std::cout << "Sum= " << num1+num2 << "\n";
            break;
        case '-':
            std::cout << "Difference= " << num1-num2 << "\n";
            break; 
        case '*': 
            std::cout << "Product= " << num1*num2 << "\n";
            break;
        case '/':
            if(num2==0)
            {
                std::cout << "Number cannot be divided by zero" << "\n";
                break;
            }
            else
            {
                std::cout << "Quotient= " << num1/num2 << "\n";
                break;
            }                    
    }
    return 0;
}