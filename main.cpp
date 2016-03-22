#include<fstream>
#include<iomanip>
#include"BMI.h"
using namespace std;

int main()
{
	BMI body;
	ifstream iF("file.in", ios::in);
	ofstream oF("file.out", ios::out);
	int height, weight;
	oF << fixed << setprecision(2);
	while(1) {
		iF >> height >> weight;
		if(!height && !weight) break;
		body.set_weight(weight);
		body.set_height(height);
		oF << body.get_bmi() << ' ' << body.get_category() << endl;
	}
}
