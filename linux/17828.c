cocci_test_suite() {
	pfm_context_t cocci_id/* arch/ia64/kernel/perfmon.c 821 */;
	int cocci_id/* arch/ia64/kernel/perfmon.c 6612 */;
	unsigned long cocci_id/* arch/ia64/kernel/perfmon.c 6611 */;
	pfm_context_t *cocci_id/* arch/ia64/kernel/perfmon.c 6610 */;
	struct pt_regs *cocci_id/* arch/ia64/kernel/perfmon.c 6609 */;
	struct task_struct *cocci_id/* arch/ia64/kernel/perfmon.c 6608 */;
	const char *cocci_id/* arch/ia64/kernel/perfmon.c 6606 */;
	void cocci_id/* arch/ia64/kernel/perfmon.c 6605 */;
	int cocci_id/* arch/ia64/kernel/perfmon.c 654 */(pfm_context_t *ctx);
	pmu_config_t **cocci_id/* arch/ia64/kernel/perfmon.c 6456 */;
	int cocci_id/* arch/ia64/kernel/perfmon.c 6451 */(void);
	pmu_config_t *cocci_id/* arch/ia64/kernel/perfmon.c 645 */[];
	int cocci_id/* arch/ia64/kernel/perfmon.c 638 */(int mode,
							 pfm_context_t *ctx,
							 void *arg, int count,
							 struct pt_regs *regs);
	void cocci_id/* arch/ia64/kernel/perfmon.c 637 */(const char *);
	void *cocci_id/* arch/ia64/kernel/perfmon.c 6348 */;
	void cocci_id/* arch/ia64/kernel/perfmon.c 634 */(struct task_struct *ta);
	struct irqaction cocci_id/* arch/ia64/kernel/perfmon.c 6316 */;
	const struct file_operations cocci_id/* arch/ia64/kernel/perfmon.c 628 */;
	struct file_system_type cocci_id/* arch/ia64/kernel/perfmon.c 613 */;
	struct pseudo_fs_context *cocci_id/* arch/ia64/kernel/perfmon.c 606 */;
	struct fs_context *cocci_id/* arch/ia64/kernel/perfmon.c 604 */;
	const struct dentry_operations cocci_id/* arch/ia64/kernel/perfmon.c 602 */;
	int cocci_id/* arch/ia64/kernel/perfmon.c 577 */(pfm_context_t *ctx,
							 void *arg, int count,
							 struct pt_regs *regs);
	struct ctl_table_header *cocci_id/* arch/ia64/kernel/perfmon.c 575 */;
	const struct seq_operations cocci_id/* arch/ia64/kernel/perfmon.c 5655 */;
	loff_t *cocci_id/* arch/ia64/kernel/perfmon.c 5529 */;
	struct seq_file *cocci_id/* arch/ia64/kernel/perfmon.c 5529 */;
	irqreturn_t cocci_id/* arch/ia64/kernel/perfmon.c 5466 */;
	u64 cocci_id/* arch/ia64/kernel/perfmon.c 5407 */;
	struct ctl_table cocci_id/* arch/ia64/kernel/perfmon.c 528 */[];
	pfm_sysctl_t cocci_id/* arch/ia64/kernel/perfmon.c 525 */;
	unsigned char cocci_id/* arch/ia64/kernel/perfmon.c 5221 */;
	pmu_config_t *cocci_id/* arch/ia64/kernel/perfmon.c 522 */;
	spinlock_t cocci_id/* arch/ia64/kernel/perfmon.c 519 */;
	struct proc_dir_entry *cocci_id/* arch/ia64/kernel/perfmon.c 516 */;
	pfm_intr_handler_desc_t *cocci_id/* arch/ia64/kernel/perfmon.c 514 */;
	pfm_ovfl_ctrl_t cocci_id/* arch/ia64/kernel/perfmon.c 5128 */;
	pfm_ovfl_arg_t *cocci_id/* arch/ia64/kernel/perfmon.c 5123 */;
	pfm_session_t cocci_id/* arch/ia64/kernel/perfmon.c 511 */;
	pfm_stats_t cocci_id/* arch/ia64/kernel/perfmon.c 510 */[NR_CPUS];
	pfm_msg_t *cocci_id/* arch/ia64/kernel/perfmon.c 5094 */;
	struct {
		unsigned long pfm_spurious_ovfl_intr_count;
		unsigned long pfm_replay_ovfl_intr_count;
		unsigned long pfm_ovfl_intr_count;
		unsigned long pfm_ovfl_intr_cycles;
		unsigned long pfm_ovfl_intr_cycles_min;
		unsigned long pfm_ovfl_intr_cycles_max;
		unsigned long pfm_smpl_handler_calls;
		unsigned long pfm_smpl_handler_cycles;
		char pad[SMP_CACHE_BYTES]____cacheline_aligned;
	} cocci_id/* arch/ia64/kernel/perfmon.c 495 */;
	int cocci_id/* arch/ia64/kernel/perfmon.c 4926 */(pfm_context_t *ctx,
							  unsigned long ovfl_pmds);
	struct {
		int (*cmd_func)(pfm_context_t *ctx, void *arg, int count,
				struct pt_regs *regs);
		char *cmd_name;
		int cmd_flags;
		unsigned int cmd_narg;
		size_t cmd_argsize;
		int (*cmd_getsize)(void *arg, size_t *sz);
	} cocci_id/* arch/ia64/kernel/perfmon.c 472 */;
	int (*cocci_id/* arch/ia64/kernel/perfmon.c 4717 */)(void *arg,
							     size_t *sz);
	int (*cocci_id/* arch/ia64/kernel/perfmon.c 4716 */)(pfm_context_t *ctx,
							     void *arg,
							     int count,
							     struct pt_regs *regs);
	struct fd cocci_id/* arch/ia64/kernel/perfmon.c 4709 */;
	void __user *cocci_id/* arch/ia64/kernel/perfmon.c 4707 */;
	union {
		unsigned long val;
		ibr_mask_reg_t ibr;
		dbr_mask_reg_t dbr;
	} cocci_id/* arch/ia64/kernel/perfmon.c 462 */;
	pfm_cmd_desc_t cocci_id/* arch/ia64/kernel/perfmon.c 4600 */;
	pfarg_dbreg_t cocci_id/* arch/ia64/kernel/perfmon.c 4597 */;
	pfarg_load_t cocci_id/* arch/ia64/kernel/perfmon.c 4581 */;
	pfarg_features_t cocci_id/* arch/ia64/kernel/perfmon.c 4577 */;
	pfarg_context_t cocci_id/* arch/ia64/kernel/perfmon.c 4573 */;
	pfarg_reg_t cocci_id/* arch/ia64/kernel/perfmon.c 4566 */;
	pfm_cmd_desc_t cocci_id/* arch/ia64/kernel/perfmon.c 4564 */[];
	struct {
		unsigned long dbr_mask:56;
		unsigned long dbr_plm:4;
		unsigned long dbr_ig:2;
		unsigned long dbr_w:1;
		unsigned long dbr_r:1;
	} cocci_id/* arch/ia64/kernel/perfmon.c 454 */;
	struct {
		unsigned long ibr_mask:56;
		unsigned long ibr_plm:4;
		unsigned long ibr_ig:3;
		unsigned long ibr_x:1;
	} cocci_id/* arch/ia64/kernel/perfmon.c 447 */;
	void cocci_id/* arch/ia64/kernel/perfmon.c 4359 */(struct task_struct *,
							   pfm_context_t *ctx);
	struct {
		unsigned long ovfl_val;
		pfm_reg_desc_t *pmc_desc;
		pfm_reg_desc_t *pmd_desc;
		unsigned int num_pmcs;
		unsigned int num_pmds;
		unsigned long impl_pmcs[4];
		unsigned long impl_pmds[4];
		char *pmu_name;
		unsigned int pmu_family;
		unsigned int flags;
		unsigned int num_ibrs;
		unsigned int num_dbrs;
		unsigned int num_counters;
		int (*probe)(void);
		unsigned int use_rr_dbregs:1;
	} cocci_id/* arch/ia64/kernel/perfmon.c 419 */;
	pfarg_load_t *cocci_id/* arch/ia64/kernel/perfmon.c 4114 */;
	struct pfm_context_t *cocci_id/* arch/ia64/kernel/perfmon.c 4109 */;
	struct thread_struct *cocci_id/* arch/ia64/kernel/perfmon.c 4108 */;
	pfarg_reg_t *cocci_id/* arch/ia64/kernel/perfmon.c 4058 */;
	struct {
		unsigned int type;
		int pm_pos;
		unsigned long default_value;
		unsigned long reserved_mask;
		pfm_reg_check_t read_check;
		pfm_reg_check_t write_check;
		unsigned long dep_pmd[4];
		unsigned long dep_pmc[4];
	} cocci_id/* arch/ia64/kernel/perfmon.c 393 */;
	int (*cocci_id/* arch/ia64/kernel/perfmon.c 392 */)(struct task_struct *task,
							    pfm_context_t *ctx,
							    unsigned int cnum,
							    unsigned long *val,
							    struct pt_regs *regs);
	pfarg_features_t *cocci_id/* arch/ia64/kernel/perfmon.c 3879 */;
	struct {
		spinlock_t pfs_lock;
		unsigned int pfs_task_sessions;
		unsigned int pfs_sys_sessions;
		unsigned int pfs_sys_use_dbregs;
		unsigned int pfs_ptrace_use_dbregs;
		struct task_struct *pfs_sys_session[NR_CPUS];
	} cocci_id/* arch/ia64/kernel/perfmon.c 377 */;
	dbreg_t cocci_id/* arch/ia64/kernel/perfmon.c 3633 */;
	pfarg_dbreg_t *cocci_id/* arch/ia64/kernel/perfmon.c 3631 */;
	unsigned int *cocci_id/* arch/ia64/kernel/perfmon.c 3610 */;
	pfm_reg_check_t cocci_id/* arch/ia64/kernel/perfmon.c 3211 */;
	struct pfm_context {
		spinlock_t ctx_lock;
		pfm_context_flags_t ctx_flags;
		unsigned int ctx_state;
		struct task_struct *ctx_task;
		unsigned long ctx_ovfl_regs[4];
		struct completion ctx_restart_done;
		unsigned long ctx_used_pmds[4];
		unsigned long ctx_all_pmds[4];
		unsigned long ctx_reload_pmds[4];
		unsigned long ctx_all_pmcs[4];
		unsigned long ctx_reload_pmcs[4];
		unsigned long ctx_used_monitors[4];
		unsigned long ctx_pmcs[PFM_NUM_PMC_REGS];
		unsigned int ctx_used_ibrs[1];
		unsigned int ctx_used_dbrs[1];
		unsigned long ctx_dbrs[IA64_NUM_DBG_REGS];
		unsigned long ctx_ibrs[IA64_NUM_DBG_REGS];
		pfm_counter_t ctx_pmds[PFM_NUM_PMD_REGS];
		unsigned long th_pmcs[PFM_NUM_PMC_REGS];
		unsigned long th_pmds[PFM_NUM_PMD_REGS];
		unsigned long ctx_saved_psr_up;
		unsigned long ctx_last_activation;
		unsigned int ctx_last_cpu;
		unsigned int ctx_cpu;
		int ctx_fd;
		pfm_ovfl_arg_t ctx_ovfl_arg;
		pfm_buffer_fmt_t *ctx_buf_fmt;
		void *ctx_smpl_hdr;
		unsigned long ctx_smpl_size;
		void *ctx_smpl_vaddr;
		wait_queue_head_t ctx_msgq_wait;
		pfm_msg_t ctx_msgq[PFM_MAX_MSGS];
		int ctx_msgq_head;
		int ctx_msgq_tail;
		struct fasync_struct *ctx_async_queue;
		wait_queue_head_t ctx_zombieq;
	} cocci_id/* arch/ia64/kernel/perfmon.c 288 */;
	unsigned long cocci_id/* arch/ia64/kernel/perfmon.c 2664 */(unsigned long seed);
	pfm_counter_t *cocci_id/* arch/ia64/kernel/perfmon.c 2660 */;
	struct {
		unsigned int block:1;
		unsigned int system:1;
		unsigned int using_dbreg:1;
		unsigned int is_sampling:1;
		unsigned int excl_idle:1;
		unsigned int going_zombie:1;
		unsigned int trap_reason:2;
		unsigned int no_msg:1;
		unsigned int can_restart:1;
		unsigned int reserved:22;
	} cocci_id/* arch/ia64/kernel/perfmon.c 266 */;
	pid_t cocci_id/* arch/ia64/kernel/perfmon.c 2555 */;
	struct task_struct **cocci_id/* arch/ia64/kernel/perfmon.c 2555 */;
	struct {
		unsigned long val;
		unsigned long lval;
		unsigned long long_reset;
		unsigned long short_reset;
		unsigned long reset_pmds[4];
		unsigned long smpl_pmds[4];
		unsigned long seed;
		unsigned long mask;
		unsigned int flags;
		unsigned long eventid;
	} cocci_id/* arch/ia64/kernel/perfmon.c 250 */;
	size_t *cocci_id/* arch/ia64/kernel/perfmon.c 2479 */;
	pfarg_context_t *cocci_id/* arch/ia64/kernel/perfmon.c 2343 */;
	kgid_t cocci_id/* arch/ia64/kernel/perfmon.c 2315 */;
	kuid_t cocci_id/* arch/ia64/kernel/perfmon.c 2314 */;
	const struct cred *cocci_id/* arch/ia64/kernel/perfmon.c 2313 */;
	struct mm_struct *cocci_id/* arch/ia64/kernel/perfmon.c 2198 */;
	void **cocci_id/* arch/ia64/kernel/perfmon.c 2196 */;
	struct vm_area_struct *cocci_id/* arch/ia64/kernel/perfmon.c 2174 */;
	struct qstr cocci_id/* arch/ia64/kernel/perfmon.c 2134 */;
	struct path cocci_id/* arch/ia64/kernel/perfmon.c 2133 */;
	struct inode *cocci_id/* arch/ia64/kernel/perfmon.c 2132 */;
	struct file *cocci_id/* arch/ia64/kernel/perfmon.c 2128 */;
	struct dentry *cocci_id/* arch/ia64/kernel/perfmon.c 2116 */;
	char *cocci_id/* arch/ia64/kernel/perfmon.c 2116 */;
	fl_owner_t cocci_id/* arch/ia64/kernel/perfmon.c 1767 */;
	long cocci_id/* arch/ia64/kernel/perfmon.c 1637 */;
	poll_table *cocci_id/* arch/ia64/kernel/perfmon.c 1603 */;
	__poll_t cocci_id/* arch/ia64/kernel/perfmon.c 1602 */;
	const char __user *cocci_id/* arch/ia64/kernel/perfmon.c 1595 */;
	pfm_msg_t cocci_id/* arch/ia64/kernel/perfmon.c 1523 */;
	char __user *cocci_id/* arch/ia64/kernel/perfmon.c 1502 */;
	size_t cocci_id/* arch/ia64/kernel/perfmon.c 1502 */;
	ssize_t cocci_id/* arch/ia64/kernel/perfmon.c 1501 */;
	int __init cocci_id/* arch/ia64/kernel/perfmon.c 1486 */;
	struct vfsmount *cocci_id/* arch/ia64/kernel/perfmon.c 1484 */;
	pfm_buffer_fmt_t cocci_id/* arch/ia64/kernel/perfmon.c 1208 */;
	struct list_head *cocci_id/* arch/ia64/kernel/perfmon.c 1204 */;
	pfm_uuid_t cocci_id/* arch/ia64/kernel/perfmon.c 1202 */;
	pfm_buffer_fmt_t *cocci_id/* arch/ia64/kernel/perfmon.c 1201 */;
	pfm_ovfl_ctrl_t *cocci_id/* arch/ia64/kernel/perfmon.c 1186 */;
	unsigned long *cocci_id/* arch/ia64/kernel/perfmon.c 1159 */;
	unsigned int cocci_id/* arch/ia64/kernel/perfmon.c 1159 */;
	__typeof__(pfm_context_t *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct task_struct *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
