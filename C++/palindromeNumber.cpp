#include<iostream>

bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    int originalNumber = x;
    long int newNumber = 0;
    while(x > 0) {
        int lastDigit = x % 10;
        newNumber = newNumber * 10 + lastDigit;
        x /= 10;
    }
    if(newNumber == originalNumber ) {
        return true;
    }
    return false;
}

int main() {
    std::cout<<"This is working"<<std::endl;
    std::cout<<"isPalindrome: "<< isPalindrome(121)<<std::endl;
    std::cout<<"isPalindrome: "<< isPalindrome(-121)<<std::endl;
    return 0;
}
