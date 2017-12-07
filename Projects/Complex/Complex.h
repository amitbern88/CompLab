#pragma once

#include <iostream>
#include <math.h> 
using namespace std;

class complexNum {
	double mRealNum;
	double mImgnNum;
	double mRadius;
	double mPhase;
public:
	//Constructors & Destructor
	complexNum(){mRealNum = 0; mImgnNum = 0;};
	complexNum(double iReal){mRealNum = iReal; mImgnNum = 0;};
	complexNum(double iReal, double iImgn){mRealNum = iReal; mImgnNum = iImgn;};
	~complexNum(){};
	//Outputs methods
	void printRadius();
	void printPhase();
	//Operators
	////Arithmetic
	complexNum operator+(const complexNum& iOp);
	complexNum operator-(const complexNum& iOp);
	complexNum operator*(const complexNum& iOp);
	complexNum operator/(const complexNum& iOp);
	////Assignment
	void operator=(const complexNum& iOp);
	void operator+=(const complexNum& iOp);
	void operator-=(const complexNum& iOp);
	void operator*=(const complexNum& iOp);
	void operator/=(const complexNum& iOp);
	////Logic
	bool operator==(const complexNum& iOp);
	////istream/ostream 
	friend ostream& operator<<(ostream& outP, complexNum& iComplexNum);
	friend istream& operator>>(istream& inP, complexNum& iComplexNum);

	void calcRadius();
	void calcPhase();
};
