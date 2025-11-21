#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream plik;
	plik.open("dane.txt");
	if(!plik.is_open()){
	cout<<"NIE UDALO SIE";
	return 1;
	}
	cout<<"W pliku znajduje sie\n";
	int suma;
	int x;
	string line;
	while(getline(plik,line)){
		cout<<line<<endl;
		x = stoi(line);
		suma =suma+x;
	}
	suma = suma - 202;
	cout<<"Suma:\n"<<endl;
	cout<<suma<<endl;

	plik.close();

	return 0;

}
