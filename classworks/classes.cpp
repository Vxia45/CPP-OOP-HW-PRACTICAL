#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double l) {
        if (l <= 0) {
            cout << "The lenght cant be less than 0";
            length = 1;
        } else {
            length = l;
        }
    }

    void setWidth(double w) {
        if (w <= 0) {
            cout << "The width cant be less than 0";
            width = 1;
        } else {
            width = w;
        }
    }

    double getLength() const {
        return length;
        }
    double getWidth() const {
        return width;
        }

    double area() {
         return length * width;
         }
    double perimeter() {
        return 2 * (length + width);
        }
};

int main() {
    Rectangle r1;

    r1.setLength(10);
    r1.setWidth(5);

    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: " << r1.getWidth() << endl;

    cout << "Area: " << r1.area() << endl;
    cout << "Peremeter: " << r1.perimeter() << endl;

    r1.setLength(-5);

   cout << r1.getLength() << endl;

    return 0;
}

// class vs struct: class - promenlivite sa private po default struct - promenlivite sa public po default
// Capsulation: grupira dannite i funkciite koito upravlqvat tezi danni
// Setter: zadava stoinost na private promenlivata
