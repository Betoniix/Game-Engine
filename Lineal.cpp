#include <iostream>
#include "Lineal.h"

// VECTOR METHODS DEFINITION

Lineal::Vector::Vector(const Vector& v) : x(v.x), y(v.y), z(v.z){}

Lineal::Vector::Vector(float aX = 0.0, float aY = 0.0, float aZ = 0.0) : x(aX), y(aY), z(aZ) {}

Lineal::Vector::~Vector() {}

Lineal::Vector& Lineal::Vector::operator=(const Vector& v) {
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}

void Lineal::Vector::operator+=(const Vector& v) {
	x += v.x;
	y += v.y;
	z += v.z;
}

void Lineal::Vector::operator-=(const Vector& v) {
	x -= v.x;
	y -= v.y;
	z -= v.z;
}

void Lineal::Vector::operator*=(const float s) {
	x * s;
	y * s;
	z * s;
}

void Lineal::Vector::operator/=(const float s) {
	x / s;
	y / s;
	z / s;
}

Lineal::Vector Lineal::Vector::operator+(const Vector& v) {
	return Lineal::Vector (x += v.x, y += v.y, z += v.z);
}

Lineal::Vector Lineal::Vector::operator-(const Vector& v) {
	return Lineal::Vector(x -= v.x, y -= v.y, z -= v.z);
}

Lineal::Vector Lineal::Vector::operator*(const float s) {
	return Lineal::Vector(x * s, y * s, z * s);
}

float Lineal::Vector::operator*(const Vector& v) {
	return x * v.x +  y * v.y + z * v.z;
}

Lineal::Vector Lineal::Vector::operator/(const float s) {
	return Lineal::Vector(x / s, y / s, z / s);
}

Lineal::Vector Lineal::Vector::Cross(const Vector& v) {
	return Lineal::Vector(y * v.z - z * v.y,
		z * v.x - x * v.z,
		x * v.y - y * v.x);
}

void Lineal::Vector::operator%=(const Vector& v) {
	*this = Cross(v);
}

Lineal::Vector Lineal::Vector::operator%(const Vector& v) {
	return Lineal::Vector(y * v.z - z * v.y,
		z * v.x - x * v.z,
		x * v.y - y * v.x);
}

float Lineal::Vector::Magnitud() {
	return std::sqrt(x * x + y * y + z * z);
}

void Lineal::Vector::Normalize() {

	float mag = Magnitud();

	if (mag < 0.0f) {
		return;
	}

	float oneOverMag = 1.0f / mag;

	x = x * oneOverMag;
	y = y * oneOverMag;
	z = z * oneOverMag;
}


// MATRIX METHODS DEFINITION