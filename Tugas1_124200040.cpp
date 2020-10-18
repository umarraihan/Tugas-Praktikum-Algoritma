#include<iostream>
using namespace std;
int main ()
{
	int ni, uts, uas ;
	char nm[50] ;

	cout<<" Nama : " ;
	cin.getline(nm, sizeof(nm)) ;
	cout<<" NIM : " ;
	cin>>ni ;
	cout<<" Nilai UTS : " ;
	cin>>uts ;
	cout<<" Nilai UAS : " ;
	cin>>uas ;
	cout<<"Hai, nama saya "<<nm<<" NIM "<<ni<<" nilai akhir saya "<<((uts+uas)/2)<<endl ;
	
	return 0 ;
}
