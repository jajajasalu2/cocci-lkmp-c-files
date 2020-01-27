cocci_test_suite() {
	uintptr_t cocci_id/* arch/arm/probes/kprobes/test-core.c 997 */;
	struct test_arg *cocci_id/* arch/arm/probes/kprobes/test-core.c 995 */;
	const char *cocci_id/* arch/arm/probes/kprobes/test-core.c 994 */;
	u32 cocci_id/* arch/arm/probes/kprobes/test-core.c 992 */[TEST_MEMORY_SIZE / sizeof(u32)];
	struct pt_regs cocci_id/* arch/arm/probes/kprobes/test-core.c 989 */;
	void __naked cocci_id/* arch/arm/probes/kprobes/test-core.c 952 */;
	u32 cocci_id/* arch/arm/probes/kprobes/test-core.c 895 */;
	enum decode_type cocci_id/* arch/arm/probes/kprobes/test-core.c 851 */;
	const struct decode_header *cocci_id/* arch/arm/probes/kprobes/test-core.c 850 */;
	struct coverage_entry *cocci_id/* arch/arm/probes/kprobes/test-core.c 844 */;
	kprobe_opcode_t cocci_id/* arch/arm/probes/kprobes/test-core.c 842 */;
	enum decode_reg_type cocci_id/* arch/arm/probes/kprobes/test-core.c 780 */;
	struct coverage_entry cocci_id/* arch/arm/probes/kprobes/test-core.c 767 */;
	const union decode_item *cocci_id/* arch/arm/probes/kprobes/test-core.c 764 */;
	struct decode_table *cocci_id/* arch/arm/probes/kprobes/test-core.c 753 */;
	struct coverage_table *cocci_id/* arch/arm/probes/kprobes/test-core.c 736 */;
	void *cocci_id/* arch/arm/probes/kprobes/test-core.c 734 */;
	const char cocci_id/* arch/arm/probes/kprobes/test-core.c 710 */[16];
	struct coverage_table cocci_id/* arch/arm/probes/kprobes/test-core.c 703 */;
	struct coverage_table {
		struct coverage_entry *base;
		unsigned num_entries;
		unsigned nesting;
	} cocci_id/* arch/arm/probes/kprobes/test-core.c 697 */;
	struct coverage_entry {
		const struct decode_header *header;
		unsigned regs;
		unsigned nesting;
		char matched;
	} cocci_id/* arch/arm/probes/kprobes/test-core.c 690 */;
	struct table_test_args cocci_id/* arch/arm/probes/kprobes/test-core.c 660 */;
	struct table_test_args *cocci_id/* arch/arm/probes/kprobes/test-core.c 635 */;
	struct table_test_args {
		const union decode_item *root_table;
		u32 parent_mask;
		u32 parent_value;
	} cocci_id/* arch/arm/probes/kprobes/test-core.c 627 */;
	struct decode_header *cocci_id/* arch/arm/probes/kprobes/test-core.c 600 */;
	int (*cocci_id/* arch/arm/probes/kprobes/test-core.c 597 */)(const struct decode_header *,
								     void *);
	struct decode_reject cocci_id/* arch/arm/probes/kprobes/test-core.c 593 */;
	struct decode_or cocci_id/* arch/arm/probes/kprobes/test-core.c 592 */;
	struct decode_emulate cocci_id/* arch/arm/probes/kprobes/test-core.c 591 */;
	struct decode_simulate cocci_id/* arch/arm/probes/kprobes/test-core.c 590 */;
	struct decode_custom cocci_id/* arch/arm/probes/kprobes/test-core.c 589 */;
	struct decode_table cocci_id/* arch/arm/probes/kprobes/test-core.c 588 */;
	const int cocci_id/* arch/arm/probes/kprobes/test-core.c 587 */[NUM_DECODE_TYPES];
	struct benchmarks *cocci_id/* arch/arm/probes/kprobes/test-core.c 568 */;
	struct benchmarks cocci_id/* arch/arm/probes/kprobes/test-core.c 546 */[];
	struct benchmarks {
		void (*fn)(void);
		unsigned offset;
		const char *title;
	} cocci_id/* arch/arm/probes/kprobes/test-core.c 537 */;
	kprobe_opcode_t *cocci_id/* arch/arm/probes/kprobes/test-core.c 521 */;
	struct kprobe cocci_id/* arch/arm/probes/kprobes/test-core.c 520 */;
	unsigned cocci_id/* arch/arm/probes/kprobes/test-core.c 505 */;
	void (*cocci_id/* arch/arm/probes/kprobes/test-core.c 503 */)(void);
	int cocci_id/* arch/arm/probes/kprobes/test-core.c 503 */;
	struct pt_regs *cocci_id/* arch/arm/probes/kprobes/test-core.c 498 */;
	struct kprobe *cocci_id/* arch/arm/probes/kprobes/test-core.c 498 */;
	int __kprobes cocci_id/* arch/arm/probes/kprobes/test-core.c 497 */;
	struct kretprobe cocci_id/* arch/arm/probes/kprobes/test-core.c 378 */;
	struct kretprobe_instance *cocci_id/* arch/arm/probes/kprobes/test-core.c 370 */;
	void __kprobes cocci_id/* arch/arm/probes/kprobes/test-core.c 318 */;
	int __kprobes cocci_id/* arch/arm/probes/kprobes/test-core.c 310 */;
	long cocci_id/* arch/arm/probes/kprobes/test-core.c 291 */;
	long (*cocci_id/* arch/arm/probes/kprobes/test-core.c 289 */)(long,
								      long);
	bool cocci_id/* arch/arm/probes/kprobes/test-core.c 289 */;
	void __used __naked cocci_id/* arch/arm/probes/kprobes/test-core.c 240 */;
	void cocci_id/* arch/arm/probes/kprobes/test-core.c 240 */;
	long cocci_id/* arch/arm/probes/kprobes/test-core.c 238 */(long r0,
								   long r1);
	void __exit cocci_id/* arch/arm/probes/kprobes/test-core.c 1661 */;
	int __init cocci_id/* arch/arm/probes/kprobes/test-core.c 1572 */;
	uintptr_t __used cocci_id/* arch/arm/probes/kprobes/test-core.c 1470 */;
	u32 *cocci_id/* arch/arm/probes/kprobes/test-core.c 1434 */;
	size_t cocci_id/* arch/arm/probes/kprobes/test-core.c 1433 */;
	u16 cocci_id/* arch/arm/probes/kprobes/test-core.c 1355 */;
	u16 *cocci_id/* arch/arm/probes/kprobes/test-core.c 1352 */;
	unsigned long cocci_id/* arch/arm/probes/kprobes/test-core.c 1320 */;
	struct test_arg_end *cocci_id/* arch/arm/probes/kprobes/test-core.c 1319 */;
	const char **cocci_id/* arch/arm/probes/kprobes/test-core.c 1316 */;
	struct test_probe cocci_id/* arch/arm/probes/kprobes/test-core.c 1254 */;
	void __kprobes cocci_id/* arch/arm/probes/kprobes/test-core.c 1197 */;
	struct test_probe *cocci_id/* arch/arm/probes/kprobes/test-core.c 1175 */;
	struct test_probe {
		struct kprobe kprobe;
		bool registered;
		int hit;
	} cocci_id/* arch/arm/probes/kprobes/test-core.c 1160 */;
	struct test_arg_mem *cocci_id/* arch/arm/probes/kprobes/test-core.c 1151 */;
	struct test_arg_regptr *cocci_id/* arch/arm/probes/kprobes/test-core.c 1130 */;
}
