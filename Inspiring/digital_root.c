/* By: Unnamed, zoqdupt, monadius, whatmename, DarkD1 (plus 4 more warriors) @ Codewars */

#include<stdio.h>

int digital_root(int n);

int main(){
	
	int n=123;
	
	printf("%d\n", digital_root(n));
	
	return 0;
}

int digital_root(int n) {
	
  return (n-1)%9 + 1;
}
