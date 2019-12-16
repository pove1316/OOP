#include <iostream> 

using namespace std;
public:
class array_2d 
{

	static block *block_array[5][12];
	set<color_block *> explosion_s;
	set<color_block *>::iterator it;
	int score;
	bool can_make(int type);
	void delete_block(int x, int y);
	void insert(vector<block *> v);
	void insert(int x, int y, block *b);
	block *get_block(int x, int y);
	bool can_move(int x, int y );
	void print();
	void insert_explosion(color_block *group);
	void remove_explosion(color_block *group);
	bool can_explosion();
	void explosion( );
	int get_score();
public:
     array_2d();

};


