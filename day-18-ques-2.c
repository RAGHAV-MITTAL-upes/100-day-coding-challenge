/*Q36: Write a program to find the HCF (GCD) of two numbers.*/
int main()
{
    int n, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &hcf);
    printf("HCF of %d and %d is: ", n, hcf);
    while (hcf != 0)
    {
        int temp = hcf;
        hcf = n % hcf;
        n = temp;
    }
    printf("%d", n);
    return 0;
}
