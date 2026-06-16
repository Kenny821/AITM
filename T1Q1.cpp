#include <iostream>
using namespace std;


int main() {

int num [] = {2,3,4,5,11,13,17};
for (int i = 0; i < 7; i ++) {
    num[i] = num[i] * 2;
    cout << num[i] << " "; 
}

int sum = 0;
for (int i = 0; i < 7; i++) {
    sum += num[i];
    cout << "Total Number of Prime Numbers: " << sum << endl;
}

int average = sum /7;
for (int i = 0; i < 7; i++) {
    cout << "The average of the prime numbers: " << average << endl;
}
    return 0;
}