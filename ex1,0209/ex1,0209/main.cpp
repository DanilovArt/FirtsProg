
		////������������ ������ ����� ������� � ������. 
		//������� ����� ���� �� ������� � �������(sazhen), �������(yards), � �������(wershke). 1 ������ = 0,04 �����


#include <iostream>
#include <cmath>
using namespace std;

double metrs;
double yards, wershke, sazhen;

int main(){
	setlocale(LC_ALL, "");
	cout << "������, ������� ����� ������� � ������: ";
	cin >> metrs;
	
//	metrs = metrs ;
	wershke = metrs/0.04445;
	yards = wershke / 16;
	sazhen = yards / 3;
	cout << sazhen << " ������," << yards << " �������," << wershke << " �������" << endl;

	return 0;
}