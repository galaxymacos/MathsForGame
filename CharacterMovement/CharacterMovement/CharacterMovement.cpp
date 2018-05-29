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

	float x, y;
};

Point Point::AddVector(Vector v)
{
	Point p2;
	p2.x = this->x + v.x;
	p2.y = this->y + v.y;
	return p2;
}

Vector operator-(Point a, Point b)
{
	Vector v;
	v.x = a.x - b.x;
	v.y = a.y - b.x;
	return v;
}

int main()
{
	// Where pac-man is
	Point p;
	p.x = 1;
	p.y = 2;

	// Where ghost is
	Point i;
	i.x = -10;
	i.y = -20;

	// The vector the ghost should follow in order to catch Pac-man 
	const Vector v = p - i; // Attention: it is Pac-man position - ghost position, and not reversed

	cout << "Result: (" << v.x << "," << v.y << ")" << endl;
	return 0;
}
