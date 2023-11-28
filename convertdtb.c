#include <stdio.h>

int main() {
    int decimal_num, binary_num = 0, i = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }

    printf("Binary number: %d\n", binary_num);

    return 0;
}
void setUnion(char set1[][50], int size1, char set2[][50]], int size2)
{
int i,j;
printf("union of the sets :{");
for (i=0;i<size1;i++)
{
int isDuplicate =0;
for
(j=0;j<size1;i++)
{
if (strmp(set[i]
