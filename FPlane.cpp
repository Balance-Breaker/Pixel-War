#include "FPlane.h"

void FPlane::SetDir(Dir dir)
{
	m_dir =dir;
}

void FPlane::DrawPlaneBody(int style){
	fillrectangle(m_x-4,m_y-4,m_x+4,m_y+4);


	if (style == 1)
	{
		fillrectangle(m_x - 8, m_y - 6, m_x - 6, m_y + 6);
		fillrectangle(m_x + 6, m_y - 6, m_x + 8, m_y + 6);
	}
	else
	{
		fillrectangle(m_x - 6, m_y - 8, m_x + 6, m_y - 6);
		fillrectangle(m_x - 6, m_y + 6, m_x + 6, m_y + 8);
	}

}

void FPlane::Display()
{
	COLORREF color_save = getfillcolor();

	setfillcolor(m_color);
	switch(m_dir){
		case UP: 
			DrawPlaneBody(1);
			line(m_x,m_y,m_x,m_y-10);
			break;
		case DOWN:
			DrawPlaneBody(1);
			line(m_x,m_y.m_x,m_y+10);
			break;
		case LEFT:
			DrawPlaneBody(1);
			line(m_x,m_y,m_x-10,m_y);
			break;
		case Right:
			DrawPlaneBody(1);
			line(m_x,m_y,m_x+10,m_y);
			break;
		default:
			break;
	}
	setfillcolor(color_save);
}

void FPlane::Move()
{
	switch(m_dir)
	{
		case UP:
			m_y-=m_step;
			if (m_y<0)
				m_y=Graphic::GetScreenHieght()-1;
			
			break;

		case DOWN:
			m_y += m_step;
			if (m_y > Graphic::GetScreenHeight())
				m_y = 1;
				
			break;
		
		case LEFT:
			m_x -= m_step;
			if (m_x < 0)
				m_x = Graphic::GetScreenWidth() - 1;
	
			break;
	
		case RIGHT:
			m_x += m_step;
			if (m_x > Graphic::GetScreenWidth())
				m_x = 1;
		
			break;
		default:
			break;
			
	}
}
