#include<stdio.h>

/*
	Recursive Algorithm for Modular Exponentiation
		m = a^b mod c
	
	Uses the property
		(a · b) mod m = [(a mod m) · (b mod m)] mod m
		
	To split (a^b) mod m into two based on the parity of b
		1. If b is even
			(a^b) mod m = [(a^(b/2) mod m) · (a^(b/2) mod m)] mod m
		2. If b is odd
			(a^b) mod m = [(a mod m) · (a^(b-1) mod m)] mod m
*/

int modularExponentiation(int a, int b, int c) { // a ^ b mod c
	if(a == 0) {
		return 0;
	}
	if(b == 0) {
		return 1;
	}
	
	long t;
	if(b & 1) { //True if b is odd
		return ((a%c)*(modularExponentiation(a, b-1, c)))%c;
	} else {
		t = modularExponentiation(a, b>>1, c);
		return (int)(t*t)%c;
	}
}

int main() {
	int a, b, c;
	printf("Enter a, b, c: (a^b MOD c): ");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d^%d MOD %d equals %d",a, b, c, modularExponentiation(a, b, c));
	return 0;
}