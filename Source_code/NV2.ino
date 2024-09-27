
#include <Leanbot.h>

int SPEED_MAX = 1000;             // run at a maximum speed of 1000
int SPEED_4   = 0.8 * SPEED_MAX;  // run at 80% speed
int SPEED_3   = 0.6 * SPEED_MAX;  // run at 60% speed
int SPEED_2   = 0.4 * SPEED_MAX;  // run at 40% speed
int SPEED_1   = 0.2 * SPEED_MAX;  // run at 20% speed
int SPEED_0   = 0.0 * SPEED_MAX;  // stop

void setup() {
  Leanbot.begin();                // initialize Leanbot
}

void mission4() {
  // put your main code here, to run repeatedly:
   byte lineValue = LbIRLine.read();      // Read the value of 4 line sensors
   if(lineValue == 0b1110 ){
          LbMotion.runLR(SPEED_1, SPEED_MAX);

   }
   if(lineValue == 0b0110 || line Value == 0b0000){
           LbMotion.runLR(SPEED_MAX, SPEED_MAX);

   }

}

