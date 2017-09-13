#ifndef FOODCLASS_H
#define FOODCLASS_H
#include <string>
class Foods
{
	private:
		int pos=0;
		string type="";

	public:
		Foods(int i, string f);
		int getPos ();
		void setPos(int);
		string getType();
		void setType(string);
};
