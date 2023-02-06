#include <stdio.h>
#include "p3_3.h"

int main(void)
{
    int mode;
    double distance;
    double fuel;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);

    while (mode >= 0)
    {
        set_mode(&mode);
        get_info(&mode, &distance, &fuel);
        show_info(&mode, &distance, &fuel);

        printf("Enter 0 for metric mode, 1 for US mode:");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }

    printf("Done.\n");
    return 0;
}
