///Q2.Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
/*class named 'Rectangle' with a function named 'Area' which returns the area. Length*/
#include <iostream>
using namespace std;
class Rectangle {
	private:
		int l, b;
	public:
		void input(int length, int bredth) {
			l = length;
			b = bredth;
		}
		int area() {
			return l * b;
		}
};
int main() {
	Rectangle r1, r2;
	r1.input(4, 5);
	r2.input(5, 8);
	cout << "\n Area of r1: " << r1.area();
	cout << "\n Area of r2: " << r2.area();
};
