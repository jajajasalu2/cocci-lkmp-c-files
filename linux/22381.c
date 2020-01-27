cocci_test_suite() {
	bool cocci_id/* security/device_cgroup.c 808 */;
	u32 cocci_id/* security/device_cgroup.c 804 */;
	int cocci_id/* security/device_cgroup.c 804 */;
	short cocci_id/* security/device_cgroup.c 804 */;
	struct cgroup_subsys cocci_id/* security/device_cgroup.c 786 */;
	struct cftype cocci_id/* security/device_cgroup.c 767 */[];
	loff_t cocci_id/* security/device_cgroup.c 756 */;
	char *cocci_id/* security/device_cgroup.c 756 */;
	size_t cocci_id/* security/device_cgroup.c 756 */;
	struct kernfs_open_file *cocci_id/* security/device_cgroup.c 755 */;
	ssize_t cocci_id/* security/device_cgroup.c 755 */;
	struct dev_exception_item cocci_id/* security/device_cgroup.c 601 */;
	char cocci_id/* security/device_cgroup.c 599 */[12];
	const char *cocci_id/* security/device_cgroup.c 598 */;
	struct list_head *cocci_id/* security/device_cgroup.c 59 */;
	struct task_struct *cocci_id/* security/device_cgroup.c 51 */;
	struct dev_cgroup cocci_id/* security/device_cgroup.c 48 */;
	struct cgroup_subsys_state *cocci_id/* security/device_cgroup.c 46 */;
	struct dev_cgroup {
		struct cgroup_subsys_state css;
		struct list_head exceptions;
		enum devcg_behavior behavior;
	} cocci_id/* security/device_cgroup.c 40 */;
	enum devcg_behavior cocci_id/* security/device_cgroup.c 391 */;
	struct dev_exception_item {
		u32 major,minor;
		short type;
		short access;
		struct list_head list;
		struct rcu_head rcu;
	} cocci_id/* security/device_cgroup.c 32 */;
	char cocci_id/* security/device_cgroup.c 271 */[MAJMINLEN];
	struct seq_file *cocci_id/* security/device_cgroup.c 267 */;
	void *cocci_id/* security/device_cgroup.c 267 */;
	unsigned cocci_id/* security/device_cgroup.c 259 */;
	char cocci_id/* security/device_cgroup.c 248 */;
	enum devcg_behavior{DEVCG_DEFAULT_NONE, DEVCG_DEFAULT_ALLOW, DEVCG_DEFAULT_DENY,} cocci_id/* security/device_cgroup.c 20 */;
	const struct dev_cgroup *cocci_id/* security/device_cgroup.c 163 */;
	struct dev_exception_item *cocci_id/* security/device_cgroup.c 142 */;
	struct dev_cgroup *cocci_id/* security/device_cgroup.c 140 */;
	void cocci_id/* security/device_cgroup.c 140 */;
}
