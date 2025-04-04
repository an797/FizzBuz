#include <iostream>

using namespace std;

void fizzBuzz(int n){
    for(int i=1; i<=n; i++){
        if(i%3 == 0 && i%5 == 0){
            cout << "Fizz/Buzz" << endl;
            continue;
        }
        else if(i%3 == 0){
            cout << "Fizz" << endl;
            continue;
        }
        else if(i%5 == 0){
            cout << "Buzz" << endl;
            continue;
        }
        else{
            cout << i << endl;
        }
    }
}

int main()
{
    fizzBuzz(15);
    return 0;
}
