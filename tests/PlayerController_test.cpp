#include <iostream>
#include <string>
#include "../src/PlayerController.hpp"



void getNameTest(){
    std::string expected="Player1";
    PlayerController p1(expected);
    std::string actual = p1.getName();
    if(actual==expected){
        std::cout<<"getName Test passed\n";
    }
    else
    {
        std::cout<<"getName Test Failed\n";
        std::cout<<"actual "<<actual<<" expected "<<expected<<"\n";
    }
}

int main(){
    getNameTest();
}