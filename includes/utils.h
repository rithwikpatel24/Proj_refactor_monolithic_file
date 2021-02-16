#include <vector>
#include "../includes/constants.h"
#pragma once

void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);
process getNext(std::vector<process> &myProcesses);
int getSize(std::vector<process> &myProcesses);
int handleMissingData(std::vector<process> &myProcesses);
