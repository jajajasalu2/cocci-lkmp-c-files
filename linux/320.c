cocci_test_suite() {
	const char *cocci_id/* kernel/cgroup/legacy_freezer.c 76 */;
	bool cocci_id/* kernel/cgroup/legacy_freezer.c 65 */;
	struct task_struct *cocci_id/* kernel/cgroup/legacy_freezer.c 65 */;
	struct freezer cocci_id/* kernel/cgroup/legacy_freezer.c 52 */;
	struct freezer *cocci_id/* kernel/cgroup/legacy_freezer.c 50 */;
	struct cgroup_subsys_state *cocci_id/* kernel/cgroup/legacy_freezer.c 50 */;
	struct cgroup_subsys cocci_id/* kernel/cgroup/legacy_freezer.c 473 */;
	struct cftype cocci_id/* kernel/cgroup/legacy_freezer.c 453 */[];
	struct cftype *cocci_id/* kernel/cgroup/legacy_freezer.c 446 */;
	u64 cocci_id/* kernel/cgroup/legacy_freezer.c 445 */;
	struct freezer {
		struct cgroup_subsys_state css;
		unsigned int state;
	} cocci_id/* kernel/cgroup/legacy_freezer.c 43 */;
	loff_t cocci_id/* kernel/cgroup/legacy_freezer.c 420 */;
	char *cocci_id/* kernel/cgroup/legacy_freezer.c 420 */;
	size_t cocci_id/* kernel/cgroup/legacy_freezer.c 420 */;
	struct kernfs_open_file *cocci_id/* kernel/cgroup/legacy_freezer.c 419 */;
	ssize_t cocci_id/* kernel/cgroup/legacy_freezer.c 419 */;
	unsigned int cocci_id/* kernel/cgroup/legacy_freezer.c 350 */;
	enum freezer_state_flags{CGROUP_FREEZER_ONLINE=(1 << 0), CGROUP_FREEZING_SELF=(1 << 1), CGROUP_FREEZING_PARENT=(1 << 2), CGROUP_FROZEN=(1 << 3), CGROUP_FREEZING=CGROUP_FREEZING_SELF | CGROUP_FREEZING_PARENT,} cocci_id/* kernel/cgroup/legacy_freezer.c 33 */;
	struct css_task_iter cocci_id/* kernel/cgroup/legacy_freezer.c 320 */;
	void cocci_id/* kernel/cgroup/legacy_freezer.c 318 */;
	struct seq_file *cocci_id/* kernel/cgroup/legacy_freezer.c 291 */;
	void *cocci_id/* kernel/cgroup/legacy_freezer.c 291 */;
	struct cgroup_taskset *cocci_id/* kernel/cgroup/legacy_freezer.c 158 */;
	int cocci_id/* kernel/cgroup/legacy_freezer.c 105 */;
}
