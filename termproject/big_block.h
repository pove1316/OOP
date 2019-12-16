#include <iostream>
using namespace std;

class big_block {
vector<block *> v;	
block *b
int min_x, min_y, max_x, max_y;

~big_block();
bool can_left();
bool can_right();
bool can_down();
void left();
void right();
bool down();
bool down_all();
bool move(int input);
public:
	virtual void rotate() = 0;
	    
}

