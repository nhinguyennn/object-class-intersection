#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

// Creating class "point" with x and y coordinate values as variables
class point {
public:
int x;
int y;
};
// Creating class "rectangle" with variables such as: length, width, top left point
(coordinate)
class rectangle {
public:
point top_left;
point top_right;
point bottom_left;
point bottom_right;
int rectangleLength;
int rectangleWidth;
};
int main() {
// first rectangle uses 3 unit width and 2 unit length, which helps us find other
points
int x;
int y;
int rectangleLength;
int rectangleWidth;
int x2;
int y2;
int rectangleLength2;
int rectangleWidth2;
std::cout << "What is the value of x for your first rectangle's top left
point?: " << endl;
std::cin >> x;
std::cout << "What is the value of y (also top left point)?: " << endl;
std::cin >> y;
std::cout << "What is the length of this rectangle?: " << endl;
std::cin >> rectangleLength;
std::cout << "What is the width?: " << endl;
std::cin >> rectangleWidth;
std::cout << "Thank you. Now for the second rectangle: " << endl;
std::cout << "What is the value of x for this rectangle?: " << endl;
std::cin >> x2;
std::cout << "What is the value of y?: " << endl;
std::cin >> y2;
std::cout << "What is the length?: " << endl;
std::cin >> rectangleLength2;
std::cout << "What is the width?: " << endl;
std::cin >> rectangleWidth2;
rectangle rect1;
rect1.top_left.x = x;
rect1.top_left.y = y;
rect1.rectangleWidth = rectangleWidth;
rect1.rectangleLength = rectangleLength;
rectangle rect2;
rect2.top_left.x = x2;
rect2.top_left.y = y2;
rect2.rectangleWidth = rectangleWidth2;
rect2.rectangleLength = rectangleLength2;
// printing coordinates of both rectangles and if there is interception
std::cout << "Co-ordinates of rectangle 1: (" << x << "," << y << "),(" << x <<
"," << y - 2 << "),(" << x + 3
<< "," << y-2 << "),(" << x + 3 << "," << y << ")." << endl;
std::cout << "Co-ordinates of rectangle 2: (" << x2 << "," << y2 << "),(" << x2
<< "," << y2 - 2 << "),(" << x2 + 3
<< "," << y2 - 2 << "),(" << x2 + 3 << "," << y2 << ")." << endl;
// Co-ordinates of rectangle 1: (2,4), (2,2), (5,2), (5,4)
//Co-ordinates of rectangle 2: (4,3), (4,1), (7,1), (7,3)
int slope = (y2 - y) / (x2 - x);
int intercept1 = y- slope * x;
if (intercept1 > 0) {
std::cout << "They intersect." << std::endl;
}
if (intercept1 = 0) {
std::cout << "They do not intersect" << std::endl;
};
}