
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Motor(struct FB_Motor* inst)
{
	inst->integrator.in = (inst->u*(1/inst->ke) - inst->w)*(inst->dt/inst->Tm);
	FB_integrator(&(inst->integrator));
	inst->w = inst->integrator.out;
	inst->integrator.in = inst->w*inst->dt;
	FB_integrator(&(inst->integrator));
	
	inst->phi = inst->integrator.out;
}