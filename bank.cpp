#include <iostream>
#include <random>
#include <cstdint>
using namespace std;

class Account{
    private:
        int64_t balance;

    void deposit(int64_t d_amount){
        balance += d_amount;
    }
};


int main(){
    cout << "hello";
}
