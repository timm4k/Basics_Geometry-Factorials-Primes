#include <iostream>
using namespace std;

void printRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n, k;
    cout << "Enter height (n): ";
    cin >> n;
    cout << "Enter width (k): ";
    cin >> k;

    printRectangle(n, k);

    return 0;
}

// task2
#include <iostream>
using namespace std;

int calculateFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << calculateFactorial(num) << endl;

    return 0;
}


// task3
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime num" << endl;
    }
    else {
        cout << num << " is not a prime num" << endl;
    }

    return 0;
}


// task4
#include <iostream>
using namespace std;

int cube(int num) {
    return num * num * num;
}

int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;

    cout << "Cube of " << num << " is " << cube(num) << endl;

    return 0;
}

// task5
#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter two nums: ";
    cin >> num1 >> num2;

    cout << "The largest num is " << findMax(num1, num2) << endl;

    return 0;
}

// task6
#include <iostream>
using namespace std;

bool isPositive(int num) {
    return num > 0;
}

int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;

    if (isPositive(num)) {
        cout << num << " is positive." << endl;
    }
    else {
        cout << num << " is negative." << endl;
    }

    return 0;
}
