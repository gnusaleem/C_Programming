enum {
	SET,
	CLEAR,
	SETCLEAR,
	TOGGLE
};

#define set(data, pos)		data |= (1 << pos)
#define clear(data, pos)	data &= ~(1 << pos)
