cocci_test_suite() {
	u64 cocci_id/* kernel/bpf/cpumap.c 85 */;
	union bpf_attr *cocci_id/* kernel/bpf/cpumap.c 80 */;
	int cocci_id/* kernel/bpf/cpumap.c 78 */(struct xdp_bulk_queue *bq,
						 bool in_napi_ctx);
	struct bpf_cpu_map {
		struct bpf_map map;
		struct bpf_cpu_map_entry **cpu_map;
		struct list_head __percpu *flush_list;
	} cocci_id/* kernel/bpf/cpumap.c 71 */;
	struct list_head *cocci_id/* kernel/bpf/cpumap.c 687 */;
	struct bpf_cpu_map cocci_id/* kernel/bpf/cpumap.c 686 */;
	struct bpf_map *cocci_id/* kernel/bpf/cpumap.c 684 */;
	struct net_device *cocci_id/* kernel/bpf/cpumap.c 669 */;
	struct xdp_buff *cocci_id/* kernel/bpf/cpumap.c 668 */;
	const int cocci_id/* kernel/bpf/cpumap.c 606 */;
	unsigned int cocci_id/* kernel/bpf/cpumap.c 605 */;
	bool cocci_id/* kernel/bpf/cpumap.c 602 */;
	const struct bpf_map_ops cocci_id/* kernel/bpf/cpumap.c 592 */;
	struct bpf_cpu_map_entry {
		u32 cpu;
		int map_id;
		u32 qsize;
		struct xdp_bulk_queue __percpu *bulkq;
		struct bpf_cpu_map *cmap;
		struct ptr_ring *queue;
		struct task_struct *kthread;
		struct work_struct kthread_stop_wq;
		atomic_t refcnt;
		struct rcu_head rcu;
	} cocci_id/* kernel/bpf/cpumap.c 52 */;
	u32 *cocci_id/* kernel/bpf/cpumap.c 458 */;
	struct bpf_cpu_map *cocci_id/* kernel/bpf/cpumap.c 442 */;
	struct xdp_bulk_queue {
		void *q[CPU_MAP_BULK_SIZE];
		struct list_head flush_node;
		struct bpf_cpu_map_entry *obj;
		unsigned int count;
	} cocci_id/* kernel/bpf/cpumap.c 44 */;
	struct bpf_cpu_map_entry cocci_id/* kernel/bpf/cpumap.c 409 */;
	struct rcu_head *cocci_id/* kernel/bpf/cpumap.c 399 */;
	void cocci_id/* kernel/bpf/cpumap.c 399 */;
	void *cocci_id/* kernel/bpf/cpumap.c 351 */;
	struct xdp_bulk_queue *cocci_id/* kernel/bpf/cpumap.c 339 */;
	gfp_t cocci_id/* kernel/bpf/cpumap.c 337 */;
	int cocci_id/* kernel/bpf/cpumap.c 335 */;
	u32 cocci_id/* kernel/bpf/cpumap.c 334 */;
	struct bpf_cpu_map_entry *cocci_id/* kernel/bpf/cpumap.c 334 */;
	struct page *cocci_id/* kernel/bpf/cpumap.c 290 */;
	void *cocci_id/* kernel/bpf/cpumap.c 262 */[CPUMAP_BATCH];
	struct xdp_frame *cocci_id/* kernel/bpf/cpumap.c 229 */;
	struct ptr_ring *cocci_id/* kernel/bpf/cpumap.c 222 */;
	struct skb_shared_info cocci_id/* kernel/bpf/cpumap.c 192 */;
	struct xdp_frame cocci_id/* kernel/bpf/cpumap.c 172 */;
	struct sk_buff *cocci_id/* kernel/bpf/cpumap.c 163 */;
	struct work_struct *cocci_id/* kernel/bpf/cpumap.c 148 */;
	struct list_head cocci_id/* kernel/bpf/cpumap.c 109 */;
}
