#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int cases;// number of cases
  int N; //number 1-10 


  
  cin >> cases;
  for (int a = 0; a < cases; a++){

    cin >> N;
  int fact = 1;
  for (int i = 1; i <= N; i++){
      fact *= i;
      fact %= 10;
  }
  cout << fact << endl;

    }
    
  
  

  }
    
  
  
    
    
  
  
  