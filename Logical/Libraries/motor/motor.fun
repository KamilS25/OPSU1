
{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK FB_Motor (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		u : {REDUND_UNREPLICABLE} REAL;
		phi : {REDUND_UNREPLICABLE} REAL;
		dt : {REDUND_UNREPLICABLE} REAL;
	END_VAR
	VAR_OUTPUT
		w : {REDUND_UNREPLICABLE} REAL;
	END_VAR
	VAR
		integrator : {REDUND_UNREPLICABLE} FB_Integrator;
		Tm : {REDUND_UNREPLICABLE} REAL;
		ke : {REDUND_UNREPLICABLE} REAL;
	END_VAR
END_FUNCTION_BLOCK
