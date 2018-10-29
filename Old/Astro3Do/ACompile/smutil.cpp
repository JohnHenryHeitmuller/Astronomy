// smutil.cpp

#include "smutil.h"

int atoi( char *str, int cnt)
{	int rtn = 0;

	if(cnt)
	{	char *buf = new char[cnt+1];
		memcpy( buf, str, cnt);
		buf[cnt] = NULL;
		rtn = atoi(buf);
		delete buf;
	}
	return(rtn);
}

double atof( char *str, int cnt)
{	double rtn = 0;

	if(cnt)
	{	char *buf = new char[cnt+1];
		memcpy( buf, str, cnt);
		buf[cnt] = NULL;
		rtn = atof(buf);
		delete buf;
	}
	return(rtn);
}