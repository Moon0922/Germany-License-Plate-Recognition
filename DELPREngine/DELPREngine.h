#pragma once

typedef struct tagRect
{
	int    left;
	int    top;
	int    right;
	int    bottom;
} Rect;


#define MULTIRESULT	10

typedef struct tagLICENSE
{
	char szLicense[20];
	float fTrust;
	Rect rtPlate;
} LICENSE, * LPLICENSE;

typedef struct tagCARPLATE
{
	int		nPlate;
	LICENSE	pPlate[MULTIRESULT];
	int		nProcTime;
}CARPLATEDATA;

#ifdef __cplusplus
extern "C" {
#endif

	void* DELPR_EngineHandleCreate();

	int	  DELPR_EngineProcess(void* hEngineHandle, unsigned char* pGray, int w, int h, CARPLATEDATA* rscarData);

	void  DELPR_EngineHandleDestroy(void* hEngineHandle);

#ifdef __cplusplus
}
#endif