// Sum of even fibonacci terms below 4 million -> 4613732

//	t,a=1,b=2;main(s){t=a,a=b,b+=t;b<4E6?main(s+(b%2?0:b)):printf("%i",s+1);}
//	s=2,a=1,b=2;main(t){t=a,a=b,b+=t;b<4E6?s+=b%2?0:b,main():printf("%i",s);}
//	b=2,t,s=2;main(a){for(;t=a,a=b,b+=t,b<4E6;s+=b%2?0:b);printf("%i",s);}
	a,t,s;main(b){for(;t=a,a=b,b+=t,b<4E6;s+=b%2?0:b);printf("%i",s);}