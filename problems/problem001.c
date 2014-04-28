// Sum of multiples of 3 or 5 below 1000 -> 233168

//	i=999,s;main(){s+=i%3&&i%5?0:i;--i?main():printf("%i",s);}
//	i=1E3;main(s){for(;i--;s+=i%3|i%5?i:0);printf("%i",s/2);}
	i=1E3,s;main(){for(;i--;s+=i%3&&i%5?0:i);printf("%i",s);}