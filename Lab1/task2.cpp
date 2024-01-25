#include<iostream>
using namespace std;
 
class Point {
private:
    double x, y;

public:

    Point(double x1 = 0, double y1 = 0) : x(x1), y(y1) {}

    double getX() const {
        return x; // getter to return x
    }

    double getY() const {
        return y; //getter for y

    }

    void setX(double x1) {
        x = x1; //setter for x
    }

    void setY(double y1) {
        y = y1; // settre for y
    }

    void setCoordinates(double x1, double y1) { // setter for cordinates 
        x = x1;
        y = y1;
    }

    //Calculating distance
    double distance(const Point& secondPoint) const {
        double dx = x - secondPoint.getX();
        double dy = y - secondPoint.getY();
        return sqrt(dx * dx + dy * dy);
    } 

    };
int main() {

    Point point1(9, 12);
    Point point2(4, 16);

    cout << "Distance between point1 and point2: " << point1.distance(point2) << endl;

}