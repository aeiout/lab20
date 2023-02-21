#include<iostream>

using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
	double a2=R1->x+R1->w;
	double b2=R2->x+R2->w;
	double c2=R1->y-R1->h;
	double d2=R2->y-R2->h;
	double Lx=min(a2,b2)-max(R1->x,R2->x);
	double Ly=min(R2->y,R1->y)-max(c2,d2);
	if(Lx<0 or Ly<0){
		return 0;
	}else{
		return Lx*Ly;
	}
}
