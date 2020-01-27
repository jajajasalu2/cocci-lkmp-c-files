cocci_test_suite() {
	llvm_gcov_callback cocci_id/* kernel/gcov/clang.c 85 */;
	struct gcov_fn_info {
		struct list_head head;
		u32 ident;
		u32 checksum;
		u8 use_extra_checksum;
		u32 cfg_checksum;
		u32 num_counters;
		u64 *counters;
		const char *function_name;
	} cocci_id/* kernel/gcov/clang.c 68 */;
	struct gcov_info {
		struct list_head head;
		const char *filename;
		unsigned int version;
		u32 checksum;
		struct list_head functions;
	} cocci_id/* kernel/gcov/clang.c 58 */;
	struct seq_file *cocci_id/* kernel/gcov/clang.c 567 */;
	void (*cocci_id/* kernel/gcov/clang.c 56 */)(void);
	struct gcov_iterator *cocci_id/* kernel/gcov/clang.c 519 */;
	struct gcov_iterator cocci_id/* kernel/gcov/clang.c 494 */;
	u32 cocci_id/* kernel/gcov/clang.c 462 */;
	struct gcov_fn_info *cocci_id/* kernel/gcov/clang.c 453 */;
	struct gcov_info *cocci_id/* kernel/gcov/clang.c 451 */;
	char *cocci_id/* kernel/gcov/clang.c 451 */;
	size_t cocci_id/* kernel/gcov/clang.c 451 */;
	u64 cocci_id/* kernel/gcov/clang.c 430 */;
	u32 *cocci_id/* kernel/gcov/clang.c 408 */;
	void *cocci_id/* kernel/gcov/clang.c 406 */;
	struct gcov_iterator {
		struct gcov_info *info;
		void *buffer;
		size_t size;
		loff_t pos;
	} cocci_id/* kernel/gcov/clang.c 388 */;
	struct gcov_fn_info cocci_id/* kernel/gcov/clang.c 288 */;
	void cocci_id/* kernel/gcov/clang.c 284 */;
	int cocci_id/* kernel/gcov/clang.c 250 */;
	const struct gcov_link cocci_id/* kernel/gcov/clang.c 225 */[];
	unsigned long cocci_id/* kernel/gcov/clang.c 221 */;
	bool cocci_id/* kernel/gcov/clang.c 219 */;
	struct module *cocci_id/* kernel/gcov/clang.c 219 */;
	struct gcov_info cocci_id/* kernel/gcov/clang.c 186 */;
	unsigned int cocci_id/* kernel/gcov/clang.c 170 */;
	const char *cocci_id/* kernel/gcov/clang.c 161 */;
	u64 *cocci_id/* kernel/gcov/clang.c 137 */;
	u8 cocci_id/* kernel/gcov/clang.c 118 */;
	const char cocci_id/* kernel/gcov/clang.c 108 */[4];
}
