#include <iostream>
#define SIZE 5
using namespace std;
 
int main()
{
  int matrix[SIZE][SIZE];

  //Take input into Matrix
  cout << "Enter elements into the matrix: \n";
  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
    }
  }
    
  //Output the diagonal elements
  cout << "Diagonal Elements: \n";
  for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++){
      if(i==j || i+j==SIZE-1)
        cout << matrix[i][j] << "\t";
      else
        cout << " " << "\t";
    }
    cout << "\n";
  }
 
  return 0;
}
