#include <iostream>
#include "Intervalle.h"
using namespace std;
using namespace INterv;
int main() {
	Intervalle s(1, 4);
	Intervalle s2(4, 7);
	Intervalle s3 = s | s2;
	//s3.consulter();
	//s.consulter();
	//cout << "le munimum est " << s.min() << endl;
	//cout << "le maximum est " << s.max() << endl;

	//cout << s[-1] << endl;

	//Intervalle s4(0, 5
	cout << "l'intervalle resultant de l'intersection";

	Intervalle s5 = s + s2;
	s5.consulter();
	return 0;
}