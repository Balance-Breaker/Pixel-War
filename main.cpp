#include <iostream>
#include <conio.h>
#include <time.h>

#include "Graphic.h"
#include "Plane.h"

using namespace std;
void main()
{
	Graphic::Create();
	Plane fplane;
	bool loop=true;
	bool skip=false;
	while(loop)
	{
		if(kbhit())
		{
			int key= getch();
			
				switch(key)
				{	
					//UP
					case 72: fplane.SetDir(Dir::UP);
					 		 break;
					 //Down
					case 80: fplane.SetDir(Dir::DOWN);
							  break;
					//Left
					case 75: fplane.SetDir(Dir::LEFT);
					//Right
					case 77: fplane.SetDir(Dir::Right);
					case 224://High direction keys 8
							break;
					//Esc
					case 24: loop=false;
							 break;
				    //Space
					case 32:
							 break;
					//enter
					case 13:
							if(skip)
								skip=false;
							else
								skip=true;
							break;
					default:
							 break;
				}
			}
			if(!skip)
			{
				cleardevice();
				fplane.Move();
				fplane.Display();
			}
			Sleep(200);
		}
		Graphic::Destroy();
	}
	
