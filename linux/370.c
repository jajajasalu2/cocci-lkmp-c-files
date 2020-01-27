cocci_test_suite() {
	u64 cocci_id/* kernel/bpf/queue_stack_maps.c 72 */;
	struct bpf_map_memory cocci_id/* kernel/bpf/queue_stack_maps.c 70 */;
	union bpf_attr *cocci_id/* kernel/bpf/queue_stack_maps.c 67 */;
	struct bpf_queue_stack cocci_id/* kernel/bpf/queue_stack_maps.c 27 */;
	const struct bpf_map_ops cocci_id/* kernel/bpf/queue_stack_maps.c 265 */;
	struct bpf_queue_stack {
		struct bpf_map map;
		raw_spinlock_t lock;
		u32 head,tail;
		u32 size;
		char elements[0]__aligned(8);
	} cocci_id/* kernel/bpf/queue_stack_maps.c 16 */;
	u32 cocci_id/* kernel/bpf/queue_stack_maps.c 149 */;
	unsigned long cocci_id/* kernel/bpf/queue_stack_maps.c 117 */;
	struct bpf_queue_stack *cocci_id/* kernel/bpf/queue_stack_maps.c 116 */;
	bool cocci_id/* kernel/bpf/queue_stack_maps.c 114 */;
	struct bpf_map *cocci_id/* kernel/bpf/queue_stack_maps.c 114 */;
	void *cocci_id/* kernel/bpf/queue_stack_maps.c 114 */;
	int cocci_id/* kernel/bpf/queue_stack_maps.c 114 */;
	void cocci_id/* kernel/bpf/queue_stack_maps.c 100 */;
}
