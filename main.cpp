#include <iostream>

using namespace std;

void fizzBuzz(int n){
    for(int i=0; i<n; i++){
        if(n%3 == 0 && n%5 == 0){
            cout << "Fizz/Buzz" << endl;
        }
        if(n%3 == 0){
            cout << "Fizz" << endl;
        }
        if(n%5 == 0){
            cout << "Buzz" << endl;
        }
        cout << i << endl;
    }
}

int main()
{
    fizzBuzz(3);
    return 0;
}
