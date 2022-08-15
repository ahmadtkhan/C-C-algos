/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

void mySort(int d[], unsigned int n){
    int i, j, temporary;
    for(i = 0; i < n; i++){
      for( j = 0; j < n - 1; j++){
        if(d[j] > d[j+1]){
          temporary = d[j];
          d[j] = d[j + 1];
          d[j + 1] = temporary;
        }
      }
    }
  }
