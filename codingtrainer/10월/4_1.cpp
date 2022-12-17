#include <stdio.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
  freopen("input.txt", "rt", stdin);
  int i, j, n, cnt=0;
  scnaf("%d", &n);
  vector<int> a(n+1);
 
  for(i = 1; i<= n; i++){
    scanf("%d", &a[i]);
  }
 
  printf("1 ");
 
  for(i=2; i<= n; i++){
    cnt = 0;
    for(j = i; j >= 1; j--){
      if(a[j] >= a[i]) cnt++;
    }
    print("%d", cnt+1);
  }
 
  return 0;
}