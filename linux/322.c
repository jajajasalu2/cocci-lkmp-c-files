cocci_test_suite() {
	struct rdma_cgroup cocci_id/* kernel/cgroup/rdma.c 69 */;
	struct rdma_cgroup *cocci_id/* kernel/cgroup/rdma.c 67 */;
	struct cgroup_subsys_state *cocci_id/* kernel/cgroup/rdma.c 67 */;
	struct cgroup_subsys cocci_id/* kernel/cgroup/rdma.c 604 */;
	struct cftype cocci_id/* kernel/cgroup/rdma.c 545 */[];
	struct rdmacg_resource_pool {
		struct rdmacg_device *device;
		struct rdmacg_resource resources[RDMACG_RESOURCE_MAX];
		struct list_head cg_node;
		struct list_head dev_node;
		u64 usage_sum;
		int num_max_cnt;
	} cocci_id/* kernel/cgroup/rdma.c 54 */;
	void *cocci_id/* kernel/cgroup/rdma.c 524 */;
	u32 cocci_id/* kernel/cgroup/rdma.c 497 */;
	enum rdmacg_file_type cocci_id/* kernel/cgroup/rdma.c 495 */;
	struct seq_file *cocci_id/* kernel/cgroup/rdma.c 492 */;
	unsigned long cocci_id/* kernel/cgroup/rdma.c 434 */;
	struct rdmacg_resource {
		int max;
		int usage;
	} cocci_id/* kernel/cgroup/rdma.c 43 */;
	loff_t cocci_id/* kernel/cgroup/rdma.c 426 */;
	struct kernfs_open_file *cocci_id/* kernel/cgroup/rdma.c 425 */;
	ssize_t cocci_id/* kernel/cgroup/rdma.c 425 */;
	const char *cocci_id/* kernel/cgroup/rdma.c 412 */;
	unsigned long *cocci_id/* kernel/cgroup/rdma.c 390 */;
	const char *cocci_id/* kernel/cgroup/rdma.c 37 */[];
	size_t cocci_id/* kernel/cgroup/rdma.c 360 */;
	substring_t cocci_id/* kernel/cgroup/rdma.c 358 */;
	int *cocci_id/* kernel/cgroup/rdma.c 356 */;
	char *cocci_id/* kernel/cgroup/rdma.c 356 */;
	int cocci_id/* kernel/cgroup/rdma.c 356 */;
	enum rdmacg_file_type{RDMACG_RESOURCE_TYPE_MAX, RDMACG_RESOURCE_TYPE_STAT,} cocci_id/* kernel/cgroup/rdma.c 27 */;
	s64 cocci_id/* kernel/cgroup/rdma.c 265 */;
	enum rdmacg_resource_type cocci_id/* kernel/cgroup/rdma.c 261 */;
	struct rdma_cgroup **cocci_id/* kernel/cgroup/rdma.c 259 */;
	struct rdmacg_device *cocci_id/* kernel/cgroup/rdma.c 114 */;
	struct rdmacg_resource_pool *cocci_id/* kernel/cgroup/rdma.c 112 */;
	void cocci_id/* kernel/cgroup/rdma.c 103 */;
}
