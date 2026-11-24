# include < stdio .h >
int main () {
int a = 10;
int * p = & a ;
printf (" Address of a : %p\n", ( void *)& a );
printf (" Value of p : %p\n", ( void *) p );
printf (" Address of p : %p\n", ( void *)& p );
printf (" Value of a : %d\n", a );
printf (" Value at p : %d\n", * p );
return 0;
}
