/** 
	\file: main.cpp
	*/
#include <iostream>
#include <conio.h>

//! fun sort() - bystraya sortirovka
void sort(int* a, int n) {

  long i = 0, j = n; 	
  int men, p;

  p = a[ n>>1 ];		

  do {
    while ( a[i] < p ) i++;
    while ( a[j] > p ) j--;

    if (i <= j) {
      men = a[i]; a[i] = a[j]; a[j] = men;
      i++; j--;
    }
  } while ( i<=j );

  if ( j > 0 ) sort(a, j);
  if ( n > i ) sort(a+i, n-i);
}




//! fun main() - tochka vhoda v programmu
	
void main()
{
	int n;
	int* p;
	std::cin >> n;
	p = new int[n];
	for (int i = 0 ; i<n ; i++ )
		std::cin >> p[i] ;

	sort(p, n-1);

	for (int i=0 ; i<n ; i++ )
		std::cout << p[i] << ' ' ;
	std::cout << std::endl;

	delete []p;
	system("pause");
}