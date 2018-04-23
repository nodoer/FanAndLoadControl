#include "Init.h"
//Run Mode Programs
#include "ConfigMenu.h"
#include "StandBy.h"

Init device
ConfigMenu menu;
StandBy standby;

void setup() {
  device.start();
}


void loop() {

  switch(device.getMode()){
  
    //
    case 0:{
      standby.run();
      break;
    }

    case 1:{
      menu.run();
      break;
    }

  }


  
}
