cocci_test_suite() {
	const int cocci_id/* arch/sparc/kernel/cpumap.c 88 */[];
	u16 cocci_id/* arch/sparc/kernel/cpumap.c 59 */[NR_CPUS];
	struct cpuinfo_tree {
		int total_nodes;
		struct cpuinfo_level level[CPUINFO_LVL_MAX];
		struct cpuinfo_node nodes[0];
	} cocci_id/* arch/sparc/kernel/cpumap.c 48 */;
	unsigned long cocci_id/* arch/sparc/kernel/cpumap.c 434 */;
	struct cpuinfo_level {
		int start_index;
		int end_index;
		int num_nodes;
	} cocci_id/* arch/sparc/kernel/cpumap.c 42 */;
	struct cpuinfo_node *cocci_id/* arch/sparc/kernel/cpumap.c 396 */;
	unsigned int cocci_id/* arch/sparc/kernel/cpumap.c 394 */;
	int cocci_id/* arch/sparc/kernel/cpumap.c 353 */;
	void cocci_id/* arch/sparc/kernel/cpumap.c 351 */;
	struct cpuinfo_node {
		int id;
		int level;
		int num_cpus;
		int parent_index;
		int child_start;
		int child_end;
		int rover;
	} cocci_id/* arch/sparc/kernel/cpumap.c 32 */;
	const int *cocci_id/* arch/sparc/kernel/cpumap.c 297 */;
	enum{ROVER_NO_OP=0, ROVER_INC_ON_VISIT=1 << 0, ROVER_INC_PARENT_ON_LOOP=1 << 1,} cocci_id/* arch/sparc/kernel/cpumap.c 24 */;
	int cocci_id/* arch/sparc/kernel/cpumap.c 190 */[CPUINFO_LVL_MAX];
	struct cpuinfo_level cocci_id/* arch/sparc/kernel/cpumap.c 189 */[CPUINFO_LVL_MAX];
	struct cpuinfo_tree *cocci_id/* arch/sparc/kernel/cpumap.c 185 */;
	enum{CPUINFO_LVL_ROOT=0, CPUINFO_LVL_NODE, CPUINFO_LVL_CORE, CPUINFO_LVL_PROC, CPUINFO_LVL_MAX,} cocci_id/* arch/sparc/kernel/cpumap.c 16 */;
	struct cpuinfo_level *cocci_id/* arch/sparc/kernel/cpumap.c 124 */;
}
