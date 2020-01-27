cocci_test_suite() {
	union string_value {
		unsigned long long u;
		signed long long s;
	} cocci_id/* scripts/kconfig/expr.c 994 */;
	enum string_value_kind{k_string, k_signed, k_unsigned,} cocci_id/* scripts/kconfig/expr.c 988 */;
	bool cocci_id/* scripts/kconfig/expr.c 880 */;
	const struct expr *cocci_id/* scripts/kconfig/expr.c 67 */;
	struct expr *cocci_id/* scripts/kconfig/expr.c 53 */;
	struct symbol *cocci_id/* scripts/kconfig/expr.c 44 */;
	struct expr *cocci_id/* scripts/kconfig/expr.c 17 */(struct expr *e);
	int cocci_id/* scripts/kconfig/expr.c 16 */(struct expr *e1,
						    struct expr *e2);
	enum expr_type cocci_id/* scripts/kconfig/expr.c 151 */;
	struct expr **cocci_id/* scripts/kconfig/expr.c 151 */;
	void cocci_id/* scripts/kconfig/expr.c 151 */;
	const char **cocci_id/* scripts/kconfig/expr.c 1283 */;
	struct gstr *cocci_id/* scripts/kconfig/expr.c 1271 */;
	unsigned cocci_id/* scripts/kconfig/expr.c 1250 */;
	FILE *cocci_id/* scripts/kconfig/expr.c 1236 */;
	char cocci_id/* scripts/kconfig/expr.c 1221 */[32];
	void *cocci_id/* scripts/kconfig/expr.c 1141 */;
	void (*cocci_id/* scripts/kconfig/expr.c 1140 */)(void *,
							  struct symbol *,
							  const char *);
	int cocci_id/* scripts/kconfig/expr.c 1037 */;
	union string_value cocci_id/* scripts/kconfig/expr.c 1036 */;
	enum string_value_kind cocci_id/* scripts/kconfig/expr.c 1035 */;
	const char *cocci_id/* scripts/kconfig/expr.c 1034 */;
	tristate cocci_id/* scripts/kconfig/expr.c 1031 */;
	char *cocci_id/* scripts/kconfig/expr.c 1003 */;
	union string_value *cocci_id/* scripts/kconfig/expr.c 1001 */;
	enum symbol_type cocci_id/* scripts/kconfig/expr.c 1000 */;
}
