// Find 10.001st prime -> 104743

	n=2,r=9999;main(i){for(;r;)for(i=sqrt(++n);n%i--;)r-=!(i-1);printf("%i",n);}

/*
	!(i == 1)  ==>  !(i - 1)
*/