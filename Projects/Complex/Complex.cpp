#include "complexNum.h"


void complexNum::calcRadius() {
	mRadius = sqrt(pow(this->mRealNum, 2) + pow(this->mImgnNum, 2));
}

void complexNum::calcPhase() {
	mPhase = atan(this->mImgnNum / this->mRealNum);
}

void complexNum::printRadius() {
	calcRadius();
	cout << "The Complex number Radius is " << mRadius << endl;
}

void complexNum::printPhase() {
	calcPhase();
	cout << "The Complex number Phase is " << mPhase << endl;
}

//Operators Overloading
complexNum complexNum::operator+(const complexNum& iOp){
	complexNum temp;
	temp.mRealNum = this->mRealNum + iOp.mRealNum;
	temp.mImgnNum = this->mImgnNum + iOp.mImgnNum;
	return temp;
}

complexNum complexNum::operator-(const complexNum& iOp) {
	complexNum temp;
	temp.mRealNum = this->mRealNum - iOp.mRealNum;
	temp.mImgnNum = this->mImgnNum - iOp.mImgnNum;
	return temp;
}

complexNum complexNum::operator*(const complexNum& iOp) {
	complexNum temp;
	temp.mRealNum = this->mRealNum * iOp.mRealNum - this->mImgnNum * iOp.mImgnNum; //I^2 == (-1)
	temp.mImgnNum = this->mImgnNum * iOp.mRealNum + this->mRealNum * iOp.mImgnNum;
	return temp;
}

complexNum complexNum::operator/(const complexNum& iOp) {
	complexNum temp;
	int div = (iOp.mRealNum*iOp.mRealNum) + (iOp.mImgnNum*iOp.mImgnNum); //claculate the denominator*conjugate
	temp.mRealNum = (this->mRealNum * iOp.mRealNum + this->mImgnNum * iOp.mImgnNum)/div;
	temp.mImgnNum = (this->mImgnNum * iOp.mRealNum - this->mRealNum * iOp.mImgnNum)/div;
	return temp;
}

void complexNum::operator=(const complexNum& iOp) {
	this->mRealNum = iOp.mRealNum;
	this->mImgnNum = iOp.mImgnNum;
}

void complexNum::operator+=(const complexNum& iOp) {
	this->mRealNum += iOp.mRealNum;
	this->mImgnNum += iOp.mImgnNum;
}

void complexNum::operator-=(const complexNum& iOp) {
	this->mRealNum -= iOp.mRealNum;
	this->mImgnNum -= iOp.mImgnNum;
}

void complexNum::operator*=(const complexNum& iOp) {
	double tmpReal, tmpImgn;
	tmpReal = this->mRealNum * iOp.mRealNum - this->mImgnNum * iOp.mImgnNum;
	tmpImgn = this->mImgnNum * iOp.mRealNum + this->mRealNum * iOp.mImgnNum;
	this->mRealNum = tmpReal;
	this->mImgnNum = tmpImgn;
}

void complexNum::operator/=(const complexNum& iOp) {
	int div = (iOp.mRealNum*iOp.mRealNum) + (iOp.mImgnNum*iOp.mImgnNum); //claculate the denominator*conjugates
	double tmpReal, tmpImgn;
	tmpReal = (this->mRealNum * iOp.mRealNum + this->mImgnNum * iOp.mImgnNum) / div;
	tmpImgn = (this->mImgnNum * iOp.mRealNum - this->mRealNum * iOp.mImgnNum) / div;
	this->mRealNum = tmpReal;
	this->mImgnNum = tmpImgn;
}

bool complexNum::operator==(const complexNum& iOp) {
	if (this->mRealNum == iOp.mRealNum & this->mImgnNum == iOp.mImgnNum)
		return true;
	return false;
}

ostream& operator<<(ostream& outP, complexNum& iComplexNum) {
	if(iComplexNum.mImgnNum == 1)
		outP << iComplexNum.mRealNum << "+ i" << endl;
	else
		outP << iComplexNum.mRealNum << "+" << iComplexNum.mImgnNum << "i" << endl;
	return outP;
}

istream& operator>>(istream& inP, complexNum& iComplexNum) {
	cout << "Enter Real Part: " << endl;
	inP >> iComplexNum.mRealNum;
	cout << "Enter Imaginary Part: " << endl;
	inP >> iComplexNum.mImgnNum;
	return inP;
}


void main()
{
	complexNum myCmplx, mySecCmplx, myTmpCmplx;
	int input = 0;
	cout << "This is my test for ComplexNum. Let's initalize our number" << endl;
	cin >> myCmplx;
	myCmplx.printRadius();
	myCmplx.printPhase();
	cout << "First num is: " << myCmplx << endl;
	cout << "Now let's check the arithmetics:" << endl;
	cin >> mySecCmplx;
	mySecCmplx.printRadius();
	mySecCmplx.printPhase();
	cout << "Second num is" << mySecCmplx << endl;
	cout << "1st num + 2nd num is " << myCmplx + mySecCmplx << endl;
	cout << "1st num - 2nd num is " << myCmplx - mySecCmplx << endl;
	cout << "1st num * 2nd num is " << myCmplx * mySecCmplx << endl;
	cout << "1st num / 2nd num is " << myCmplx / mySecCmplx << endl;
	//Check the other arithmetic operators
	cout << "Check it again:" << endl;
	myTmpCmplx = myCmplx;
	myTmpCmplx += mySecCmplx;
	cout << "1st num + 2nd num is " << myTmpCmplx << endl;
	myTmpCmplx = myCmplx;
	myTmpCmplx -= mySecCmplx;
	cout << "1st num - 2nd num is " << myTmpCmplx << endl;
	myTmpCmplx = myCmplx;
	myTmpCmplx *= mySecCmplx;
	cout << "1st num * 2nd num is " << myTmpCmplx << endl;
	myTmpCmplx = myCmplx;
	myTmpCmplx /= mySecCmplx;
	cout << "1st num / 2nd num is " << myTmpCmplx << endl;
	//Check booliean operator
	cout << "Check equality:" << endl;
	if (mySecCmplx == myCmplx)
		cout << "Numbers are equal" << endl;
	else
		cout << "Numbers are not equal" << endl;
	cout << "Press 1 to place 1st number into second or Press 2 to exit:" << endl;
	cin >> input;
	if (input == 1) {
		mySecCmplx = myCmplx;
		if (mySecCmplx == myCmplx)
			cout << "Numbers are equal" << endl;
		else
			cout << "Numbers are not equal" << endl;
	}
	system("pause");
}