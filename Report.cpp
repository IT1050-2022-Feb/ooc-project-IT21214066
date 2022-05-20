//created by IT21214448

#include "Report.h"
#include <cstring>
#include <iostream>
using namespace std;

Report::Report() {
strcpy(reportID, "");
strcpy(Details, "");

}

char Report:: getgenerateReport() {
   return Details[75];
}

Report::~Report() { //Destructor

  };