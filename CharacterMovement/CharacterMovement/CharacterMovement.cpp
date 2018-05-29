// CharacterMovement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Vector
{
public:
	float x, y;
};

class Point
{
public:
	Point AddVector(Vector v);

	float x,y;
};

Point Point::AddVector(Vector v)
{
	Point p2;
	p2.x = this->x+v.x;
	p2.y = this->y+v.y;
	return p2;
}

int main()
{
	Point p;
	p.x = 1;
	p.y = 2;

	Vector v;
	v.x = 2;
	v.y = 3;
	p = p.AddVector(v);

	cout<<"Result: ("<<p.x<<","<<p.y<<")"<<endl;
    return 0;
}

