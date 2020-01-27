cocci_test_suite() {
	char cocci_id/* security/yama/yama_lsm.c 78 */[sizeof(agent->comm)];
	const char *cocci_id/* security/yama/yama_lsm.c 74 */;
	char *cocci_id/* security/yama/yama_lsm.c 55 */;
	struct access_report_info cocci_id/* security/yama/yama_lsm.c 54 */;
	struct access_report_info *cocci_id/* security/yama/yama_lsm.c 53 */;
	struct callback_head *cocci_id/* security/yama/yama_lsm.c 51 */;
	void cocci_id/* security/yama/yama_lsm.c 51 */;
	int __init cocci_id/* security/yama/yama_lsm.c 477 */;
	void __init cocci_id/* security/yama/yama_lsm.c 468 */;
	struct ctl_table cocci_id/* security/yama/yama_lsm.c 456 */[];
	struct ctl_path cocci_id/* security/yama/yama_lsm.c 450 */[];
	int cocci_id/* security/yama/yama_lsm.c 448 */;
	int *cocci_id/* security/yama/yama_lsm.c 442 */;
	struct access_report_info {
		struct callback_head work;
		const char *access;
		struct task_struct *target;
		struct task_struct *agent;
	} cocci_id/* security/yama/yama_lsm.c 44 */;
	struct ctl_table cocci_id/* security/yama/yama_lsm.c 435 */;
	loff_t *cocci_id/* security/yama/yama_lsm.c 433 */;
	size_t *cocci_id/* security/yama/yama_lsm.c 433 */;
	void __user *cocci_id/* security/yama/yama_lsm.c 433 */;
	struct ctl_table *cocci_id/* security/yama/yama_lsm.c 432 */;
	struct security_hook_list cocci_id/* security/yama/yama_lsm.c 424 */[];
	void cocci_id/* security/yama/yama_lsm.c 41 */(struct work_struct *work);
	unsigned int cocci_id/* security/yama/yama_lsm.c 355 */;
	bool cocci_id/* security/yama/yama_lsm.c 311 */;
	struct ptrace_relation *cocci_id/* security/yama/yama_lsm.c 309 */;
	struct task_struct *cocci_id/* security/yama/yama_lsm.c 305 */;
	struct ptrace_relation {
		struct task_struct *tracer;
		struct task_struct *tracee;
		bool invalid;
		struct list_head node;
		struct rcu_head rcu;
	} cocci_id/* security/yama/yama_lsm.c 30 */;
	unsigned long cocci_id/* security/yama/yama_lsm.c 221 */;
	struct work_struct *cocci_id/* security/yama/yama_lsm.c 115 */;
}
