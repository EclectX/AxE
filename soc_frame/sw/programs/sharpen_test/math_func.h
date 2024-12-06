
unsigned int clamp_add( unsigned int number, unsigned int add )
{
	#ifdef DBG_MATH_CLAMP
		print_str("clamp_add number: ");print_dec(number);NL;
		print_str("add: ");print_dec(add);NL;
	#endif

	unsigned int temp = number;

	number += add;
	
	if ( number < temp ) // overflow
	{
		#ifdef DBG_MATH_CLAMP
			print_str("detected overflow, set to");print_dec(MAX);NL;
		#endif

		number = MAX;
	}

	return number;
}

unsigned int clamp_sub( unsigned int number, unsigned int sub )
{
	#ifdef DBG_MATH_CLAMP
		print_str("clamp_sub number: ");print_dec(number);NL;
		print_str("sub: ");print_dec(sub);NL;
	#endif

	unsigned int temp = number;

	number -= sub;
	
	if ( number > temp ) // underflow
	{
		#ifdef DBG_MATH_CLAMP
			print_str("detected underflow, set to 0\n");
		#endif

		number = 0;
	}

	return number;
}
