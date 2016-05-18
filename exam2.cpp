#include <iostream>

int main() 
{
    char szDCLOrderId[17] = "1234567890abc";
    char szOrderId[11] = {0};

    //sprintf(szOrderId, "%10.8s", szDCLOrderId);
    //printf("%s\n", szOrderId);

    printf("%s\n", szDCLOrderId);
    printf("%10.8s\n", szDCLOrderId);
    printf("%-10.8s\n", szDCLOrderId);


    printf("%d\n", 103);
    printf("%4d\n", 103);
    printf("%-4d\n", 103);
    return 0;
}
