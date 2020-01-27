cocci_test_suite() {
	const char *cocci_id/* kernel/gcov/gcc_3_4.c 88 */;
	struct gcov_info {
		unsigned int version;
		struct gcov_info *next;
		unsigned int stamp;
		const char *filename;
		unsigned int n_functions;
		const struct gcov_fn_info *functions;
		unsigned int ctr_mask;
		struct gcov_ctr_info counts[0];
	} cocci_id/* kernel/gcov/gcc_3_4.c 73 */;
	struct seq_file *cocci_id/* kernel/gcov/gcc_3_4.c 532 */;
	struct gcov_ctr_info {
		unsigned int num;
		gcov_type *values;
		void (*merge)(gcov_type *, unsigned int);
	} cocci_id/* kernel/gcov/gcc_3_4.c 53 */;
	u32 cocci_id/* kernel/gcov/gcc_3_4.c 518 */[2];
	u64 cocci_id/* kernel/gcov/gcc_3_4.c 516 */;
	u32 cocci_id/* kernel/gcov/gcc_3_4.c 501 */;
	struct gcov_iterator *cocci_id/* kernel/gcov/gcc_3_4.c 390 */;
	struct gcov_fn_info {
		unsigned int ident;
		unsigned int checksum;
		unsigned int n_ctrs[0];
	} cocci_id/* kernel/gcov/gcc_3_4.c 38 */;
	struct type_info *cocci_id/* kernel/gcov/gcc_3_4.c 363 */;
	struct gcov_iterator {
		struct gcov_info *info;
		int record;
		unsigned int function;
		unsigned int type;
		unsigned int count;
		int num_types;
		struct type_info type_info[0];
	} cocci_id/* kernel/gcov/gcc_3_4.c 346 */;
	struct type_info {
		int ctr_type;
		unsigned int offset;
	} cocci_id/* kernel/gcov/gcc_3_4.c 331 */;
	gcov_type cocci_id/* kernel/gcov/gcc_3_4.c 279 */;
	size_t cocci_id/* kernel/gcov/gcc_3_4.c 279 */;
	struct gcov_ctr_info *cocci_id/* kernel/gcov/gcc_3_4.c 278 */;
	char *cocci_id/* kernel/gcov/gcc_3_4.c 243 */;
	struct gcov_fn_info *cocci_id/* kernel/gcov/gcc_3_4.c 240 */;
	struct gcov_fn_info cocci_id/* kernel/gcov/gcc_3_4.c 232 */;
	void cocci_id/* kernel/gcov/gcc_3_4.c 214 */;
	struct gcov_info *cocci_id/* kernel/gcov/gcc_3_4.c 162 */;
	unsigned int cocci_id/* kernel/gcov/gcc_3_4.c 162 */;
	int cocci_id/* kernel/gcov/gcc_3_4.c 162 */;
	const struct gcov_link cocci_id/* kernel/gcov/gcc_3_4.c 153 */[];
	unsigned long cocci_id/* kernel/gcov/gcc_3_4.c 149 */;
	bool cocci_id/* kernel/gcov/gcc_3_4.c 147 */;
	struct module *cocci_id/* kernel/gcov/gcc_3_4.c 147 */;
}
