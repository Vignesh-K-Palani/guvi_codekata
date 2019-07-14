#include<stdio.h>
void main(){
  int num, flag = 0, i, j, k = 0;
  scanf("%d", &num);
  char arr[num][100000], result[100000]='\0';
  for(int i=0; i<100000; i++){
    for(int j=0; j<num-1; j++){
      if(arr[j][i] == arr[j+1][i])
        flag = 1;
      else{
        flag = 0;
        break;
        }
    }
    if(flag == 1){
      result[k] = arr[j][i];
      k++;
      }
    else
      break;
  }
  printf("%s", result);
}
