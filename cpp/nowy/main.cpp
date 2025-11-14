#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream plik;
	plik.open("dane.txt",ios::app|ios::out);
	if(!plik.is_open()){
	cout<<"NIE UDALO SIE";
	return 1;
	}
	cout<<"W pliku znajduje sie";
	string line;
	while(getline(plik,line)){
		cout<<line<<endl;
	}
	char x;
	cout<<"czy chcesz cos dopisac? y/n";
	cin>>x;
	if(x =='y'){
	string imie;
	string nazwisko;
	cout<<"podaj imie"<<endl;
	cin>>imie;
	cout<<"podaj nazwisko"<<endl;
	cin>>nazwisko;
	plik<<imie + nazwisko;
	plik.close();
	}else{
	plik.close();
	}
	return 0;
}
