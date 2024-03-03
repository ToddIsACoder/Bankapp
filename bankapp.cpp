#include <iostream>
int esc = 0;
int main(){
    double balance;
    while (esc==0){
        double depamount;
        double withdrawl;
        int req;
        std::cout << "Enter your request (1 = Show balance, 2 = Deposit, 3 = Withdrawl, 4 = Exit.): \n";
        std::cin >> req;
        switch(req){
            case 1: std::cout << "Your account balance is $" << balance <<'\n'; break;
            case 2: std::cout << "Enter the deposit amount: \n"; std::cin >> depamount; balance = depamount + balance; break;
            case 3: std::cout << "Enter the amount of money you would like to withdrawl: \n"; std::cin >> withdrawl; balance = balance - withdrawl; break;
            case 4: ::esc++; break;
        }
    }
}