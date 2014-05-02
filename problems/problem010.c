// Find the sum of all primes below 2 million -> 142913828922

	long s=5;n;main(i){for(;n<2E6;)for(i=sqrt(++n);n%i--;)s+=n*!(i-1);printf("%lu",s);}

/*
	long s=5;n;
	main(i){
		for(;n<2E6;)
			for(i=sqrt(++n);n%i--;)
				s+=n*!(i-1);
		printf("%lu",s);
	}
*/

/*
	Use a long to avoid overflow.
	Inner loop: break when n divides i or when i becomes 0. Add to sum when i == 1.
*/