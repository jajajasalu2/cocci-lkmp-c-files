cocci_test_suite() {
	bool cocci_id/* scripts/kconfig/preprocess.c 539 */;
	char cocci_id/* scripts/kconfig/preprocess.c 539 */;
	size_t cocci_id/* scripts/kconfig/preprocess.c 500 */;
	const char *cocci_id/* scripts/kconfig/preprocess.c 498 */;
	char *cocci_id/* scripts/kconfig/preprocess.c 496 */[];
	int cocci_id/* scripts/kconfig/preprocess.c 496 */;
	bool (*cocci_id/* scripts/kconfig/preprocess.c 495 */)(char c);
	const char **cocci_id/* scripts/kconfig/preprocess.c 495 */;
	char *cocci_id/* scripts/kconfig/preprocess.c 495 */;
	struct env *cocci_id/* scripts/kconfig/preprocess.c 46 */;
	void cocci_id/* scripts/kconfig/preprocess.c 44 */;
	struct env {
		char *name;
		char *value;
		struct list_head node;
	} cocci_id/* scripts/kconfig/preprocess.c 38 */;
	unsigned long cocci_id/* scripts/kconfig/preprocess.c 353 */;
	char *cocci_id/* scripts/kconfig/preprocess.c 350 */[FUNCTION_MAX_ARGS];
	struct variable *cocci_id/* scripts/kconfig/preprocess.c 282 */;
	enum variable_flavor cocci_id/* scripts/kconfig/preprocess.c 280 */;
	struct variable {
		char *name;
		char *value;
		enum variable_flavor flavor;
		int exp_count;
		struct list_head node;
	} cocci_id/* scripts/kconfig/preprocess.c 231 */;
	va_list cocci_id/* scripts/kconfig/preprocess.c 22 */;
	const struct function *cocci_id/* scripts/kconfig/preprocess.c 204 */;
	void __attribute__((noreturn)) cocci_id/* scripts/kconfig/preprocess.c 20 */;
	const struct function cocci_id/* scripts/kconfig/preprocess.c 190 */[];
	char *cocci_id/* scripts/kconfig/preprocess.c 18 */(const char *in);
	char *cocci_id/* scripts/kconfig/preprocess.c 17 */(const char *in,
							    int argc,
							    char *argv[]);
	char cocci_id/* scripts/kconfig/preprocess.c 144 */[256];
	FILE *cocci_id/* scripts/kconfig/preprocess.c 143 */;
	char cocci_id/* scripts/kconfig/preprocess.c 134 */[16];
	struct function {
		const char *name;
		unsigned int min_args;
		unsigned int max_args;
		char *(*func)(int argc, char *argv[]);
	} cocci_id/* scripts/kconfig/preprocess.c 105 */;
}
