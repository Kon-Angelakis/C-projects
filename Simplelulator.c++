#include <iostream>
#include <math.h>

int main(){
    std::cout << "======| Welcome to the Simplelulator! |====== \n" ;
    std::cout << "Please select one of the following options depending on the action you wish to take: \n" ;
    std::cout << "-1.-----     Addition     (+) \n" ;
    std::cout << "--2.----    Subtraction   (-) \n" ;
    std::cout << "---3.---  Multiplication  (*) \n";
    std::cout << "----4.--     Division     (/) \n" ;
    std::cout  << "-----5.- Raise to a power (^) \n \n" ;
    std::cout << "Or type in 0 to exit the program \n \n" ;

    int choice;
    bool f = false;
    //goto jump if user input is not 1-5 out of the options above
    jump:

    std::cout << "Answer: ";
    std::cin >> choice;

    if (choice <0 or choice >5){
        std::cout << "Invalid option please try again \n";
        goto jump;
    }
    
    //Addition
    if (choice == 1){
        std::cout << std::endl << "###== Addition ==### \n";
        std::cout << "Select number 1: ";
        float n1,n2;
        std::cin >> n1;
        std::cout << "Select number 2: ";
        std::cin >> n2;
        std::cout << "The result is: " << n1+n2 << std::endl ;
        //goto jump2 if user input (a) is neither 1 nor 0
        jump2:
        std::cout << "Continue (1/0): ";
        int a;
        std::cin >> a;
        if (a == 1){
            goto jump;
        }else if(a == 0){
            //jumps to end of program
            goto jump3;
        }else{
            std::cout << "Invalid option try again \n" ;
            goto jump2;
        }

    //Subtraction
    }else if (choice == 2){
        std::cout << std::endl << "###== Subtraction ==### \n";
        std::cout << "Select number 1: ";
        float n1,n2;
        std::cin >> n1;
        std::cout << "Select number 2: ";
        std::cin >> n2;
        std::cout << "The result is: " << n1-n2 << std::endl ;
        std::cout << "Continue (1/0): ";
        int a;
        std::cin >> a;
        if (a == 1){
            goto jump;
        }else if(a == 0){
            goto jump3;
        }else{
            std::cout << "Invalid option try again \n" ;
            goto jump2;
        }

    //Multiplication
    }else if (choice == 3){
        std::cout << std::endl << "###== Multiplication ==### \n";
        std::cout << "Select number 1: ";
        float n1,n2;
        std::cin >> n1;
        std::cout << "Select number 2: ";
        std::cin >> n2;
        std::cout << "The result is: " << n1*n2 << std::endl ;
        std::cout << "Continue (1/0): ";
        int a;
        std::cin >> a;
        if (a == 1){
            goto jump;
        }else if(a == 0){
            goto jump3;
        }else{
            std::cout << "Invalid option try again \n" ;
            goto jump2;
        }

    //Division (num/0 = inf)
    }else if (choice == 4){
        std::cout << std::endl << "###== Division ==### \n";
        std::cout << "Select the numerator: ";
        float n1,n2;
        std::cin >> n1;
        std::cout << "Select the denominator: ";
        std::cin >> n2;
        std::cout << "The result is: " << n1/n2 << std::endl ;
        std::cout << "Continue (1/0): ";
        int a;
        std::cin >> a;
        if (a == 1){
            goto jump;
        }else if(a == 0){
            goto jump3;
        }else{
            std::cout << "Invalid option try again \n" ;
            goto jump2;
        }

    //Raise to a n power   
    }else if(choice == 5){
        std::cout << std::endl << "###== Raise to the n-power ==### \n";
        std::cout << "Select the number: ";
        float n1,n;
        std::cin >> n1;
        std::cout << "Select the n-power: ";
        std::cin >> n;
        std::cout << "The result is: " << pow(n1,n) << std::endl ;
        std::cout << "Continue (1/0): ";
        int a;
        std::cin >> a;
        if (a == 1){
            goto jump;
        }else if(a == 0){
            goto jump3;
        }else{
            std::cout << "Invalid option try again \n" ;
            goto jump2;
        }

    //User input (int choice) was 0 so program exits
    }else{
        goto jump3;
    }


    //End of program
    jump3:
    std::cout << std::endl << "Exiting...";
    std::cout << std::endl << "Thanks for using the Simplelulator! \n";
    system("pause");
    return 0;
}