#include<string>
using namespace std;
class BMI {
public:
	BMI();
	BMI(int, int);
	void set_weight(int);
	void set_height(int);
	double get_bmi();
	string get_category();
private:
	int weight;
	int height;
	double bmi;
};
