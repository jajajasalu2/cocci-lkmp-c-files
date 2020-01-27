cocci_test_suite() {
	int __init cocci_id/* arch/x86/kernel/nmi.c 99 */;
	char *cocci_id/* arch/x86/kernel/nmi.c 88 */;
	struct nmi_stats {
		unsigned int normal;
		unsigned int unknown;
		unsigned int external;
		unsigned int swallow;
	} cocci_id/* arch/x86/kernel/nmi.c 70 */;
	long cocci_id/* arch/x86/kernel/nmi.c 513 */;
	struct cea_exception_stacks *cocci_id/* arch/x86/kernel/nmi.c 496 */;
	bool notrace cocci_id/* arch/x86/kernel/nmi.c 494 */;
	struct nmi_desc cocci_id/* arch/x86/kernel/nmi.c 49 */[NMI_MAX];
	enum nmi_states{NMI_NOT_RUNNING=0, NMI_EXECUTING, NMI_LATCHED,} cocci_id/* arch/x86/kernel/nmi.c 469 */;
	struct nmi_desc {
		raw_spinlock_t lock;
		struct list_head head;
	} cocci_id/* arch/x86/kernel/nmi.c 44 */;
	bool cocci_id/* arch/x86/kernel/nmi.c 316 */;
	unsigned char cocci_id/* arch/x86/kernel/nmi.c 314 */;
	struct pt_regs *cocci_id/* arch/x86/kernel/nmi.c 312 */;
	void cocci_id/* arch/x86/kernel/nmi.c 312 */;
	const char *cocci_id/* arch/x86/kernel/nmi.c 192 */;
	unsigned long cocci_id/* arch/x86/kernel/nmi.c 162 */;
	struct nmi_desc *cocci_id/* arch/x86/kernel/nmi.c 161 */;
	struct nmiaction *cocci_id/* arch/x86/kernel/nmi.c 159 */;
	unsigned int cocci_id/* arch/x86/kernel/nmi.c 159 */;
	int cocci_id/* arch/x86/kernel/nmi.c 159 */;
	u64 cocci_id/* arch/x86/kernel/nmi.c 137 */;
	struct nmiaction cocci_id/* arch/x86/kernel/nmi.c 109 */;
	struct irq_work *cocci_id/* arch/x86/kernel/nmi.c 107 */;
	__typeof__(struct nmi_stats) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(enum nmi_states) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(bool) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
