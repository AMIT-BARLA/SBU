#include <stdio.h>
#include <string.h>

struct markerPen
{
    char companyName[20];
    char color[20];
    int price;
};

int main(void)
{
    struct markerPen obj[3];
    printf("Enter the details of the marker pen\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Company Name:");
        fgets(obj[i].companyName, sizeof(obj[i].companyName), stdin);

        // Remove the newline character from companyName
        int len = strlen(obj[i].companyName);
        if (len > 0 && obj[i].companyName[len - 1] == '\n')
        {
            obj[i].companyName[len - 1] = '\0';
        }

        printf("Color: ");
        fgets(obj[i].color, sizeof(obj[i].color), stdin);

        // Remove the newline character from color
        len = strlen(obj[i].color);
        if (len > 0 && obj[i].color[len - 1] == '\n')
        {
            obj[i].color[len - 1] = '\0';
        }

        printf("Price: ");
        scanf("%d", &obj[i].price);
        getchar(); // Consume the newline character left by scanf
    }

    printf("Printing the entered details of the Marker\n");
    printf("%-20s %-20s %-10s\n", "Company Name", "Color", "Price");
    for (int i = 0; i < 3; i++)
    {
        printf("%-20s %-20s %-10d\n", obj[i].companyName, obj[i].color, obj[i].price);
    }

    return 0;
}
