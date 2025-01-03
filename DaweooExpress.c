#include <stdio.h>
#include <string.h>
#include <stdio.h>
typedef struct
{
    int kms;
    float schedule[3][24];
    char arrival_city[20];
    char dep_city[20];
    int Available_seats;
}Bus;
void schedule()
{

    char *cities[] = {
        "Abbottabad", "Islamabad", "Lahore", "Multan", "Attock City",
        "Peshawar", "Mardan", "Karachi", "Bahawalnagar", "Bahawalpur","Bannu", "Mardan" "Hyderabad","Bhakkar","Chakwal", "Quetta", "Chilas", "Faisalabad", ""};
    int i = 0;
    for (; i < 20;)
    {

        printf("%s\n", cities[i]);
        i++;
    }
}

void seat_reservation()
{
}
void corrier_service()
{
}
int options()
{
    int options;
    printf("1.Schedule\n2.Seat Reservation\n3.Corrier service\n");
    scanf("%d", &options);
    switch (options)
    {
        int Dep_city, arrival_city;
    case 1:
        printf("Enter your Departure city\n");
        schedule();
        scanf(" %d", &Dep_city);
        printf("Enter your Arrival city\n");
        schedule();
        scanf("%d", &arrival_city);
        return 1;
        break;
    case 2:
        seat_reservation();
        return 2;
        break;
    case 3:
        corrier_service();
        return 3;
        break;
    }
}

int main()
{
    printf("------Welcome to Daewoo Express Pakistan-------\n");
    printf("Select your prefrence\n");
    // options();
    Bus Arrival,dep;
    gets(Arrival.arrival_city);
    gets(dep.dep_city);
    scanf("%d",&Arrival.kms);
    float fare=Arrival.kms*5.5;
    printf("Your fare from %s to %s having %d kms is %.2f\n",dep.dep_city,Arrival.arrival_city,fare);
}