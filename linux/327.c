cocci_test_suite() {
	void cocci_id/* kernel/cgroup/pids.c 95 */;
	struct pids_cgroup cocci_id/* kernel/cgroup/pids.c 59 */;
	struct pids_cgroup *cocci_id/* kernel/cgroup/pids.c 57 */;
	struct cgroup_subsys_state *cocci_id/* kernel/cgroup/pids.c 57 */;
	struct pids_cgroup {
		struct cgroup_subsys_state css;
		atomic64_t counter;
		atomic64_t limit;
		struct cgroup_file events_file;
		atomic64_t events_limit;
	} cocci_id/* kernel/cgroup/pids.c 40 */;
	struct cgroup_subsys cocci_id/* kernel/cgroup/pids.c 336 */;
	struct cftype cocci_id/* kernel/cgroup/pids.c 315 */[];
	struct seq_file *cocci_id/* kernel/cgroup/pids.c 307 */;
	void *cocci_id/* kernel/cgroup/pids.c 307 */;
	struct cftype *cocci_id/* kernel/cgroup/pids.c 300 */;
	s64 cocci_id/* kernel/cgroup/pids.c 299 */;
	int64_t cocci_id/* kernel/cgroup/pids.c 289 */;
	loff_t cocci_id/* kernel/cgroup/pids.c 256 */;
	size_t cocci_id/* kernel/cgroup/pids.c 256 */;
	struct kernfs_open_file *cocci_id/* kernel/cgroup/pids.c 255 */;
	char *cocci_id/* kernel/cgroup/pids.c 255 */;
	ssize_t cocci_id/* kernel/cgroup/pids.c 255 */;
	struct task_struct *cocci_id/* kernel/cgroup/pids.c 172 */;
	struct cgroup_taskset *cocci_id/* kernel/cgroup/pids.c 170 */;
	int cocci_id/* kernel/cgroup/pids.c 170 */;
}
