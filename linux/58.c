cocci_test_suite() {
	struct sym_match cocci_id/* scripts/kconfig/symbol.c 971 */;
	void *cocci_id/* scripts/kconfig/symbol.c 969 */;
	regmatch_t cocci_id/* scripts/kconfig/symbol.c 954 */[1];
	regex_t cocci_id/* scripts/kconfig/symbol.c 953 */;
	struct sym_match *cocci_id/* scripts/kconfig/symbol.c 951 */;
	struct symbol **cocci_id/* scripts/kconfig/symbol.c 948 */;
	const struct sym_match *cocci_id/* scripts/kconfig/symbol.c 924 */;
	const void *cocci_id/* scripts/kconfig/symbol.c 922 */;
	struct sym_match {
		struct symbol *sym;
		off_t so,eo;
	} cocci_id/* scripts/kconfig/symbol.c 913 */;
	char *cocci_id/* scripts/kconfig/symbol.c 874 */;
	size_t cocci_id/* scripts/kconfig/symbol.c 873 */;
	unsigned cocci_id/* scripts/kconfig/symbol.c 793 */;
	bool cocci_id/* scripts/kconfig/symbol.c 788 */;
	signed char cocci_id/* scripts/kconfig/symbol.c 555 */;
	enum symbol_type cocci_id/* scripts/kconfig/symbol.c 36 */;
	tristate cocci_id/* scripts/kconfig/symbol.c 34 */;
	struct symbol_value cocci_id/* scripts/kconfig/symbol.c 321 */;
	struct gstr cocci_id/* scripts/kconfig/symbol.c 300 */;
	int cocci_id/* scripts/kconfig/symbol.c 271 */;
	struct expr *cocci_id/* scripts/kconfig/symbol.c 270 */;
	struct symbol cocci_id/* scripts/kconfig/symbol.c 14 */;
	const char *cocci_id/* scripts/kconfig/symbol.c 1306 */;
	struct property **cocci_id/* scripts/kconfig/symbol.c 1279 */;
	enum prop_type cocci_id/* scripts/kconfig/symbol.c 1276 */;
	struct property *cocci_id/* scripts/kconfig/symbol.c 1276 */;
	char cocci_id/* scripts/kconfig/symbol.c 122 */[64];
	struct dep_stack cocci_id/* scripts/kconfig/symbol.c 1213 */;
	struct menu *cocci_id/* scripts/kconfig/symbol.c 1040 */;
	struct symbol *cocci_id/* scripts/kconfig/symbol.c 1014 */;
	struct dep_stack *cocci_id/* scripts/kconfig/symbol.c 1014 */;
	void cocci_id/* scripts/kconfig/symbol.c 1014 */;
	long long cocci_id/* scripts/kconfig/symbol.c 101 */;
	struct dep_stack {
		struct dep_stack *prev,*next;
		struct symbol *sym;
		struct property *prop;
		struct expr **expr;
	} *cocci_id/* scripts/kconfig/symbol.c 1007 */;
}
