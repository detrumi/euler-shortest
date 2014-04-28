// Find smallest number divisible by 2-20 -> 232792560

	x=20;main(y){for(;y;x+=20)for(y=20;!(x%y)&&--y;);printf("%i",x-20);}