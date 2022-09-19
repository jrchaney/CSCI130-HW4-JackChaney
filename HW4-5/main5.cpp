#include <iostream>
#include <iomanip>
#include <cmath>



using namespace std;

int main(){

  int N;       // number of cases
  cin >> N;
  
  double v0;   // velocity at 0
  double a;// angle of launch
  double h1;   // lower edge of wall
  double h2;   // upper edge of wall
  double x1;   // distance from cannon to wall
  const double g = 9.81; // 1/2 of acceleration due to earths gravity
  double rad = acos(-1) / 180; // convert to radians

  

  
  for (int i = 0; i < N; i++){
    
    cin >> v0 >> a >> x1 >> h1 >> h2;

    //theta = theta * PI / 180; // convert from degrees to radians
    
    double t = x1 / v0 / cos(a * rad);
    
    double y = v0 * t * sin(a * rad) - (0.5 * g * (t * t));

    
    if ((y >= h1 + 1) && (y <= h2 - 1))
      cout << "Safe" << endl;
      
    else
      cout << "Not Safe" << endl;
      
    
    }
    return 0;
    }

  
  
  