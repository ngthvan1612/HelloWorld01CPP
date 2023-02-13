//
// Created by LENOVO on 2/13/2023.
//

#ifndef HELLOWORLD01_CAR_H
#define HELLOWORLD01_CAR_H

#include <string>

using namespace std;

class Car {
private:
    string name;
public:
    Car(string name);
    string getCarName();
};


#endif //HELLOWORLD01_CAR_H
