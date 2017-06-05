#ifndef __F_PLANE__
#define __F_PLANE__

#include "Plane.h"

class FPlane : public Plane
{
public:
	FPlane()
	{
		m_x=300;
		m_y=300;
		m_color =WHITE;
		m_dir= Dir::UP;
		m_step=2;
	}

	~FPlane(){
		//Setting the direction of travel
		void SetDir(Dir dir);
		void Display();
		void Move();
	}

protected:
	// Plain main draw
	void DrawPlaneBody(int style);
	};


#endif
