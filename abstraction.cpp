#include <iostream>
using namespace std;

class Shape {
  public:
    virtual void draw() = 0;  // pure virtual function
};

class Circle : public Shape {
  public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
  public:
    void draw() {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
  Shape *shape;
  Circle circle;
  Square square;

  shape = &circle;
  shape->draw();

  shape = &square;
  shape->draw();

  return 0;
}
