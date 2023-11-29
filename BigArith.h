#ifndef C_BIGARITH 
#define C_BIGARITH

/* Function to create and initialize INTAL */
char* intal_create(const char* str);

/* Function to destroy an INTAL */
void intal_destroy(char* intal);

/* Function to clone an INTAL */
char* intal_clone(const char* intal);

/* Function to compare two INTALs */
int intal_compare(const char* intal1, const char* intal2);

/* Function to perform addition of two INTALs */
char* intal_add(const char* intal1, const char* intal2);

/* Function to perform subtraction of two INTALs */
char* intal_diff(const char* intal1, const char* intal2);

/* Function to perform multiplication of two INTALs */
char* intal_multiply(const char* intal1, const char* intal2);

/* Function to compute the factorial of an INTAL */
char* intal_factorial(unsigned int n);

/* Function to calculate the nth Fibonacci number */
char* intal_fibonacci(unsigned int n);

/* Function to compute the binomial coefficient C(n, k) */
char* intal_bincoeff(unsigned int n, unsigned int k);

/* Function to perform binary exponentiation a^b */
char* intal_pow(const char* intal1, unsigned int n);

/* Function to calculate the Greatest Common Divisor of two INTALs */
char* intal_gcd(const char* intal1, const char* intal2);

#endif /* C_BIGARITH */
