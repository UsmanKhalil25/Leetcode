#include <iostream>

int climbStairs(int n) {
    int* arr = new int[n+1];
    arr[0] = arr[1] = 1;
    for(int i = 2;i<=n;i++) {
        arr[i]= arr[i-1]+ arr[i-2];
    }
    int ans = arr[n];
    delete[]arr;
    return ans;
}

int main() {

    int stairs = 12000;

    std::cout<<"Ways to reach top: "<< climbStairs(stairs)<<std::endl;
    return 0;
}
