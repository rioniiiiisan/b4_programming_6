
double bisection(double (*f_p)(double), double min, double max, int n){
	double middle = (min + max) / 2.0;
	printf("%.12lf %d\n",middle,n);
	if(n == 0 | f_p(middle) == 0) return middle;
	if(f_p(min) * f_p(middle) < 0){
		return bisection(f_p, min, middle, n-1);
	}else{
		return bisection(f_p, middle, max, n-1);
	}
}

double newton(double (*f_p)(double), double (*df_p)(double), double x, int n){
	double x_next = x - f_p(x) / df_p(x);
	printf("%.12lf %d\n",x_next, n);
	if(n == 0 | f_p(x_next) == 0)return x_next;
	else return newton(f_p, df_p, x_next, n-1);
}


	
	
