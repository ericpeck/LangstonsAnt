#include <iostream>
#include "LangtonsAnt.h"
using namespace std;



int main(){
	bool input;

	cout << "Press 1 to play Langton's Ant \nPress 0 to quit" <<endl;
	cin >> input;
	cout <<"\n\n";

	while(input == true){

		LangtonsAnt game;
		cout<< "\n\nWould you like to play again?"<<endl;
		cout << "Press 1 to play Langton's Ant \nPress 0 to quit" <<endl;
		cin >> input;
		cout << "User value is : " << boolalpha << input << endl  ;
	}
	cout << "\n\nYou have quit the game"<<endl;
	cout << "User value is : " << boolalpha << input << endl  ;




	return 0;
}