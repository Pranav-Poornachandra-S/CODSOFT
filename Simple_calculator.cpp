#include<iostream>

double power(double x,double n)
{
    if(n==0)
        return 1;
    else    
        return x*power(x,n-1);    
}
int main()
{
    double num1,num2,c;
    int a,b;
    char ch;
    std::cout << "Enter the operation to be performed(+,-,*,/,%,^): ";
    std::cin >> ch;
    if(ch=='%')
    {
        std::cout << "Enter the first number: ";
        std::cin >> a;
        std::cout << "Enter the second number: ";
        std::cin >> b;
        std::cout << "Remainder= " << a%b << "\n";
    }
    else
    {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;
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
            case '^':
                c=power(num1,num2);
                std::cout << "Power= " << c << "\n"; 
                break;                        
        }
    }
    return 0;
}