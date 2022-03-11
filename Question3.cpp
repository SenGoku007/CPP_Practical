#include <bits/stdc++.h>
using namespace std;

class Triangle
{
private:
    float side1;
    float side2;
    float side3;
    float base;
    float height;

public:
    Triangle() {}

    Triangle(float a, float b, float c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    float area(float a, float b, float c)
    {
        float p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    float area()
    {
        return area(side1, side2, side3);
    }

    float area(float b, float h)
    {
        return (b * h) / 2;
    }

    auto operator=(const Triangle &triangle)
    {
        side1 = triangle.side1;
        side2 = triangle.side2;
        side3 = triangle.side3;
    }

    friend bool operator==(const Triangle &t1, const Triangle &t2)
    {
        return (t1.side1 == t2.side1 && t1.side2 == t2.side2 && t1.side3 == t2.side3);
    }
};

int main()
{
    Triangle triangle_ABC(18, 30, 24);
    cout << "Area of the tringle ABC : " << triangle_ABC.area(18, 30, 24) << endl;

    Triangle triangle_PQR(24, 18);
    cout << "Area of the tringle PQR : " << triangle_PQR.area(24, 18) << endl;
    ;

    Triangle triangle_MNO;
    triangle_MNO = triangle_ABC;
    cout << "Area of the tringle MNO : " << triangle_MNO.area() << endl;

    if (triangle_ABC == triangle_MNO)
    {
        cout << "Triangles are equal.\n";
    }
    else
    {
        cout << "Triangles are not equal.\n";
    }

    return 0;
}