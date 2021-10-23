#include <iostream>
using namespace std;
int main(){
	float a, x, e, y0, yn, y2 ;
	cin>>a>> x>> e;
	yn = 0.5*(a+x/(a-1.));
	y0= a;
	y2=yn*yn-y0*y0;
	if(y2<0){
		y2*=-1.;	
	}
	while(y2>=e){
		y0= yn;
		yn = 0.5*(yn+x/(yn-1.));
		y2=yn*yn-y0*y0;
		if(y2<0){
			y2*=-1.;		
		}
	}
	cout<<yn<<y2<<endl;
}
