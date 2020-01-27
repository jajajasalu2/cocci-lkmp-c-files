cocci_test_suite() {
	struct gcov_info {
		unsigned int version;
		struct gcov_info *next;
		unsigned int stamp;
		const char *filename;
		void (*merge[GCOV_COUNTERS])(gcov_type *, unsigned int);
		unsigned int n_functions;
		struct gcov_fn_info **functions;
	} cocci_id/* kernel/gcov/gcc_4_7.c 87 */;
	struct gcov_fn_info {
		const struct gcov_info *key;
		unsigned int ident;
		unsigned int lineno_checksum;
		unsigned int cfg_checksum;
		struct gcov_ctr_info ctrs[0];
	} cocci_id/* kernel/gcov/gcc_4_7.c 66 */;
	struct seq_file *cocci_id/* kernel/gcov/gcc_4_7.c 568 */;
	struct gcov_iterator *cocci_id/* kernel/gcov/gcc_4_7.c 520 */;
	struct gcov_iterator cocci_id/* kernel/gcov/gcc_4_7.c 495 */;
	unsigned int cocci_id/* kernel/gcov/gcc_4_7.c 442 */;
	struct gcov_ctr_info *cocci_id/* kernel/gcov/gcc_4_7.c 441 */;
	struct gcov_fn_info *cocci_id/* kernel/gcov/gcc_4_7.c 440 */;
	struct gcov_ctr_info {
		unsigned int num;
		gcov_type *values;
	} cocci_id/* kernel/gcov/gcc_4_7.c 44 */;
	struct gcov_info *cocci_id/* kernel/gcov/gcc_4_7.c 438 */;
	char *cocci_id/* kernel/gcov/gcc_4_7.c 438 */;
	size_t cocci_id/* kernel/gcov/gcc_4_7.c 438 */;
	u64 cocci_id/* kernel/gcov/gcc_4_7.c 417 */;
	u32 *cocci_id/* kernel/gcov/gcc_4_7.c 395 */;
	u32 cocci_id/* kernel/gcov/gcc_4_7.c 393 */;
	void *cocci_id/* kernel/gcov/gcc_4_7.c 393 */;
	struct gcov_iterator {
		struct gcov_info *info;
		void *buffer;
		size_t size;
		loff_t pos;
	} cocci_id/* kernel/gcov/gcc_4_7.c 375 */;
	gcov_type cocci_id/* kernel/gcov/gcc_4_7.c 311 */;
	struct gcov_ctr_info cocci_id/* kernel/gcov/gcc_4_7.c 297 */;
	struct gcov_fn_info cocci_id/* kernel/gcov/gcc_4_7.c 296 */;
	void cocci_id/* kernel/gcov/gcc_4_7.c 235 */;
	int cocci_id/* kernel/gcov/gcc_4_7.c 174 */;
	const struct gcov_link cocci_id/* kernel/gcov/gcc_4_7.c 166 */[];
	unsigned long cocci_id/* kernel/gcov/gcc_4_7.c 162 */;
	bool cocci_id/* kernel/gcov/gcc_4_7.c 160 */;
	struct module *cocci_id/* kernel/gcov/gcc_4_7.c 160 */;
	const char *cocci_id/* kernel/gcov/gcc_4_7.c 101 */;
}
