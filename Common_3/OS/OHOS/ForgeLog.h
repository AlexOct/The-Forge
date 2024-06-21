#ifndef WRAPPER1_H
#define WRAPPER1_H

#define LogLevel Module1_LogLevel
#define eNONE Module1_eNONE
#define eRAW Module1_eRAW
#define eDEBUG Module1_eDEBUG
#define eINFO Module1_eINFO
#define eWARNING Module1_eWARNING
#define eERROR Module1_eERROR
#define eALL Module1_eALL

#include "../Interfaces/ILog.h"

#undef LogLevel
#undef eNONE
#undef eRAW
#undef eDEBUG
#undef eINFO
#undef eWARNING
#undef eERROR
#undef eALL

#endif // WRAPPER1_H
