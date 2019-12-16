#include "array_2d.h"
using namespace std;
array_2d::array_2d()
{
    block_array = {NULL}; ///////////////
}
bool array_2d::can_make(int type)
{
    for ( int i = 0 ; i <5 ; i ++) {   
        if (block_array[0][i] != null) {
            return false;
        }
        else return true;
    }
}
void array_2d::delete_block(int x, int y)
{
    if (block_array[x][y] != null) {
        block_array[x][y] = null;
    }
}
void array_2d::insert(vector<block *> v)
{
}
void array_2d::insert(int x, int y, bolck *b)
{
}
block *array_2d::get_block(int x, int y)
{
    return block_array[x][y];
}
bool array_2d::can_move(int x, int y)
{
    if (block_array[x][y] == null) {
        return true;
    }
    else return false;
}
void array_2d::print()
{
    for (int i = 0; i < 12; i++)
    {
        for (int i = 0; i < 5; j++)
        {
            cout << block_array[i][j] << ' ' << endl;
        }
        cout << '\n'
             << endl;
    }
}
void array_2d::insert_explosion(color_block *group) {
    explosion_s.insert(group);
}
void array_2d::remove_explosion(color_block *group) {    
    it = explosion_s.find(group);
    explosion_s.remove(it);
}
bool array_2d::can_explosion() {
    for (color_block *cb: explosion_s) {
      if ((cb->get_set_size()) >= 4) {
          return true;
      }  
    }
}
void array_2d::explosion() {
    //explode set
    if (can_explosion()) {
        for (color_block * cb : explosion_s) {
            cb->explosion();
        }
    }

}
int array_2d::get_score() {
    return score;
}
