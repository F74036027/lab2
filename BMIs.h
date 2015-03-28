#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//#ifndef BMIHEADER
//#define BMIHEADER
class BMIs{
	public:
		BMIs();
		void set_height(double cm);
		void set_mass(double kg);
		void set_BMI();
		double get_height();
		double get_mass();
		double get_BMI();
		string category();

	private:
		double height;
		double mass;
		double BMI;
};
//#endif
