#include <iostream>
#include "big_block.h"

using namespace std;

class fold_block {
	block *b[4];
	fold_block(int c1, int c2, int c3);
	void rotate();    
}

