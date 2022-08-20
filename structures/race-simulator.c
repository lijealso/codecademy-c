#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Structures section
struct Race
{
    int numberOfLaps;
    int currentLap;
    char *firstPlaceDriverName;
    char *firstPlaceRaceCarColor;
};

struct RaceCar
{
    char *driverName;
    char *raceCarColor;
    int totalLapTime;
};

// Print functions section
void printIntro()
{
    printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");
};

void printCountDown(void)
{
    sleep(2);
    printf("Racers Ready! In...\n");
    sleep(1);
    for (int i = 5; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
    printf("Race!");
}

void printFirstPlaceAfterLap(struct Race race)
{
    printf("After lap number %d\n", race.currentLap);
    printf("First Place is: %s in the %s race car!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
    sleep(2);
};

void printCongratulation(struct Race race)
{
    printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

// Logic functions section
int calculateTimeToCompleteLap()
{
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;

    return speed + acceleration + nerves;
};

void updateRaceCar(struct RaceCar *raceCarPointer)
{
    raceCarPointer->totalLapTime += calculateTimeToCompleteLap();
};

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    if (raceCar1->totalLapTime <= raceCar2->totalLapTime)
    {
        race->firstPlaceDriverName = raceCar1->driverName;
        race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
    }
    else
    {
        race->firstPlaceDriverName = raceCar2->driverName;
        race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
    };
};

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    struct Race race = {
        numberOfLaps : 20,
        currentLap : 1,
        firstPlaceDriverName : "",
        firstPlaceRaceCarColor : ""
    };
    for (int i = 1; i <= race.numberOfLaps; i++)
    {
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
        race.currentLap++;
    };
    printCongratulation(race);
};

int main()
{
    srand(time(0));

    struct RaceCar RaceCar1 = {"Me", "red", 0};
    struct RaceCar RaceCar2 = {"You", "green", 0};

    printIntro();
    printCountDown();

    startRace(&RaceCar1, &RaceCar2);
};