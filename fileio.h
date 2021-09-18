#ifndef FILEIO_H_
#define FILEIO_H_

#include <vector>
#include "constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);
int save(const std::string filename, std::vector<process> &myProcesses);


#endif /* FILEIO_H_ */