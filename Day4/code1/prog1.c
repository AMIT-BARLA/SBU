#include<stdio.h>
#include<string.h>

struct markerPen{
    int price;
    char color[20];
    char companyName[20];
};

int main(void)
{
    struct markerPen obj;
    
    strcpy(obj.companyName,"Camlin");
    strcpy(obj.color,"Black");
    obj.price = 50;

    printf("The details of the marker are:\n");
    printf("Company Name: %s \n",obj.companyName);
    printf("Color of the Marker: %s \n",obj.color);
    printf("Price of the Marker: %d \n",obj.price);

    return 0;
}