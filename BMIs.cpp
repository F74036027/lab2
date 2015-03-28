#include <iostream>
#include <string>
#include <cstdlib>
#include "BMIs.h"
using namespace std;

// class BMI definition
BMIs::BMIs() {
	   height = 0;
		mass = 0;
	   BMI = 0;
}

void BMIs::set_height(double cm) {
	   height = cm / 100;
}

void BMIs::set_mass(double kg) {
	   mass = kg;
}

void BMIs::set_BMI() {
	   BMI = mass/(height*height);
}

double BMIs::get_height() {
	   return height;
}

double BMIs::get_mass() {
	   return mass;
}

double BMIs::get_BMI() {
	   return BMI;
}

string BMIs::category() {
	if (BMI <= 15) {
		return " Very severely underweight";
	}
	else if (BMI <= 16) {
		return " Severely underweight";
	}
	else if (BMI <= 18.5) {
		return " Underweight";
	}
	else if (BMI <= 25) {
		return " Normal";
	}
	else if (BMI <= 30) {
		return " Overweight";
	}
	else if (BMI <= 35) {
		return " Obese Class I(Moderately obese)";
	}
	else if (BMI <= 40) {
		return " Obese Class II(Severely obese)";
	}
	else {
		return " Obese Class III(Very severely obese)";
	}
} // end definition

