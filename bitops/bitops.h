enum {
	SET,
	CLEAR,
	SETCLEAR,
	TOGGLE,
	TOGGLERANGE,
	CHECKBIT
};

#define set(data, pos)		data |= (1 << pos)
#define clear(data, pos)	data &= ~(1 << pos)
#define set_clear(set_data, clear_data, val)	val = (val | (1 << set_data)) &~(1 << clear_data)
#define toggle(data, pos)	data ^= (1<< pos)

int togglerange(int data, int pos, int range)
{
	for(int i = pos; i <= range; i++)
		data ^= (1 << pos);
	return data;
}

int checkbit(int data, int pos)
{
	if (data & (1 << pos))
		printf("BIT set\n");
	else
		printf("BIT unset\n");
}
