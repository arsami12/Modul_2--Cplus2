#include <iostream>
using namespace std;

int main(){
	double LuasRmh = 42;
	double LntP    = 193*1215;
	double Luas1Box = LntP*8/1000000;
		cout << "Luas Rumah		   : "<<LuasRmh<<" m2"<<endl;
		cout << "Luas 1 Box parket : "<<Luas1Box<<" m2"<<endl;
	double JmlBoxP,BiayaP,BiayaPG,TotlB;
		   JmlBoxP = LuasRmh/Luas1Box;
		cout << "Jumlah Box Parket		: "<<JmlBoxP<<endl;
			BiayaP = JmlBoxP*500;
	
}
