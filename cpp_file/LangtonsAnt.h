#ifndef LANGTONSANT_H_
#define LANGTONSANT_H_

class LangtonsAnt{

private:
	int initNumRows;
	int initNumCols;
	int initAntRow;
	int initAntCol;
	char initDir;
	int antSteps;
	int printBoard;

public:
	LangtonsAnt();
	~LangtonsAnt();
	void promptUser(void);
	void testValues(void);
	void displayCurrentValues(void);
};




#endif