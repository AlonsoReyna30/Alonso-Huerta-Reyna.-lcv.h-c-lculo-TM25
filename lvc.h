#include<iostream>
#include<cmath>
#define PI 3.14159
#define E 2.718281828459045235
//Reyna Guadalupe Alonso Huerta 2TM25
using namespace std; 
int gradarad(float gra){
	
	float rad=0;
	rad=(gra*PI)/180;
	cout<<rad<<endl;
	return 0;
}
int radagrad(float rad){
	float grad=0;
	grad=(rad*180)/PI;
	cout<<grad;
	return 0;
}
int distp1p2(float x1=0,float y1=0,float z1=0, float x2=0, float y2=0, float z2=0){ float p1p2=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
cout<<p1p2;
return 0;
}

int recapol(float x=0, float y=0){
	float r=0;
	 float teta=0;
	r=sqrt((x*x)+(y*y));
	teta=atan(y/x);
	cout<<"("<<r<<","<<teta<<")";
	return 0;
}
int polarec(float r=0, float teta=0){
 	float x=0;
 	float y=0;
 	
 	x=r*cos(teta);
	y=r*sin(teta);
	
	cout<<x<<" "<<y;
	
	return 0;
 }

	int esfacil (float r=0, float teta=0, float phy=0){
	float x=0;
	float y=0;
	float z=0;
	x=r*sin(phy)*cos(teta);
	y=r*sin(phy)*sin(teta);
	z=r*cos(phy);
	cout<<x<<","<<y<<","<<z<<endl;
	return 0;
}
int VpuntoU(double U1, double U2, double U3, double V1, double V2, double V3){
	w=(U1*V1)+(U2*V2)+(U3*V3);
	cout<<w<<endl;
}
int UmasV(double U1, double U2, double U3, double V1, double V2, double V3){
	w1=U1+V1;
	w2=U2+V2;
	w3=U3+V3;
	cout<<w1<<","<<w2<<","<<w3<<endl;
}

float x=0,y=0,r=0;
float teta=0,a=0;
float X=0,Y=0,R=0;
float TETA=0;
using namespace std;
int main(int argc, char *argv[])
std::cout<<"si quieres convertir coordenadas rectangulares a polares presiona 1 y si quieres convertir polares a rectangulares presiona 2: ";
	std::cin>>a;
	if(a==1)
	{
	std::cout<< "coordenadas rectangulares a polares: "<<endl;
	std::cout << "introduce x: ";
	std::cin>>x;
	std::cout<<"introduce y: ";
	std::cin>>y;
	std::cout<<"r es igual a: ";
	r=sqrt( (x*x)+(y*y));
    std::cout<<r<<endl;
    cout<<"Teta es igual a: ";
    teta=atan((y/x));
    cout<<teta;
	} 
	else{
    cout<<"coordenadas polares a rectangulares "<<endl;
    cout << "introduce r: ";
    cin>>R;
    cout << "introduce teta: ";
    cin>>TETA;
    cout << "x es igual a: ";
    X=R*cos(TETA);
    cout<<X<<endl;
    cout << "y es igual a: ";
    Y=R*sin(TETA);
    cout<<Y;
	}
	return 0;
	
   #include <iostream>
	#define PI 3.1416//calculadorade radianes//;
	
	using namespace std; 
	
	int main () {
		float grad=180;
		float rad=1;
		
		
		rad=(grad*PI)/180;
		
		cout<<grad<<endl; 
	}

int recapol(float x=0, float y=0){
	float r=0;
	float teta=0;
	r=sqrt((x*x)+(y*y));
	teta=atan(y/x);
	cout<<"("<<r<<","<<teta<<")";
	return 0;
}
