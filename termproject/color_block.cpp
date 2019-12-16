#include "color_block.h"

set<block *> s;
color_block::color_block(block *b) {
    b.set_group(this);
    s = new set<block *>;
    s.insert(b);
}
void color_block::insert(set<block *> s) {
    (this->s).insert(s.begin(), s.end());
}
set<block *> color_block::get_set() {
    return s;
}
int color_block::get_set_size() {
    return s.size();
}
void color_block::explosion {
    bool flag =true;
    for (block *b : s) {
        if (!b.can_explosion()) {
            flag = false;
            break;
        }
    }
    if (flag) {
        delete s;
    }
}