int main()
{
    int value;
	scanf("%d", &value);
	int n;
	scanf("%d", &n);
	int p;
	scanf("%d", &p);
		
	for(; n; n--){
	    value ^= 1 << p++;
	}
	
	printf("%o", value);
	
    return 0;
}