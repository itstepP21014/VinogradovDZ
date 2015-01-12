int main()
{
    int n, b, count=1;
	printf ("\nEnter the count of numbers: ");
	scanf ("%d", &n);
	printf ("\nEnter the numbers\n");
	for (int i=1; i<=n; ++i)
    {
        char c[]="_";
        scanf ("%d", &b);
        while (b>1)
        {
            b/=10;
            count+=1;
        }
        for (int j=1; j<=count; ++j)
        {
            printf ("%s", c);
        }
    }
	return 0;
}