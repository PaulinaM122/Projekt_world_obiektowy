#ifndef Punkt_hpp
#define Punkt_hpp

class Punkt{
public:
	Punkt(int x, int y);
	Punkt();

	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
protected:
	int x;
	int y;
};

#endif