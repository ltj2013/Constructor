#include <iostream>
#include "constructor.h"
#include "TemplateTest.h"

#include <string>
using namespace std;
using namespace learning;

#define test(ii) #ii
#define itos(ii) test(ii)

#define strycat(x,y) x##y

Constructor<float> func(Constructor<float> conv1) {
	Constructor<float> conv;
	return conv;
}
int add(int x, int y) {
	return x + y;
}
#ifdef _DEBUG
typedef int(*addPtr)(int, int);
using addPtrUsing = int(*)(int, int);
addPtrUsing addp3 = add;
addPtr addp = add;
#endif
int main() {
	TemplateTest<float, float> f(1, 2);
	cout << f.getFisrtPara() << endl;

	//learning::Constructor<float> cons;
	//Constructor<float> cons2;
	//cons2 = cons;
	//cons = cons2;
	//float float_num = 123.2;
	//string s = itos(float_num);
	//cout << s << endl;
	//string s1 = "ss";
	//string s2 = "ss";
	//int(*add2)(int, int) = add;
	//cout << addp(1, 2) << endl;
	return 0;
}