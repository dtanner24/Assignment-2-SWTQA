#include <iostream>

using namespace std;


int main()
{
	float feet;
	float inches;
	float weight;
	cout << "Please enter your height below:" << endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;
	cout << endl;
	cout << "Please enter your weight in pounds: ";
	cin >> weight;

	float totalheight;
	float BMI;
	totalheight = (feet * 12) + inches;
	float BMIweight;
	float BMIheight;
	float BMIheight2;
	BMIweight = weight * 0.45;
	BMIheight = totalheight * 0.025;
	BMIheight2 = BMIheight * BMIheight;
	BMI = BMIweight / BMIheight2;
	
	cout << "BMI: " << BMI << endl;
	if (BMI <= 18.5)
	{
		cout << "Underweight" << endl;
	}
	if (BMI > 18.5 && BMI <= 24.9)
	{
		cout << "Normal Weight" << endl;
	}
	if (BMI > 24.9 && BMI <= 29.9)
	{
		cout << "Overweight" << endl;
	}
	if (BMI > 29.9)
	{
		cout << "Obese" << endl;
	}
		
	return 0;
}
