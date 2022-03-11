#include <cmath>
#include <bits/stdc++.h>
using namespace std;

class Triangle
{
private:
    float a, b, c, h;

public:
	
	Triangle() {}

    Triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Triangle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }


    float area(float a, float b, float c)
    {
        float p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c)); //heron's formula
    }

    // overloaded functions
    float area(float b, float h)
    {
        return (b * h) / 2;  
    }
    
    float area(float s)
    {
        return ((sqrt(3))*s*s)/4;  
    }
    


    // equality operator.
    friend bool operator==(const Triangle &t1, const Triangle &t2)
    {
        return (t1.a == t2.a && t1.b == t2.b && t1.c == t2.c);
    }

};

int main()
{
	Triangle obj;
	float a,b,c;
	char x;
	cout<<"Calculate area of a triangle \n a. Using base and height \n b. Using sides of triangle \n c. Equilateral Triangle \n\n";
	cin>>x;
    
    if(x=='a'){
    	cout<<"Enter the base and height of triangle \n";
    	cin>>a>>b;
    	cout<<obj.area(a,b);
	}else if(x=='b'){
		cout<<"Enter the sides of triangle \n";
    	cin>>a>>b>>c;
    	cout<<obj.area(a,b,c);
	}else if(x=='c'){
		cout<<"Enter the side of triangle \n";
    	cin>>a;
    	cout<<obj.area(a);
	}else{
		cout<<"Invalid option \n";
	}
	
	cout<<"\n\n";
	
	float m,n,o;
	cout<<"Check equality of two triangles. \n Enter the sides of first triangle: \n";
	cin>>m>>n>>o;
	
	int arr2[]={m,n,o};
	int z = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr2, arr2 + z);
    m=arr2[1];
    n=arr2[2];
    o=arr2[0];
    
	Triangle t1(m,n,o);
	
	cout<<"Enter the sides of second triangle: \n";
	cin>>m>>n>>o;
	
	int arr[]={m,n,o};
	int y = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + y);
    m=arr[1];
    n=arr[2];
    o=arr[0];
    
	Triangle t2(m,n,o);
	if (t1 == t2)
    {
        cout << "The triangles are equal.\n";
    }
    else
    {
        cout << "The triangles are not equal.\n";
    }

    return 0;
}
