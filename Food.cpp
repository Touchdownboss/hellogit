#include 'FoodClass.h'
#include <string>

string Foods::getType()
{
	return type;
}

void Foods::setType(string f)
{
	type=f;
}

int Foods::getPos()
{
	return pos;
}

void Foods::setPos(int i)
{ 
	pos =i;
}

Foods::Foods(int i, string f)
{
	pos=i;
	string=f;
}
