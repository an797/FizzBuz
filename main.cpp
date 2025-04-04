#include <iostream>

using namespace std;

void fizzBuzz(int n){
    for(int i=1; i<n; i++){
        cout << i << endl;
        if(n%3 == 0 && n%5 == 0){
            cout << "Fizz/Buzz" << endl;
            continue;
        }
        if(n%3 == 0){
            cout << "Fizz" << endl;
            continue;
        }
        if(n%5 == 0){
            cout << "Buzz" << endl;
            continue;
        }
    }
}

int main()
{
    fizzBuzz(2);
    return 0;
}
