#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
    std::string brand, model;
    int year;

public:
    Car(const std::string& sBrand, const std::string& sModel, int nYear)
        : brand(sBrand), model(sModel), year(nYear) {}

    const std::string& GetBrand() const { return brand; }
    const std::string& GetModel() const { return model; }
    int GetYear() const { return year; }
};

#endif // CAR_H
