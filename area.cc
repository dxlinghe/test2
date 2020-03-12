#include <iostream>
using namespace std;
// add more text, even more and more and more 
class area_cl
{
	public:
	double height;
	double width;
};

class rectangle : public area_cl
{
	public:
	rectangle(double h, double w);
	double area();

};

class isosceles_triangle : public area_cl
{
	public:
	isosceles_triangle(double h, double w);
	double area();
};

rectangle::rectangle(double h, double w)
{
	height = h;
	width = w;
}

double rectangle::area()
{

	return height * width;
}
isosceles_triangle::isosceles_triangle(double h, double w)
{
	height = h;
	width = w;

}
double isosceles_triangle :: area()
{

	return 0.5*height*width;
} 

int main()

{

	rectangle a(5.0,10.0);
	isosceles_triangle b(5.0,10.0);

	cout << "Rectangle area is : " << a.area() << "\n";
	cout << "Isosceles triangle is : " << b.area() << "\n";
	return 0;
}
