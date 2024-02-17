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
		std::cout << '\n' << x << '\n' << y << '\n' << z;

		std::cout << '\n' << "model vector:" << ' ' << x * y;
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};
int main()
{
	Vector v(10, 10, 10);
	v.show();
}
