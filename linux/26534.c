cocci_test_suite() {
	struct func_node *cocci_id/* tools/bpf/bpftool/cfg.c 63 */;
	struct cfg *cocci_id/* tools/bpf/bpftool/cfg.c 63 */;
	struct bpf_insn *cocci_id/* tools/bpf/bpftool/cfg.c 63 */;
	struct bb_node cocci_id/* tools/bpf/bpftool/cfg.c 59 */;
	struct func_node cocci_id/* tools/bpf/bpftool/cfg.c 55 */;
	struct cfg cocci_id/* tools/bpf/bpftool/cfg.c 476 */;
	void *cocci_id/* tools/bpf/bpftool/cfg.c 473 */;
	struct dump_data cocci_id/* tools/bpf/bpftool/cfg.c 401 */;
	const char *cocci_id/* tools/bpf/bpftool/cfg.c 385 */;
	struct edge_node {
		struct list_head l;
		struct bb_node *src;
		struct bb_node *dst;
		int flags;
	} cocci_id/* tools/bpf/bpftool/cfg.c 38 */;
	struct edge_node *cocci_id/* tools/bpf/bpftool/cfg.c 362 */;
	struct bb_node *cocci_id/* tools/bpf/bpftool/cfg.c 359 */;
	void cocci_id/* tools/bpf/bpftool/cfg.c 354 */;
	int cocci_id/* tools/bpf/bpftool/cfg.c 335 */;
	bool cocci_id/* tools/bpf/bpftool/cfg.c 333 */;
	unsigned int cocci_id/* tools/bpf/bpftool/cfg.c 333 */;
	struct bb_node {
		struct list_head l;
		struct list_head e_prevs;
		struct list_head e_succs;
		struct bpf_insn *head;
		struct bpf_insn *tail;
		int idx;
	} cocci_id/* tools/bpf/bpftool/cfg.c 26 */;
	u8 cocci_id/* tools/bpf/bpftool/cfg.c 179 */;
	struct func_node {
		struct list_head l;
		struct list_head bbs;
		struct bpf_insn *start;
		struct bpf_insn *end;
		int idx;
		int bb_num;
	} cocci_id/* tools/bpf/bpftool/cfg.c 17 */;
	struct cfg {
		struct list_head funcs;
		int func_num;
	} cocci_id/* tools/bpf/bpftool/cfg.c 12 */;
	struct list_head *cocci_id/* tools/bpf/bpftool/cfg.c 114 */;
}
