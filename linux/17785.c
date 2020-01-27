cocci_test_suite() {
	struct bpt {
		unsigned long address;
		unsigned int instr[2];
		atomic_t ref_count;
		int enabled;
		unsigned long pad;
	} cocci_id/* arch/powerpc/xmon/xmon.c 98 */;
	struct timespec64 cocci_id/* arch/powerpc/xmon/xmon.c 975 */;
	long *cocci_id/* arch/powerpc/xmon/xmon.c 95 */[NR_CPUS];
	struct arch_hw_breakpoint cocci_id/* arch/powerpc/xmon/xmon.c 931 */;
	long cocci_id/* arch/powerpc/xmon/xmon.c 92 */[JMP_BUF_LEN];
	unsigned int *cocci_id/* arch/powerpc/xmon/xmon.c 918 */;
	char cocci_id/* arch/powerpc/xmon/xmon.c 89 */[128];
	int cocci_id/* arch/powerpc/xmon/xmon.c 847 */;
	struct bpt *cocci_id/* arch/powerpc/xmon/xmon.c 845 */;
	unsigned long cocci_id/* arch/powerpc/xmon/xmon.c 82 */;
	irqreturn_t cocci_id/* arch/powerpc/xmon/xmon.c 743 */;
	cpumask_t cocci_id/* arch/powerpc/xmon/xmon.c 67 */;
	struct spu *cocci_id/* arch/powerpc/xmon/xmon.c 4070 */;
	struct list_head *cocci_id/* arch/powerpc/xmon/xmon.c 3955 */;
	struct spu_info cocci_id/* arch/powerpc/xmon/xmon.c 3953 */[XMON_NUM_SPUS];
	struct spu_info {
		struct spu *spu;
		u64 saved_mfc_sr1_RW;
		u32 saved_spu_runcntl_RW;
		unsigned long dump_addr;
		u8 stopped_ok;
	} cocci_id/* arch/powerpc/xmon/xmon.c 3943 */;
	void __init cocci_id/* arch/powerpc/xmon/xmon.c 3933 */;
	struct rtas_args cocci_id/* arch/powerpc/xmon/xmon.c 393 */;
	int __init cocci_id/* arch/powerpc/xmon/xmon.c 3902 */;
	struct sysrq_key_op cocci_id/* arch/powerpc/xmon/xmon.c 3832 */;
	const char *cocci_id/* arch/powerpc/xmon/xmon.c 3651 */[];
	char cocci_id/* arch/powerpc/xmon/xmon.c 3482 */[64];
	void __percpu *cocci_id/* arch/powerpc/xmon/xmon.c 3481 */;
	char cocci_id/* arch/powerpc/xmon/xmon.c 3447 */[256];
	char cocci_id/* arch/powerpc/xmon/xmon.c 3327 */[8];
	const char *cocci_id/* arch/powerpc/xmon/xmon.c 3304 */[N_PTREGS];
	callfunc_t cocci_id/* arch/powerpc/xmon/xmon.c 3259 */;
	unsigned long (*cocci_id/* arch/powerpc/xmon/xmon.c 3256 */)(unsigned long,
								     unsigned long,
								     unsigned long,
								     unsigned long,
								     unsigned long,
								     unsigned long,
								     unsigned long,
								     unsigned long);
	unsigned long cocci_id/* arch/powerpc/xmon/xmon.c 3253 */[8];
	pte_t *cocci_id/* arch/powerpc/xmon/xmon.c 3133 */;
	pmd_t *cocci_id/* arch/powerpc/xmon/xmon.c 3132 */;
	pud_t *cocci_id/* arch/powerpc/xmon/xmon.c 3131 */;
	pgd_t *cocci_id/* arch/powerpc/xmon/xmon.c 3130 */;
	struct mm_struct *cocci_id/* arch/powerpc/xmon/xmon.c 3129 */;
	struct task_struct *cocci_id/* arch/powerpc/xmon/xmon.c 3128 */;
	pte_t cocci_id/* arch/powerpc/xmon/xmon.c 3112 */;
	char cocci_id/* arch/powerpc/xmon/xmon.c 3086 */;
	loff_t cocci_id/* arch/powerpc/xmon/xmon.c 2929 */;
	ssize_t cocci_id/* arch/powerpc/xmon/xmon.c 2928 */;
	size_t cocci_id/* arch/powerpc/xmon/xmon.c 2900 */;
	unsigned char cocci_id/* arch/powerpc/xmon/xmon.c 2899 */[128];
	struct kmsg_dumper cocci_id/* arch/powerpc/xmon/xmon.c 2898 */;
	const char *cocci_id/* arch/powerpc/xmon/xmon.c 2859 */;
	unsigned char cocci_id/* arch/powerpc/xmon/xmon.c 2852 */[4];
	instruction_dump_func cocci_id/* arch/powerpc/xmon/xmon.c 2847 */;
	int (*cocci_id/* arch/powerpc/xmon/xmon.c 2843 */)(unsigned long inst,
							   unsigned long addr);
	char cocci_id/* arch/powerpc/xmon/xmon.c 2720 */[];
	u64 *cocci_id/* arch/powerpc/xmon/xmon.c 2707 */;
	u32 *cocci_id/* arch/powerpc/xmon/xmon.c 2706 */;
	u16 *cocci_id/* arch/powerpc/xmon/xmon.c 2705 */;
	u64 cocci_id/* arch/powerpc/xmon/xmon.c 2689 */;
	unsigned char cocci_id/* arch/powerpc/xmon/xmon.c 2687 */[16];
	struct irq_data *cocci_id/* arch/powerpc/xmon/xmon.c 2641 */;
	struct irq_desc *cocci_id/* arch/powerpc/xmon/xmon.c 2638 */;
	u32 cocci_id/* arch/powerpc/xmon/xmon.c 2630 */;
	struct paca_struct *cocci_id/* arch/powerpc/xmon/xmon.c 2419 */;
	unsigned char *cocci_id/* arch/powerpc/xmon/xmon.c 2157 */;
	char *cocci_id/* arch/powerpc/xmon/xmon.c 2132 */[];
	volatile int cocci_id/* arch/powerpc/xmon/xmon.c 2051 */;
	bool cocci_id/* arch/powerpc/xmon/xmon.c 1945 */;
	void cocci_id/* arch/powerpc/xmon/xmon.c 1822 */(int spr,
							 unsigned long value);
	unsigned long cocci_id/* arch/powerpc/xmon/xmon.c 1821 */(int spr,
								  unsigned long default_value);
	const char *cocci_id/* arch/powerpc/xmon/xmon.c 180 */(unsigned long vec);
	void *cocci_id/* arch/powerpc/xmon/xmon.c 1797 */;
	void cocci_id/* arch/powerpc/xmon/xmon.c 178 */(unsigned long address,
							const char *mid,
							const char *after);
	void cocci_id/* arch/powerpc/xmon/xmon.c 176 */(unsigned long sp,
							unsigned long lr,
							unsigned long pc);
	struct pt_regs cocci_id/* arch/powerpc/xmon/xmon.c 1734 */;
	void cocci_id/* arch/powerpc/xmon/xmon.c 171 */(void);
	const struct bug_entry *cocci_id/* arch/powerpc/xmon/xmon.c 1666 */;
	struct pt_regs *cocci_id/* arch/powerpc/xmon/xmon.c 1652 */;
	void cocci_id/* arch/powerpc/xmon/xmon.c 1652 */;
	struct bpt *cocci_id/* arch/powerpc/xmon/xmon.c 165 */(unsigned long pc,
							       unsigned long *offp);
	struct bpt *cocci_id/* arch/powerpc/xmon/xmon.c 164 */(unsigned long pc);
	void cocci_id/* arch/powerpc/xmon/xmon.c 158 */(int, unsigned long);
	int cocci_id/* arch/powerpc/xmon/xmon.c 157 */(int, unsigned long *);
	void cocci_id/* arch/powerpc/xmon/xmon.c 156 */(char *);
	unsigned long *cocci_id/* arch/powerpc/xmon/xmon.c 1544 */;
	void cocci_id/* arch/powerpc/xmon/xmon.c 153 */(char *, int);
	int cocci_id/* arch/powerpc/xmon/xmon.c 152 */(int);
	int cocci_id/* arch/powerpc/xmon/xmon.c 150 */(unsigned long *valp);
	void cocci_id/* arch/powerpc/xmon/xmon.c 148 */(unsigned char *,
							unsigned char *,
							unsigned, unsigned);
	void cocci_id/* arch/powerpc/xmon/xmon.c 145 */(int);
	void cocci_id/* arch/powerpc/xmon/xmon.c 142 */(struct pt_regs *);
	const char cocci_id/* arch/powerpc/xmon/xmon.c 1370 */[];
	char *cocci_id/* arch/powerpc/xmon/xmon.c 1348 */;
	unsigned int cocci_id/* arch/powerpc/xmon/xmon.c 1329 */;
	long cocci_id/* arch/powerpc/xmon/xmon.c 1327 */;
	unsigned char cocci_id/* arch/powerpc/xmon/xmon.c 1307 */;
	unsigned short cocci_id/* arch/powerpc/xmon/xmon.c 1306 */;
	int cocci_id/* arch/powerpc/xmon/xmon.c 130 */(unsigned long, long,
						       int);
	void cocci_id/* arch/powerpc/xmon/xmon.c 129 */(unsigned long, long);
	void cocci_id/* arch/powerpc/xmon/xmon.c 128 */(unsigned long);
	unsigned short cocci_id/* arch/powerpc/xmon/xmon.c 1265 */[256];
	int cocci_id/* arch/powerpc/xmon/xmon.c 126 */(void);
	void cocci_id/* arch/powerpc/xmon/xmon.c 124 */(unsigned char *, int);
	int cocci_id/* arch/powerpc/xmon/xmon.c 121 */(unsigned long, void *,
						       int);
	int cocci_id/* arch/powerpc/xmon/xmon.c 120 */(struct pt_regs *);
	unsigned cocci_id/* arch/powerpc/xmon/xmon.c 115 */;
	struct bpt cocci_id/* arch/powerpc/xmon/xmon.c 113 */;
	struct bpt cocci_id/* arch/powerpc/xmon/xmon.c 112 */[NBPTS];
}
