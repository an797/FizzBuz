#include <iostream>

using namespace std;

void fizzBuzz(int n){
    for(int i=1; i<=n; i++){
        cout << i << endl;
        if(i%3 == 0 && i%5 == 0){
            cout << "Fizz/Buzz" << endl;
            continue;
        }
        if(i%3 == 0){
            cout << "Fizz" << endl;
            continue;
        }
        if(i%5 == 0){
            cout << "Buzz" << endl;
            continue;
        }
    }
}

int main()
{
    fizzBuzz(5);
    return 0;
}
