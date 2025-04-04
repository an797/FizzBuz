#include <iostream>

using namespace std;

void fizzBuzz(int n){
    for(int i=0; i<n; i++){
        if(n%3 == 0 && n%5 == 0){
            cout << "Fizz/Buzz" << endl;
        }
        if(n%3 == 0){
            cout << "Fizz" << endl;
            break;
        }
        if(n%5 == 0){
            cout << "Buzz" << endl;
            break;
        }
        cout << i << endl;
    }
}

int main()
{

    return 0;
}
