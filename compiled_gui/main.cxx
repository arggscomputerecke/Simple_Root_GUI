#ifndef _DEBUG
  #pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif // !_DEBUG

#include "gui.hh"
#include "TApplication.h"
#include "TGSignals.hh"
#include "TGComboBox.h"
#include <iostream>

int main() {
  TApplication app{ "test",0,0 };
  auto ui1 = new ui(&app);
  
  app.Run();
  return 0;
}