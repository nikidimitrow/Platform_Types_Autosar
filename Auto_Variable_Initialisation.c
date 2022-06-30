// The most generic way to initialise an automatic variable to zero (as it would be if in static scope) is to use:

type_t variable = {0,};
// type_t => sint8, uint8, sint16, uint16 and so on
// This can replace memset(&var,0,sizeof(var)) which assumes that initialised variables are always represented by 0 in static scope
