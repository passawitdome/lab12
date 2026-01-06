#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int n){
    if(n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}