#include <bits/stdc++.h>
using namespace std;


int add(int a, int b) {
    if (b == 0)  
        return a;
    else
        return add(a + 1, b - 1); 
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
