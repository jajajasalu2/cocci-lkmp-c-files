cocci_test_suite() {
	struct {
		spinlock_t lock;
		struct unw_table *tables;
		unsigned long r0;
		const unsigned char save_order[8];
		unsigned short sw_off[sizeof(struct unw_frame_info) / 8];
		unsigned short lru_head;
		unsigned short lru_tail;
		unsigned short preg_index[UNW_NUM_REGS];
		short pt_regs_offsets[32];
		struct unw_table kernel_table;
		size_t gate_table_size;
		unsigned long *gate_table;
		unsigned short hash[UNW_HASH_SIZE];
		struct unw_script cache[UNW_CACHE_SIZE];

# ifdef UNW_DEBUG

		const char *preg_name[UNW_NUM_REGS];

# endif


# if UNW_STATS

		struct {
			struct {
				int lookups;
				int hinted_hits;
				int normal_hits;
				int collision_chain_traversals;
			} cache;
			struct {
				unsigned long build_time;
				unsigned long run_time;
				unsigned long parse_time;
				int builds;
				int news;
				int collisions;
				int runs;
			} script;
			struct {
				unsigned long init_time;
				unsigned long unwind_time;
				int inits;
				int unwinds;
			} api;
		} stat;

# endif

	} cocci_id/* arch/ia64/kernel/unwind.c 84 */;
	struct unw_reg_info *cocci_id/* arch/ia64/kernel/unwind.c 776 */[3];
	const unsigned char cocci_id/* arch/ia64/kernel/unwind.c 773 */[3];
	struct unw_reg_info **cocci_id/* arch/ia64/kernel/unwind.c 731 */;
	struct unw_reg_info *cocci_id/* arch/ia64/kernel/unwind.c 717 */;
	unsigned long *cocci_id/* arch/ia64/kernel/unwind.c 716 */;
	unsigned long cocci_id/* arch/ia64/kernel/unwind.c 716 */;
	void cocci_id/* arch/ia64/kernel/unwind.c 715 */;
	unsigned char cocci_id/* arch/ia64/kernel/unwind.c 681 */;
	enum unw_register_index __attribute_const__ cocci_id/* arch/ia64/kernel/unwind.c 680 */;
	struct unw_reg_state *cocci_id/* arch/ia64/kernel/unwind.c 643 */;
	unsigned int cocci_id/* arch/ia64/kernel/unwind.c 59 */;
	unsigned cocci_id/* arch/ia64/kernel/unwind.c 451 */;
	struct ia64_fpreg *cocci_id/* arch/ia64/kernel/unwind.c 446 */;
	struct unw_ireg *cocci_id/* arch/ia64/kernel/unwind.c 287 */;
	struct pt_regs *cocci_id/* arch/ia64/kernel/unwind.c 266 */;
	short cocci_id/* arch/ia64/kernel/unwind.c 254 */;
	void *cocci_id/* arch/ia64/kernel/unwind.c 243 */;
	void __user *cocci_id/* arch/ia64/kernel/unwind.c 2314 */;
	void cocci_id/* arch/ia64/kernel/unwind.c 2247 */(void);
	char cocci_id/* arch/ia64/kernel/unwind.c 2246 */[];
	void __init cocci_id/* arch/ia64/kernel/unwind.c 2243 */;
	struct unw_table_entry *cocci_id/* arch/ia64/kernel/unwind.c 2208 */;
	Elf64_Phdr *cocci_id/* arch/ia64/kernel/unwind.c 2193 */;
	char *cocci_id/* arch/ia64/kernel/unwind.c 2192 */;
	size_t cocci_id/* arch/ia64/kernel/unwind.c 2191 */;
	int __init cocci_id/* arch/ia64/kernel/unwind.c 2186 */;
	const void *cocci_id/* arch/ia64/kernel/unwind.c 2083 */;
	const char *cocci_id/* arch/ia64/kernel/unwind.c 2082 */;
	struct switch_stack *cocci_id/* arch/ia64/kernel/unwind.c 2002 */;
	struct task_struct *cocci_id/* arch/ia64/kernel/unwind.c 2001 */;
	const struct unw_frame_info *cocci_id/* arch/ia64/kernel/unwind.c 1875 */;
	struct switch_stack cocci_id/* arch/ia64/kernel/unwind.c 1823 */;
	struct unw_insn *cocci_id/* arch/ia64/kernel/unwind.c 1722 */;
	struct unw_frame_info cocci_id/* arch/ia64/kernel/unwind.c 1678 */;
	u64 *cocci_id/* arch/ia64/kernel/unwind.c 1600 */;
	int cocci_id/* arch/ia64/kernel/unwind.c 1539 */;
	u64 cocci_id/* arch/ia64/kernel/unwind.c 1538 */;
	u8 *cocci_id/* arch/ia64/kernel/unwind.c 1537 */;
	struct unw_insn cocci_id/* arch/ia64/kernel/unwind.c 1536 */;
	struct unw_table *cocci_id/* arch/ia64/kernel/unwind.c 1534 */;
	struct unw_state_record cocci_id/* arch/ia64/kernel/unwind.c 1533 */;
	struct unw_labeled_state *cocci_id/* arch/ia64/kernel/unwind.c 1531 */;
	const struct unw_table_entry *cocci_id/* arch/ia64/kernel/unwind.c 1529 */;
	struct unw_frame_info *cocci_id/* arch/ia64/kernel/unwind.c 1527 */;
	struct unw_script *cocci_id/* arch/ia64/kernel/unwind.c 1526 */;
	struct pt_regs cocci_id/* arch/ia64/kernel/unwind.c 1446 */;
	enum unw_insn_opcode cocci_id/* arch/ia64/kernel/unwind.c 1405 */;
	struct unw_state_record *cocci_id/* arch/ia64/kernel/unwind.c 1402 */;
	unsigned short cocci_id/* arch/ia64/kernel/unwind.c 1228 */;
	long cocci_id/* arch/ia64/kernel/unwind.c 1213 */;
	const unsigned long cocci_id/* arch/ia64/kernel/unwind.c 1208 */;
	unw_hash_index_t cocci_id/* arch/ia64/kernel/unwind.c 1204 */;
	enum unw_where cocci_id/* arch/ia64/kernel/unwind.c 1102 */;
	unw_word cocci_id/* arch/ia64/kernel/unwind.c 1033 */;
	unsigned char *cocci_id/* arch/ia64/kernel/unwind.c 1015 */;
}
