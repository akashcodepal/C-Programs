//Hotel data of 5 hotel and displaying only those whose rent is more than 3000
#include <stdio.h>

struct Hotel
{
  char hotel_name[30];
  char hotel_address[40];
  int hotel_rent;
} h[3];

struct Hotel inputHotel()
{
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("Enter Hotel %d Data: \n", i + 1);
    printf("Name: ");
    fflush(stdin);
    gets(h[i].hotel_name);
    printf("Address: ");
    fflush(stdin);
    gets(h[i].hotel_address);
    printf("Rent: ");
    scanf("%d", &h[i].hotel_rent);
  }
}

struct Hotel displayHotel()
{
  int i, j = 1, f = 0;
  for (i = 0; i < 5; i++)
  {
    if (h[i].hotel_rent > 3000)
    {
      f = 1;
      printf("Hotel %d Data:\n", j++);
      printf("Name: %s\nAddress: %s\n", h[i].hotel_name, h[i].hotel_address);
    }
  }
  if (f == 0)
    printf("No Hotel Found!");
}

int main()
{
  inputHotel();
  displayHotel();
  return 0;
}