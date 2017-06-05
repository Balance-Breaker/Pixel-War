#ifndef __PLANE_H__
#define __PLANE_H__

#include "Graphic.h"

enum Dir{UP,DOWN,LEFT,RIGHT};

class Plane{
public:
	//Draw
	virtual void Display()=0;

	//Mobile
	virtual void Move()=0;

protected:
	int m_x;
	int m_y;
	COLORREF m_color;

	Dir m-dir;
	int m_step;
};


#endif
