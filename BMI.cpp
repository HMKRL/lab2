#include<string>
#include"BMI.h"
using namespace std;
BMI::BMI() {
	bmi = 0;
}
BMI::BMI(int arg1, int arg2) {
	bmi = 0;
	BMI::set_height(arg1);
	BMI::set_weight(arg2);
}
void BMI::set_weight(int input) {
	BMI::weight = input;
}
void BMI::set_height(int input) {
	BMI::height = input;
}
double BMI::get_bmi() {
	BMI::bmi = weight * 1.0 / ((height * 1.0) / 100);
	return BMI::bmi;
}
string BMI::get_category() {
	if(!BMI::bmi) BMI::get_bmi();
	if(BMI::bmi < 15) return "Very severely underweight";
	else if(BMI::bmi < 16) return "Severely underweight ";
	else if(BMI::bmi < 18.5) return "Underweight";
	else if(BMI::bmi < 25) return "Normal";
	else if(BMI::bmi < 30) return "Overweight";
	else if(BMI::bmi < 35) return "Obese Class I (Moderately obese)";
	else if(BMI::bmi < 40) return "Obese Class II (Severely obese)";
	else return "Obese Class III (Very severely obese)";
}
