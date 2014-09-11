
		////Пользователь задает длину отрезка в метрах. 
		//Вывести длину того же отрезка в саженях(sazhen), аршинах(yards), и вершках(wershke). 1 вершок = 0,04 метра


#include <iostream>
#include <cmath>
using namespace std;

double metrs;
double yards, wershke, sazhen;

int main(){
	setlocale(LC_ALL, "");
	cout << "Привет, задайте длину отрезка в метрах: ";
	cin >> metrs;
	
//	metrs = metrs ;
	wershke = metrs/0.04445;
	yards = wershke / 16;
	sazhen = yards / 3;
	cout << sazhen << " сажени," << yards << " аршинов," << wershke << " вершков" << endl;

	return 0;
}