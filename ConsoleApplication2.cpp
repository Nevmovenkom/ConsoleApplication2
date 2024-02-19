#include <iostream>
class Vector
{
public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{

	}
	void show()
	{
		int c = (x * x) + (y * y) + (z * z);
		std::cout << '\n' << x << '\n' << y << '\n' << z;

		std::cout << '\n' << "model vector:" << ' ' << sqrt(c);
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};
int main()
{
	Vector v22(5, 5, 5);
	v112.show();
}