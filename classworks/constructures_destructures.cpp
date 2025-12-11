#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;
    int speed;

public:
    Car() {
        brand = "unknown";
        year = 2020;
        speed = 0;
        cout << "Car object with default values" << endl;
    }

    Car(string brand, int year, int speed) {
        this->brand = brand;
        this->year = year;
        this->speed = speed;
        cout << "Car object created with custom parameters." << endl;
    }

    ~Car() {
        cout << "Car " << this->brand << " from " << this->year << " destroyed." << endl;
    }
};

int main() {
    Car c1;
    Car c2("Audi", 2023, 180);

    {
        Car c3("Lada", 1985, 90);
    }

    return 0;
}


// 1. -конструктура задължително има същото име като класа
// - конструктура няма тип на връщане

// 2. Деструктура освобождава ресурси когато обекта спре да съществува.Жизнено важно е при заделяне на динамична памет в класа защото може да се получи memory leak.

// 3. this- указател към текущия обект
