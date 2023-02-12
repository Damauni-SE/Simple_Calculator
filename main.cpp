// Author: Dwayne Bingham
// Program designed to take two values from user and perform a
// mathematical operation of user's choice.
//-----------------------------------------------------------------------------
#include <iostream>

int main()
{
    //Displays the message "Math Calculator"
    std::cout<<"\n\t\t+-------------------+"<<std::endl;
    std::cout<<"\t\t| Simple Calculator |"<<std::endl;
    std::cout<<"\t\t+-------------------+"<<std::endl;

    double a, b, c;
    //Asks the user to enter a number and store the value in a
    std::cout<<"Enter a number: ";
    std::cin>>a;

    //Asks the user to enter a number and store the value in b
    std::cout<<"Enter a second number: ";
    std::cin>>b;

    char operation;
    std::cout<<"\nWhat operation would you like to perform?"<<std::endl;
    std::cout<<"+ : Addition"<<std::endl;
    std::cout<<"- : Subtraction"<<std::endl;
    std::cout<<"* : Multiplication"<<std::endl;
    std::cout<<"/ : Division"<<std::endl;
    std::cout<<"Enter one of the above operations (e.g + or *): ";
    std::cin>> operation;
    std::cout<<std::endl;

    switch (operation){
        case '+':
            //Performs addition if user enters "+"
            c = a + b;
            std::cout<<a<<" plus "<< b <<" is equal to "<< c <<std::endl;
            break;

        case '-':
            //Performs subtraction if user enters "-"
            c = a - b;
            std::cout<<a<<" minus "<< b <<" is equal to "<< c <<std::endl;
            break;

        case '*':
            //Performs multiplication if user enters "*"
            c = a * b;
            std::cout<<a<<" multiplied by "<< b <<" is equal to "<< c <<std::endl;
            break;

        case '/':
            //Performs division if user enters "/"
            if ( b == 0) {
                std::cout<<"You cannot divide by 0."<<std::endl;
                break;
            }
            c = a / b;
            std::cout<<a<<" divided by "<< b <<" is equal to "<< c <<std::endl;
            break;

        default:
            //Displays error message if there is an invalid input
            std::cout<<"\nPlease enter a valid operation (such as +, -, *, /)"<<std::endl;
    }
    return 0;
}


