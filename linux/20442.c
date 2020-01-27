cocci_test_suite() {
	atomic_t cocci_id/* arch/x86/kernel/cpu/mce/core.c 948 */;
	struct mca_config cocci_id/* arch/x86/kernel/cpu/mce/core.c 87 */;
	struct mce_vendor_flags cocci_id/* arch/x86/kernel/cpu/mce/core.c 85 */;
	struct mce_bank_dev cocci_id/* arch/x86/kernel/cpu/mce/core.c 83 */[MAX_NR_BANKS];
	char **cocci_id/* arch/x86/kernel/cpu/mce/core.c 807 */;
	struct mce_bank_dev {
		struct device_attribute attr;
		char attrname[ATTR_LEN];
		u8 bank;
	} cocci_id/* arch/x86/kernel/cpu/mce/core.c 78 */;
	struct mce_bank cocci_id/* arch/x86/kernel/cpu/mce/core.c 74 */[MAX_NR_BANKS];
	struct mce_bank {
		u64 ctl;
		bool init;
	} cocci_id/* arch/x86/kernel/cpu/mce/core.c 70 */;
	mce_banks_t *cocci_id/* arch/x86/kernel/cpu/mce/core.c 697 */;
	struct notifier_block *cocci_id/* arch/x86/kernel/cpu/mce/core.c 619 */;
	struct notifier_block cocci_id/* arch/x86/kernel/cpu/mce/core.c 592 */;
	struct irq_work *cocci_id/* arch/x86/kernel/cpu/mce/core.c 475 */;
	unsigned cocci_id/* arch/x86/kernel/cpu/mce/core.c 376 */;
	struct mce_evt_llist *cocci_id/* arch/x86/kernel/cpu/mce/core.c 317 */;
	struct llist_node *cocci_id/* arch/x86/kernel/cpu/mce/core.c 316 */;
	const char *cocci_id/* arch/x86/kernel/cpu/mce/core.c 313 */;
	void __init cocci_id/* arch/x86/kernel/cpu/mce/core.c 2582 */;
	unsigned long cocci_id/* arch/x86/kernel/cpu/mce/core.c 257 */;
	u64 *cocci_id/* arch/x86/kernel/cpu/mce/core.c 2566 */;
	struct dentry *cocci_id/* arch/x86/kernel/cpu/mce/core.c 2547 */;
	int __init cocci_id/* arch/x86/kernel/cpu/mce/core.c 2539 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/mce/core.c 2425 */;
	struct mca_msr_regs cocci_id/* arch/x86/kernel/cpu/mce/core.c 237 */;
	struct device *cocci_id/* arch/x86/kernel/cpu/mce/core.c 2326 */;
	cpumask_var_t cocci_id/* arch/x86/kernel/cpu/mce/core.c 2316 */;
	struct device_attribute *cocci_id/* arch/x86/kernel/cpu/mce/core.c 2303 */[];
	struct dev_ext_attribute cocci_id/* arch/x86/kernel/cpu/mce/core.c 2288 */;
	size_t cocci_id/* arch/x86/kernel/cpu/mce/core.c 2191 */;
	ssize_t cocci_id/* arch/x86/kernel/cpu/mce/core.c 2190 */;
	struct mce_bank_dev cocci_id/* arch/x86/kernel/cpu/mce/core.c 2170 */;
	struct mce_bank_dev *cocci_id/* arch/x86/kernel/cpu/mce/core.c 2168 */;
	struct device_attribute *cocci_id/* arch/x86/kernel/cpu/mce/core.c 2168 */;
	struct bus_type cocci_id/* arch/x86/kernel/cpu/mce/core.c 2161 */;
	struct syscore_ops cocci_id/* arch/x86/kernel/cpu/mce/core.c 2117 */;
	u32 cocci_id/* arch/x86/kernel/cpu/mce/core.c 207 */;
	void *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1969 */;
	void (*cocci_id/* arch/x86/kernel/cpu/mce/core.c 1904 */)(struct pt_regs *,
								  long error_code);
	struct timer_list *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1882 */;
	struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1732 */;
	mce_banks_t cocci_id/* arch/x86/kernel/cpu/mce/core.c 1548 */;
	enum mcp_flags cocci_id/* arch/x86/kernel/cpu/mce/core.c 1547 */;
	u8 cocci_id/* arch/x86/kernel/cpu/mce/core.c 1521 */;
	unsigned long (*cocci_id/* arch/x86/kernel/cpu/mce/core.c 1404 */)(unsigned long interval);
	void (*cocci_id/* arch/x86/kernel/cpu/mce/core.c 124 */)(int bank,
								 struct mce *m,
								 struct pt_regs *regs);
	struct mce cocci_id/* arch/x86/kernel/cpu/mce/core.c 1236 */;
	char *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1235 */;
	struct pt_regs *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1229 */;
	long cocci_id/* arch/x86/kernel/cpu/mce/core.c 1229 */;
	struct irq_work cocci_id/* arch/x86/kernel/cpu/mce/core.c 122 */;
	struct work_struct cocci_id/* arch/x86/kernel/cpu/mce/core.c 121 */;
	struct mca_config *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1154 */;
	struct mce_bank *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1153 */;
	int *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1151 */;
	unsigned long *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1150 */;
	struct mce *cocci_id/* arch/x86/kernel/cpu/mce/core.c 1149 */;
	void cocci_id/* arch/x86/kernel/cpu/mce/core.c 1149 */;
	u64 cocci_id/* arch/x86/kernel/cpu/mce/core.c 1132 */;
	bool cocci_id/* arch/x86/kernel/cpu/mce/core.c 1128 */;
	int cocci_id/* arch/x86/kernel/cpu/mce/core.c 1128 */;
	__typeof__(struct timer_list) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct mce) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct device *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(mce_banks_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
