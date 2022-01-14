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

struct RaceCar {
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

void printCongratulation(struct Race race) {
    printf("Let's all congratulate %s in the %s race car for an amazing performance!\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section
int calculateTimeToCompleteLap(void) {
    int speed, acceleration, nerves;
    speed = 3;
    acceleration = 2;
    nerves = 1;

    return speed + acceleration + nerves;

}

//IMPT** the reason we are using a pointer to the struct as a parameter, is to update the actual values saved in the original struct.
// if we do not use a pointer, then the parameter of the below function will just be a **copy** of the struct and therefore it will
// not mutate the original struct data.
void updateRaceCar(struct RaceCar* raceCarPointer) {
    raceCarPointer->totalLapTime += calculateTimeToCompleteLap();

}

void updateFirstPlace(struct Race* racePointer, struct RaceCar* raceCar1Pointer, struct RaceCar* raceCar2Pointer) {

    if (raceCar1Pointer->totalLapTime <= raceCar2Pointer->totalLapTime) {
        racePointer->firstPlaceDriverName = raceCar1Pointer->driverName;
        racePointer->firstPlaceRaceCarColor = raceCar1Pointer->raceCarColor;
    } else {
        racePointer->firstPlaceDriverName = raceCar2Pointer->driverName;
        racePointer->firstPlaceRaceCarColor = raceCar2Pointer->raceCarColor;
    }
    

}

int main() {
	srand(time(0));

    printf("%s", printIntro());
    printf("%s", printCountDown());

    struct Race race1 = {4, 2, "Ant", "green"};
    printFirstPlaceAfterLap(race1);
    printCongratulation(race1);

};