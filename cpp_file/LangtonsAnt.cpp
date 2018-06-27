#include <iostream>
#include "LangtonsAnt.h"
#include "Ant.h"

using namespace std;

LangtonsAnt::LangtonsAnt(){
	initNumRows = 0;
	initNumCols = 0;
	initAntRow	= 0;
	initAntCol	= 0;
	initDir		= 'x';
	antSteps 	= 0;
	printBoard 	= 0;

	//promptUser();
	//displayCurrentValues();

	testValues();
	displayCurrentValues();
	Ant theAnt(initNumRows, initNumCols, initAntRow, initAntCol, initDir, antSteps, printBoard);

}

LangtonsAnt::~LangtonsAnt(){
}

void LangtonsAnt::promptUser(void){	
	int userInputNumRows;
	int userInputNumCols;
	int userInputAntRow;
	int userInputAntCol;
	char userInputDir;
	int userAntSteps;
	int userPrintBoard;



	cout << "How big do you want to make your rows? Enter a value between 5 and 15: ";
	cin >> userInputNumRows;
	while(userInputNumRows<5 or 15<userInputNumRows){
		cout << "The number you've entered is not valid. Try again." << endl;
		cout << "How big do you want to make your rows? Enter a value between 5 and 15: ";
	    cin >> userInputNumRows;
	}
	initNumRows = userInputNumRows;

	cout << "How big do you want to make your columns? Enter a value between 5 and 15: ";
	cin >> userInputNumCols;
	while(userInputNumCols<5 or 15<userInputNumCols){
		cout << "The number you've entered is not valid. Try again." << endl;
		cout << "How big do you want to make your columns? Enter a value between 5 and 15: ";
	    cin >> userInputNumCols;
	}
	initNumCols = userInputNumCols;

	cout << "Which row would you like your ant to start? Enter a value bewteen 0 and " << initNumRows << ": ";
	cin >> userInputAntRow;
	while(userInputAntRow<0 or initNumRows<userInputAntRow){
		cout << "The number you provided does not fall into the value of available rows. Try again." << endl;
		cout << "Which row would you like your ant to start? Enter a value bewteen 0 and " << initNumRows << ": ";
		cin >> userInputAntRow;
	}
	initAntRow = userInputAntRow;

	cout << "Which column would you like your ant to start? Enter a value bewteen 0 and " << initNumCols << ": ";
	cin >> userInputAntCol;
	while(userInputAntCol<0 or initNumCols<userInputAntCol){
		cout << "The number you provided does not fall into the value of available columns. Try again." << endl;
		cout << "Which column would you like your ant to start? Enter a value bewteen 0 and " << initNumCols << ": ";
		cin >> userInputAntRow;
	}
	initAntCol = userInputAntCol;

	cout << "Which direction should the ant face first? enter a value of \"N\" \"S\" \"E\" or \"W\" : ";
	cin >> userInputDir;
	while(userInputDir != 'N' and userInputDir != 'S' and userInputDir != 'E' and userInputDir != 'W'){
		cout << "The value you entered is invalid. Try again." << endl;
		cout << "Which direction should the ant face first? enter a value of \"N\" \"S\" \"E\" or \"W\" : ";
		cin >> userInputDir;
	}
	initDir = userInputDir;

	cout << "How many steps should the ant take? Enter a value between 5 and 20: ";
	cin >> userAntSteps;
	while(userAntSteps<5 or 20<userAntSteps){
		cout << "The value you entered is invalid. Try again." << endl;
		cout << "How many steps should the ant take? Enter a value between 5 and 20: ";
		cin >> userAntSteps;
	}
	antSteps = userAntSteps;

	cout << "After how many ant steps would you like to print the board? Choose a value between 0 and " << antSteps <<": ";
	cin >> userPrintBoard;
	while(userPrintBoard<0 or antSteps<userPrintBoard){
		cout << "The value you entered is invalid. Try again." << endl;
		cout << "After how many ant steps would you like to print the board? Choose a value between 0 and " << antSteps <<": ";
		cin >> userPrintBoard;
	}
	printBoard = userPrintBoard;

}

void LangtonsAnt::testValues(void){
	initNumRows = 15;
	initNumCols = 15;
	initAntRow	= 9;
	initAntCol	= 7;
	initDir		= 'S';
	antSteps 	= 1;
	printBoard 	= 1;
}

void LangtonsAnt::displayCurrentValues(void){
	cout << "\n\n";
	cout << "initNumRows: " << initNumRows 	<< endl;
	cout << "initNumCols: " << initNumCols 	<< endl;
	cout << "initAntRow: "	<< initAntRow 	<< endl;
	cout << "initAntCol: "	<< initAntCol 	<< endl;
	cout << "initDir: "		<< initDir 		<< endl;
	cout << "antSteps: "	<< antSteps 	<< endl;
	cout << "printBoard: "	<< printBoard	<< endl;
}