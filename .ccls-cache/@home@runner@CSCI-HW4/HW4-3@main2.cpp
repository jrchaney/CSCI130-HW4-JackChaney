#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int cases;// number of cases
  int N; //number 1-10 
  int factorial = 1;//answer
  
  

  cin >> cases;
  for (int i = 0; i < cases; i++){
    cin >> N;


    
    for(int a = 1; a <= N; ++a){
      factorial *= a;
      }

    
    cout << "factorial is " << factorial << endl;


    
    }
    cout << endl << endl;
  
    
  }
    
  
  
    
    
  
  
  