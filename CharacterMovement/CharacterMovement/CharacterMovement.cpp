// CharacterMovement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Vector
{
public:
	float x, y;

	Vector(float x, float y):x(x),y(y)
	{
	}


	float Length() const;

	friend ostream& operator<<(ostream& out, const Vector& test);
	Vector operator*(float s) const;
	Vector operator/(float s) const;
};

ostream& operator<<(ostream& out, const Vector& test)
{
	out << "(" << test.x << "," << test.y << ")";
	return out;
}

class Point
{
public:
	Point AddVector(Vector v) const;

	float x, y;
};

float Vector::Length() const
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

Vector Vector::operator*(float s) const
{
	return Vector(x*s,y*s);
}

Vector Vector::operator/(float s) const
{
	if(s==0) throw exception();
	return Vector(x/s,y/s);
}


Point Point::AddVector(Vector v) const
{
	Point p2;
	p2.x = this->x + v.x;
	p2.y = this->y + v.y;
	return p2;
}

Vector operator-(Point a, Point b)
{
	Vector v(a.x - b.x,a.y - b.x);
	return v;
}

int main()
{
	Vector SpeedPacman(3, 4);

	cout<<"Pacman's initial speed "<<SpeedPacman<<endl;
	cout<<"Pacman's doubled speed "<<SpeedPacman*2<<endl;
	cout<<"Pacman's halved speed "<<SpeedPacman/2<<endl;
	return 0;
}
