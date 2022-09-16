#include <iostream>
#include <cmath>
#define PI 3.14149265


using namespace std;

int main(){

  int N;       // number of cases
  double g = 4.9; // 1/2 of acceleration due to earths gravity
  double v0;   // velocity at 0
  double theta;
  double x1;   // distance from cannon to wall
  double h1;   // lower edge of wall
  double h2;   // upper edge of wall
  double t;    // time
  double y;    // height at wall
  

  cin >> N;
  for (int i = 0; i < N; i++){

    cin >> v0 >> theta >> x1 >> h1 >> h2;

    theta = theta * PI / 180; // convert from degrees to radians
    double a = cos(theta);
    double b = sin(theta);
    
    t = (x1)/(v0 * a);
    y = (v0 * t * b) - (g * (pow (t, 2)));

    
    if ((y > h1) && (y < h2)){
      cout << "Safe\n";
      }

      
    else if ((y < h1) || (y > h2)){
      cout << "Not Safe\n";
      
    }
    
    
    


    

    
  }

  
}