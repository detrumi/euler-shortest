// Find largest palindrome of two 3-digit numbers -> 906609

//	b,x=999;main(c){for(;c=--x%10,b=(x-c)/10%10,c=1E3*x+100*c+10*b+(x-10*b-c)/100%10;)for(b=999;b*b>c;)if(!(c%--b))return printf("%i",c);}
	b,x=999;main(c){b=(x-c)/10%10,c=1E3*x+100*c+10*b+(x-10*b-c)/100%10;for(b=999;b*b>c&&c%--b;);return c%b?main(--x%10):printf("%i",c);}