// Largest prime factor of 600851475143 -> 6857

//	long n=600851475143;d=2;main(){for(;1^(n/=n%d?d++,1:d););printf("%i",d);}
//	long n=600851475143;d=2;main(){for(;n^1;n/=n%d?d++,1:d);printf("%i",d);}
	long n=600851475143;d=2;main(){for(;n^1;n%d?d++:(n/=d));printf("%i",d);}

/*
	n != 1  ==>  n ^ 1
*/