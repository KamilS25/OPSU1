
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "integrator.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Integrator(struct FB_Integrator* inst)
{
	inst->out += inst->in;
}
