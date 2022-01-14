#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
    int numberOfLaps;
    int currentLap;
    char* firstPlaceDriverName;
    char* firstPlaceRaceCarColor;
};

struct raceCar {
    char* driverName;
    char* raceCarColor;
    int totalLapTime;
};

// Print functions section
const char* printIntro(void) {
    return "\n\nWelcome to the race\n\n";
}

const char* printCountDown(void) {
    return "Races ready! In...\n5\n4\n3\n2\n1\nRace!\n\n";
}

void printFirstPlaceAfterLap(struct Race race) {
    printf("After lap number %d\n", race.currentLap); 
    printf("First place is: %s in the %s car!\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section

int main() {
	srand(time(0));

    printf("%s", printIntro());
    printf("%s", printCountDown());

    struct Race race1 = {4, 2, "Ant", "green"};
    printFirstPlaceAfterLap(race1);
  
};