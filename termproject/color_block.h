#include <iostream>
#include "block.h"

class color_block {
set<block *> s;
color_block(block *b);
void insert(set<block * > s);
set<block *> get_set();
int  get_set_size();
void explosion();
}

