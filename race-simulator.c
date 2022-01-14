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
    return "Welcome to the race\n\n";
}

// Logic functions section

int main() {
	srand(time(0));

    printf("%s", printIntro());
  
};