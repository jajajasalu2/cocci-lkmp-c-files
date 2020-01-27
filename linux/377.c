cocci_test_suite() {
	void *cocci_id/* kernel/taskstats.c 73 */;
	int __init cocci_id/* kernel/taskstats.c 699 */;
	u8 cocci_id/* kernel/taskstats.c 69 */;
	struct sk_buff **cocci_id/* kernel/taskstats.c 69 */;
	void __init cocci_id/* kernel/taskstats.c 688 */;
	const struct nla_policy *cocci_id/* kernel/taskstats.c 659 */;
	const struct genl_ops *cocci_id/* kernel/taskstats.c 656 */;
	const struct genl_ops cocci_id/* kernel/taskstats.c 639 */[];
	enum actions{REGISTER, DEREGISTER, CPU_DONT_CARE,} cocci_id/* kernel/taskstats.c 63 */;
	struct listener_list {
		struct rw_semaphore sem;
		struct list_head list;
	} cocci_id/* kernel/taskstats.c 57 */;
	struct signal_struct *cocci_id/* kernel/taskstats.c 556 */;
	struct listener {
		struct list_head list;
		pid_t pid;
		char valid;
	} cocci_id/* kernel/taskstats.c 51 */;
	struct taskstats *cocci_id/* kernel/taskstats.c 484 */;
	const struct nla_policy cocci_id/* kernel/taskstats.c 47 */[TASKSTATS_CMD_ATTR_MAX + 1];
	cpumask_var_t cocci_id/* kernel/taskstats.c 457 */;
	struct cgroupstats cocci_id/* kernel/taskstats.c 408 */;
	struct fd cocci_id/* kernel/taskstats.c 397 */;
	u32 cocci_id/* kernel/taskstats.c 396 */;
	size_t cocci_id/* kernel/taskstats.c 395 */;
	struct nlattr *cocci_id/* kernel/taskstats.c 394 */;
	struct cgroupstats *cocci_id/* kernel/taskstats.c 393 */;
	struct sk_buff *cocci_id/* kernel/taskstats.c 389 */;
	struct genl_info *cocci_id/* kernel/taskstats.c 389 */;
	struct taskstats cocci_id/* kernel/taskstats.c 377 */;
	struct genl_family cocci_id/* kernel/taskstats.c 35 */;
	char *cocci_id/* kernel/taskstats.c 339 */;
	struct cpumask *cocci_id/* kernel/taskstats.c 337 */;
	struct kmem_cache *cocci_id/* kernel/taskstats.c 33 */;
	struct listener cocci_id/* kernel/taskstats.c 296 */;
	unsigned int cocci_id/* kernel/taskstats.c 282 */;
	struct listener *cocci_id/* kernel/taskstats.c 281 */;
	struct listener_list *cocci_id/* kernel/taskstats.c 280 */;
	pid_t cocci_id/* kernel/taskstats.c 278 */;
	const struct cpumask *cocci_id/* kernel/taskstats.c 278 */;
	int cocci_id/* kernel/taskstats.c 278 */;
	u64 cocci_id/* kernel/taskstats.c 200 */;
	unsigned long cocci_id/* kernel/taskstats.c 198 */;
	struct task_struct *cocci_id/* kernel/taskstats.c 161 */;
	struct pid_namespace *cocci_id/* kernel/taskstats.c 160 */;
	struct user_namespace *cocci_id/* kernel/taskstats.c 159 */;
	void cocci_id/* kernel/taskstats.c 159 */;
	struct genlmsghdr *cocci_id/* kernel/taskstats.c 116 */;
	__typeof__(struct listener_list) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(__u32) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}