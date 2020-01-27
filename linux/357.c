cocci_test_suite() {
	u64 cocci_id/* kernel/bpf/stackmap.c 90 */;
	struct bpf_map_memory cocci_id/* kernel/bpf/stackmap.c 89 */;
	union bpf_attr *cocci_id/* kernel/bpf/stackmap.c 85 */;
	struct stack_map_bucket cocci_id/* kernel/bpf/stackmap.c 63 */;
	int __init cocci_id/* kernel/bpf/stackmap.c 621 */;
	const struct bpf_map_ops cocci_id/* kernel/bpf/stackmap.c 611 */;
	u32 cocci_id/* kernel/bpf/stackmap.c 524 */;
	u32 *cocci_id/* kernel/bpf/stackmap.c 524 */;
	struct stack_map_bucket *cocci_id/* kernel/bpf/stackmap.c 523 */;
	struct bpf_stack_map cocci_id/* kernel/bpf/stackmap.c 522 */;
	struct bpf_stack_map *cocci_id/* kernel/bpf/stackmap.c 522 */;
	struct bpf_map *cocci_id/* kernel/bpf/stackmap.c 520 */;
	void *cocci_id/* kernel/bpf/stackmap.c 520 */;
	int cocci_id/* kernel/bpf/stackmap.c 520 */;
	const struct bpf_func_proto cocci_id/* kernel/bpf/stackmap.c 503 */;
	struct stack_map_irq_work cocci_id/* kernel/bpf/stackmap.c 43 */;
	struct stack_map_irq_work *cocci_id/* kernel/bpf/stackmap.c 41 */;
	struct irq_work *cocci_id/* kernel/bpf/stackmap.c 39 */;
	void cocci_id/* kernel/bpf/stackmap.c 39 */;
	struct stack_map_irq_work {
		struct irq_work irq_work;
		struct rw_semaphore *sem;
	} cocci_id/* kernel/bpf/stackmap.c 34 */;
	bool cocci_id/* kernel/bpf/stackmap.c 283 */;
	u64 *cocci_id/* kernel/bpf/stackmap.c 283 */;
	struct bpf_stack_build_id *cocci_id/* kernel/bpf/stackmap.c 282 */;
	struct bpf_stack_map {
		struct bpf_map map;
		void *elems;
		struct pcpu_freelist freelist;
		u32 n_buckets;
		struct stack_map_bucket *buckets[];
	} cocci_id/* kernel/bpf/stackmap.c 25 */;
	struct page *cocci_id/* kernel/bpf/stackmap.c 248 */;
	Elf32_Ehdr *cocci_id/* kernel/bpf/stackmap.c 247 */;
	unsigned char *cocci_id/* kernel/bpf/stackmap.c 245 */;
	struct vm_area_struct *cocci_id/* kernel/bpf/stackmap.c 244 */;
	Elf64_Phdr cocci_id/* kernel/bpf/stackmap.c 230 */;
	Elf64_Ehdr cocci_id/* kernel/bpf/stackmap.c 230 */;
	Elf64_Phdr *cocci_id/* kernel/bpf/stackmap.c 225 */;
	Elf64_Ehdr *cocci_id/* kernel/bpf/stackmap.c 224 */;
	Elf32_Phdr cocci_id/* kernel/bpf/stackmap.c 207 */;
	Elf32_Ehdr cocci_id/* kernel/bpf/stackmap.c 207 */;
	Elf32_Phdr *cocci_id/* kernel/bpf/stackmap.c 202 */;
	struct stack_map_bucket {
		struct pcpu_freelist_node fnode;
		u32 hash;
		u32 nr;
		u64 data[];
	} cocci_id/* kernel/bpf/stackmap.c 18 */;
	Elf32_Nhdr *cocci_id/* kernel/bpf/stackmap.c 174 */;
	Elf32_Nhdr cocci_id/* kernel/bpf/stackmap.c 173 */;
	Elf32_Word cocci_id/* kernel/bpf/stackmap.c 161 */;
	struct bpf_stack_build_id cocci_id/* kernel/bpf/stackmap.c 104 */;
	__typeof__(struct stack_map_irq_work) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
