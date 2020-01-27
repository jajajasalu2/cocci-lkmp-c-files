cocci_test_suite() {
	typeof(*n) cocci_id/* arch/x86/kernel/kvm.c 91 */;
	unsigned int cocci_id/* arch/x86/kernel/kvm.c 886 */;
	struct hlist_node *cocci_id/* arch/x86/kernel/kvm.c 87 */;
	u32 cocci_id/* arch/x86/kernel/kvm.c 85 */;
	struct kvm_task_sleep_node *cocci_id/* arch/x86/kernel/kvm.c 84 */;
	struct kvm_task_sleep_head *cocci_id/* arch/x86/kernel/kvm.c 84 */;
	bool cocci_id/* arch/x86/kernel/kvm.c 810 */(long);
	struct kvm_steal_time *cocci_id/* arch/x86/kernel/kvm.c 800 */;
	bool cocci_id/* arch/x86/kernel/kvm.c 798 */;
	long cocci_id/* arch/x86/kernel/kvm.c 798 */;
	struct kvm_task_sleep_head {
		raw_spinlock_t lock;
		struct hlist_head list;
	} cocci_id/* arch/x86/kernel/kvm.c 79 */[KVM_TASK_SLEEP_HASHSIZE];
	u8 *cocci_id/* arch/x86/kernel/kvm.c 771 */;
	const __initconst struct hypervisor_x86 cocci_id/* arch/x86/kernel/kvm.c 718 */;
	struct kvm_task_sleep_node {
		struct hlist_node link;
		struct swait_queue_head wq;
		u32 token;
		int cpu;
		bool halted;
	} cocci_id/* arch/x86/kernel/kvm.c 71 */;
	uint32_t __init cocci_id/* arch/x86/kernel/kvm.c 699 */;
	uint32_t cocci_id/* arch/x86/kernel/kvm.c 661 */;
	void cocci_id/* arch/x86/kernel/kvm.c 661 */;
	struct cpumask *cocci_id/* arch/x86/kernel/kvm.c 590 */;
	u8 cocci_id/* arch/x86/kernel/kvm.c 587 */;
	const struct flush_tlb_info *cocci_id/* arch/x86/kernel/kvm.c 585 */;
	struct kvm_steal_time cocci_id/* arch/x86/kernel/kvm.c 58 */;
	void __init cocci_id/* arch/x86/kernel/kvm.c 577 */;
	struct kvm_vcpu_pv_apf_data cocci_id/* arch/x86/kernel/kvm.c 57 */;
	struct cpumask cocci_id/* arch/x86/kernel/kvm.c 497 */;
	unsigned long *cocci_id/* arch/x86/kernel/kvm.c 477 */;
	u64 cocci_id/* arch/x86/kernel/kvm.c 443 */;
	__uint128_t cocci_id/* arch/x86/kernel/kvm.c 441 */;
	unsigned long cocci_id/* arch/x86/kernel/kvm.c 437 */;
	const struct cpumask *cocci_id/* arch/x86/kernel/kvm.c 435 */;
	int cocci_id/* arch/x86/kernel/kvm.c 435 */;
	void *cocci_id/* arch/x86/kernel/kvm.c 405 */;
	char *cocci_id/* arch/x86/kernel/kvm.c 40 */;
	int __init cocci_id/* arch/x86/kernel/kvm.c 40 */;
	struct notifier_block cocci_id/* arch/x86/kernel/kvm.c 376 */;
	struct notifier_block *cocci_id/* arch/x86/kernel/kvm.c 368 */;
	unsigned long long cocci_id/* arch/x86/kernel/kvm.c 291 */;
	enum ctx_state cocci_id/* arch/x86/kernel/kvm.c 248 */;
	struct pt_regs *cocci_id/* arch/x86/kernel/kvm.c 246 */;
	struct kvm_task_sleep_node cocci_id/* arch/x86/kernel/kvm.c 107 */;
	__typeof__(cpumask_var_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
