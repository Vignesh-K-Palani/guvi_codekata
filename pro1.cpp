    
#include<stdio.h>
int main(){
  int num, flag = 0, i, j = 0, k = 0;
  scanf("%d", &num);
  int count[num];
  char arr[num][10], result[10], ch;
  scanf("%c", &ch);
  for(i=0; i<num; i++){
    while(ch != '\0'){
      arr[i][j] = ch;
      j++;
      scanf("%c", &ch);
    }
    count[i] = j;
  }
  for(int i=0; i<count[i]; i++){
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
  return 0;
}
