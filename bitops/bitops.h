enum {
	SET,
	CLEAR,
	SETCLEAR,
	TOGGLE
};

#define set(data, pos)		data |= (1 << pos)
#define clear(data, pos)	data &= ~(1 << pos)
#define set_clear(set_data, clear_data, val)	val = (val | (1 << set_data)) &~(1 << clear_data)
