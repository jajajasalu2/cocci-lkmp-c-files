cocci_test_suite() {
	int noinline
INIT
 cocci_id/* lib/inflate.c 829 */;
	char *cocci_id/* lib/inflate.c 582 */;
	ush cocci_id/* lib/inflate.c 524 */;
	struct huft **cocci_id/* lib/inflate.c 359 */;
	struct {
		unsigned c[BMAX + 1];
		struct huft *u[BMAX];
		unsigned v[N_MAX];
		unsigned x[BMAX + 1];
	} *cocci_id/* lib/inflate.c 352 */;
	struct huft cocci_id/* lib/inflate.c 347 */;
	struct huft *cocci_id/* lib/inflate.c 346 */;
	unsigned *cocci_id/* lib/inflate.c 345 */;
	const int cocci_id/* lib/inflate.c 311 */;
	void *cocci_id/* lib/inflate.c 266 */;
	void cocci_id/* lib/inflate.c 266 */;
	unsigned cocci_id/* lib/inflate.c 225 */;
	ulg cocci_id/* lib/inflate.c 224 */;
	const ush cocci_id/* lib/inflate.c 187 */[];
	const unsigned cocci_id/* lib/inflate.c 174 */[];
	int
INIT
 cocci_id/* lib/inflate.c 158 */((void));
	int
INIT
 cocci_id/* lib/inflate.c 157 */((int*));
	int
INIT
 cocci_id/* lib/inflate.c 153 */((struct huft*,struct huft*,int,int));
	int
INIT
 cocci_id/* lib/inflate.c 152 */((struct huft*));
	int
INIT
 cocci_id/* lib/inflate.c 150 */((unsigned*,unsigned,unsigned,
				  const ush*,const ush*,struct huft**,int*));
	struct huft {
		uch e;
		uch b;
		union {
			ush n;
			struct huft *t;
		} v;
	} cocci_id/* lib/inflate.c 139 */;
	int cocci_id/* lib/inflate.c 1201 */;
	char cocci_id/* lib/inflate.c 1198 */;
	unsigned char cocci_id/* lib/inflate.c 1197 */[2];
	uch cocci_id/* lib/inflate.c 1196 */;
	int
INIT
 cocci_id/* lib/inflate.c 1194 */;
	const int cocci_id/* lib/inflate.c 1157 */[];
	unsigned long cocci_id/* lib/inflate.c 1151 */;
	void
INIT
 cocci_id/* lib/inflate.c 1146 */;
	ulg cocci_id/* lib/inflate.c 1137 */[256];
	char cocci_id/* lib/inflate.c 112 */[];
}
