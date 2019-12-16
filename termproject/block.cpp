include "block.h"




block::block(int color) {
    this->color = color;


}
block::~block() {

}
int block::get_color() {
    return color;
}
int block::get_x() {
    return x;
}
int block::get_y() {
    return y;
}
void block::set_group(color_block *group) {


}
color_block *block::get_group() {
    return group;
}
void block::set_location(int x, int y) {
    this->x = x;
    this->y = y;
}
// bool block::can_left() {
//     if (array_2d->block_array[][])
// }
// bool block::can_right() {

// }
bool block::can_down() {
    if (array_2d->block_array[y+1][x] == NULL) {
        return true;
    }
    else return false;
}
void block::right() {
    x = x +1;
}
void block::left() {
    x = x - 1;
}
bool block::down() {
    if (can_down()) {
        y = y +1;
        return true;
    }
    else return false;
    
}
bool block::down_all() {
    while (can_down()) {
        y = y +1;
    }
    if (can_down()) {
        return true;
    }
    else return false;
}
bool block::can_merge(block *b) {
    if (color == b->color) {
        return true; 
    }
    else return false;
}
bool block::can_explosion(block *b) {
    if (b->get_group()->get_set_size() > 3)
    return true;
}
void block::merge(block *b) {
    int x = this->x;
    int y = this->y;
    if (can_merge(A::block_array[x+1][y]))
    {
        this->get_group()->
    }
    can_merge(A::block_array[x-1][y]);
    can_merge(A::block_array[x][y+1]);
    can_merge(A::block_array[x][y-1]);
}
void block::find_merge() {
    
}