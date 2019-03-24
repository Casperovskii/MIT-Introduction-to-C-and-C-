struct X { //total 5 bytes
	short s; //2 bytes
	int i; //2 bytes
	char c; //1 byte
};

struct Y { //total 6 bytes
	int i; //2 bytes
	char c; //1 byte + 1 byte padding
	short s; //2 bytes
};

struct Z {
	int   i; //2 bytes
	short s; //2 bytes
	char  c; //1 byte
};
