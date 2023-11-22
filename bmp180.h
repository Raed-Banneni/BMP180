

#ifndef INC_BMP180_H_
#define INC_BMP180_H_

#include "main.h"

void BMP180_Start (void);
uint16_t Get_UTemp (void);
uint32_t Get_UPress (int oss);
float BMP180_GetTemp (void);
float BMP180_GetPress (int oss);
float BMP180_GetAlt (int oss);

#endif /* INC_BMP180_H_ */
