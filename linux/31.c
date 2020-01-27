cocci_test_suite() {
	enum{IS_OUTSIDE, IS_FALSE_PREFIX, IS_TRUE_PREFIX, IS_PASS_MIDDLE, IS_FALSE_MIDDLE, IS_TRUE_MIDDLE, IS_PASS_ELSE, IS_FALSE_ELSE, IS_TRUE_ELSE, IS_FALSE_TRAILER, IS_COUNT,} cocci_id/* scripts/unifdef.c 96 */;
	const struct op *cocci_id/* scripts/unifdef.c 915 */;
	const struct ops *cocci_id/* scripts/unifdef.c 913 */;
	const char **cocci_id/* scripts/unifdef.c 913 */;
	int *cocci_id/* scripts/unifdef.c 913 */;
	Linetype cocci_id/* scripts/unifdef.c 912 */;
	unsigned char cocci_id/* scripts/unifdef.c 853 */;
	const struct ops {
		eval_fn *inner;
		struct op {
			const char *str;
			Linetype (*fn)(int *, Linetype, int, Linetype, int);
		} op[5];
	} cocci_id/* scripts/unifdef.c 802 */[];
	eval_fn cocci_id/* scripts/unifdef.c 793 */;
	Linetype cocci_id/* scripts/unifdef.c 791 */(const struct ops *,
						     int *, const char **);
	struct ops cocci_id/* scripts/unifdef.c 789 */;
	size_t cocci_id/* scripts/unifdef.c 722 */;
	enum{LT_TRUEI, LT_FALSEI, LT_IF, LT_TRUE, LT_FALSE, LT_ELIF, LT_ELTRUE, LT_ELFALSE, LT_ELSE, LT_ENDIF, LT_DODGY, LT_DODGY_LAST=LT_DODGY + LT_ENDIF, LT_PLAIN, LT_EOF, LT_ERROR, LT_COUNT,} cocci_id/* scripts/unifdef.c 66 */;
	const char cocci_id/* scripts/unifdef.c 59 */[];
	Ifstate cocci_id/* scripts/unifdef.c 544 */;
	state_fn *const cocci_id/* scripts/unifdef.c 458 */[IS_COUNT][LT_COUNT];
	void cocci_id/* scripts/unifdef.c 436 */;
	struct stat cocci_id/* scripts/unifdef.c 330 */;
	char *cocci_id/* scripts/unifdef.c 241 */[];
	int cocci_id/* scripts/unifdef.c 230 */(const char *, const char *,
						size_t);
	void cocci_id/* scripts/unifdef.c 229 */(Ifstate);
	const char *cocci_id/* scripts/unifdef.c 226 */(const char *);
	Linetype cocci_id/* scripts/unifdef.c 220 */(const char **);
	Linetype cocci_id/* scripts/unifdef.c 219 */(void);
	void cocci_id/* scripts/unifdef.c 218 */(bool);
	int cocci_id/* scripts/unifdef.c 217 */(const char *);
	void cocci_id/* scripts/unifdef.c 216 */(const char *);
	void cocci_id/* scripts/unifdef.c 214 */(const char *,...);
	void cocci_id/* scripts/unifdef.c 213 */(void);
	void cocci_id/* scripts/unifdef.c 212 */(bool, bool, char *);
	unsigned cocci_id/* scripts/unifdef.c 204 */;
	int cocci_id/* scripts/unifdef.c 201 */[MAXDEPTH];
	bool cocci_id/* scripts/unifdef.c 200 */[MAXDEPTH];
	Ifstate cocci_id/* scripts/unifdef.c 199 */[MAXDEPTH];
	Line_state cocci_id/* scripts/unifdef.c 198 */;
	Comment_state cocci_id/* scripts/unifdef.c 197 */;
	char cocci_id/* scripts/unifdef.c 190 */[MAXLINE + EDITSLOP];
	char cocci_id/* scripts/unifdef.c 188 */[FILENAME_MAX];
	FILE *cocci_id/* scripts/unifdef.c 182 */;
	bool cocci_id/* scripts/unifdef.c 179 */[MAXSYMS];
	const char *cocci_id/* scripts/unifdef.c 177 */[MAXSYMS];
	enum{LS_START, LS_HASH, LS_DIRTY,} cocci_id/* scripts/unifdef.c 133 */;
	const char *const cocci_id/* scripts/unifdef.c 128 */[];
	va_list cocci_id/* scripts/unifdef.c 1206 */;
	const char *cocci_id/* scripts/unifdef.c 1204 */;
	enum{NO_COMMENT=false, C_COMMENT, CXX_COMMENT, STARTING_COMMENT, FINISHING_COMMENT, CHAR_LITERAL, STRING_LITERAL,} cocci_id/* scripts/unifdef.c 118 */;
	int cocci_id/* scripts/unifdef.c 1156 */;
	bool cocci_id/* scripts/unifdef.c 1154 */;
	char *cocci_id/* scripts/unifdef.c 1154 */;
}
