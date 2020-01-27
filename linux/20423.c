cocci_test_suite() {
	u64 __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 851 */;
	u32 cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 831 */;
	int __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 829 */;
	void cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 829 */;
	int cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 811 */;
	mtrr_type cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 688 */;
	unsigned cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 683 */;
	int __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 64 */;
	char cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 639 */;
	void __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 636 */;
	struct range cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 601 */[RANGE_NUM]__initdata;
	unsigned long cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 591 */;
	u64 cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 590 */;
	void __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 589 */;
	unsigned long __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 587 */;
	int __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 58 */;
	int cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 561 */[MTRR_NUM_TYPES + 1];
	struct var_mtrr_range_state __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 56 */[RANGE_NUM];
	struct range __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 53 */[RANGE_NUM];
	unsigned long __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 525 */[RANGE_NUM];
	struct mtrr_cleanup_result __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 524 */[NUM_RESULT];
	struct mtrr_cleanup_result {
		unsigned long gran_sizek;
		unsigned long chunk_sizek;
		unsigned long lose_cover_sizek;
		unsigned int num_reg;
		int bad;
	} cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 508 */;
	struct var_mtrr_state cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 476 */;
	struct var_mtrr_state {
		unsigned long range_startk;
		unsigned long range_sizek;
		unsigned long chunk_sizek;
		unsigned long gran_sizek;
		unsigned int reg;
	} cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 42 */;
	struct var_mtrr_range_state {
		unsigned long base_pfn;
		unsigned long size_pfn;
		mtrr_type type;
	} cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 36 */;
	struct var_mtrr_state *cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 295 */;
	unsigned __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 294 */;
	unsigned char cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 250 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 249 */;
	unsigned int __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 248 */;
	char *cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 153 */;
	struct range *cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 139 */;
	unsigned long __init cocci_id/* arch/x86/kernel/cpu/mtrr/cleanup.c 139 */;
}
