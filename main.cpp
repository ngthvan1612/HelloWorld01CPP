#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int sumOfArray(const vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < (int)arr.size(); ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    Car* car = new Car("xe 01");
    cout << "car name: " << car->getCarName();
    delete car;
    return 0;
}
