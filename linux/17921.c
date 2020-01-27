cocci_test_suite() {
	unsigned long cocci_id/* arch/sparc/kernel/traps_64.c 990 */;
	unsigned int cocci_id/* arch/sparc/kernel/traps_64.c 989 */;
	void cocci_id/* arch/sparc/kernel/traps_64.c 987 */;
	struct cheetah_err_info *cocci_id/* arch/sparc/kernel/traps_64.c 906 */;
	char cocci_id/* arch/sparc/kernel/traps_64.c 90 */[36];
	struct pt_regs *cocci_id/* arch/sparc/kernel/traps_64.c 88 */;
	long cocci_id/* arch/sparc/kernel/traps_64.c 88 */;
	void __init cocci_id/* arch/sparc/kernel/traps_64.c 854 */;
	unsigned int cocci_id/* arch/sparc/kernel/traps_64.c 842 */[];
	struct afsr_error_table *cocci_id/* arch/sparc/kernel/traps_64.c 822 */;
	struct afsr_error_table cocci_id/* arch/sparc/kernel/traps_64.c 699 */[];
	const char cocci_id/* arch/sparc/kernel/traps_64.c 693 */[];
	struct afsr_error_table {
		unsigned long mask;
		const char *name;
	} cocci_id/* arch/sparc/kernel/traps_64.c 656 */;
	struct tl1_traplog {
		struct {
			unsigned long tstate;
			unsigned long tpc;
			unsigned long tnpc;
			unsigned long tt;
		} trapstack[4];
		unsigned long tl;
	} cocci_id/* arch/sparc/kernel/traps_64.c 59 */;
	char cocci_id/* arch/sparc/kernel/traps_64.c 489 */[64];
	unsigned short cocci_id/* arch/sparc/kernel/traps_64.c 488 */;
	char cocci_id/* arch/sparc/kernel/traps_64.c 449 */[];
	struct tsb_config cocci_id/* arch/sparc/kernel/traps_64.c 2918 */;
	struct trap_per_cpu cocci_id/* arch/sparc/kernel/traps_64.c 2878 */;
	struct thread_info cocci_id/* arch/sparc/kernel/traps_64.c 2851 */;
	void cocci_id/* arch/sparc/kernel/traps_64.c 2843 */(void);
	struct trap_per_cpu *cocci_id/* arch/sparc/kernel/traps_64.c 2837 */;
	void notrace cocci_id/* arch/sparc/kernel/traps_64.c 2834 */;
	struct trap_per_cpu cocci_id/* arch/sparc/kernel/traps_64.c 2828 */[NR_CPUS];
	u64 cocci_id/* arch/sparc/kernel/traps_64.c 2827 */[NR_CPUS];
	u32 __user *cocci_id/* arch/sparc/kernel/traps_64.c 2592 */;
	u32 cocci_id/* arch/sparc/kernel/traps_64.c 2582 */;
	unsigned int __user *cocci_id/* arch/sparc/kernel/traps_64.c 2564 */;
	unsigned int *cocci_id/* arch/sparc/kernel/traps_64.c 2558 */;
	unsigned char cocci_id/* arch/sparc/kernel/traps_64.c 255 */;
	struct reg_window *cocci_id/* arch/sparc/kernel/traps_64.c 2544 */;
	struct thread_info *cocci_id/* arch/sparc/kernel/traps_64.c 2543 */;
	bool cocci_id/* arch/sparc/kernel/traps_64.c 253 */;
	char *cocci_id/* arch/sparc/kernel/traps_64.c 2525 */;
	void __noreturn cocci_id/* arch/sparc/kernel/traps_64.c 2525 */;
	struct ftrace_ret_stack *cocci_id/* arch/sparc/kernel/traps_64.c 2503 */;
	struct sparc_stackf *cocci_id/* arch/sparc/kernel/traps_64.c 2481 */;
	struct task_struct *cocci_id/* arch/sparc/kernel/traps_64.c 2455 */;
	unsigned long *cocci_id/* arch/sparc/kernel/traps_64.c 2455 */;
	unsigned int cocci_id/* arch/sparc/kernel/traps_64.c 2441 */[9];
	enum ctx_state cocci_id/* arch/sparc/kernel/traps_64.c 2407 */;
	struct fpustate *cocci_id/* arch/sparc/kernel/traps_64.c 2365 */;
	struct sun4v_error_entry cocci_id/* arch/sparc/kernel/traps_64.c 2036 */;
	u64 cocci_id/* arch/sparc/kernel/traps_64.c 2000 */;
	u64 *cocci_id/* arch/sparc/kernel/traps_64.c 1969 */;
	atomic_t *cocci_id/* arch/sparc/kernel/traps_64.c 1967 */;
	struct sun4v_error_entry *cocci_id/* arch/sparc/kernel/traps_64.c 1966 */;
	const char *cocci_id/* arch/sparc/kernel/traps_64.c 1897 */[];
	const char *cocci_id/* arch/sparc/kernel/traps_64.c 1879 */[SUN4V_ERR_TYPE_NUM];
	u8 cocci_id/* arch/sparc/kernel/traps_64.c 1877 */;
	atomic_t cocci_id/* arch/sparc/kernel/traps_64.c 1875 */;
	struct sun4v_error_entry {
		u64 err_handle;
		u64 err_stick;
		u8 reserved_1[3];
		u8 err_type;
#define SUN4V_ERR_TYPE_UNDEFINED 0
#define SUN4V_ERR_TYPE_UNCORRECTED_RES 1
#define SUN4V_ERR_TYPE_PRECISE_NONRES 2
#define SUN4V_ERR_TYPE_DEFERRED_NONRES 3
#define SUN4V_ERR_TYPE_SHUTDOWN_RQST 4
#define SUN4V_ERR_TYPE_DUMP_CORE 5
#define SUN4V_ERR_TYPE_SP_STATE_CHANGE 6
#define SUN4V_ERR_TYPE_NUM 7
		u32 err_attrs;
#define SUN4V_ERR_ATTRS_PROCESSOR 0x00000001
#define SUN4V_ERR_ATTRS_MEMORY 0x00000002
#define SUN4V_ERR_ATTRS_PIO 0x00000004
#define SUN4V_ERR_ATTRS_INT_REGISTERS 0x00000008
#define SUN4V_ERR_ATTRS_FPU_REGISTERS 0x00000010
#define SUN4V_ERR_ATTRS_SHUTDOWN_RQST 0x00000020
#define SUN4V_ERR_ATTRS_ASR 0x00000040
#define SUN4V_ERR_ATTRS_ASI 0x00000080
#define SUN4V_ERR_ATTRS_PRIV_REG 0x00000100
#define SUN4V_ERR_ATTRS_SPSTATE_MSK 0x00000600
#define SUN4V_ERR_ATTRS_MCD 0x00000800
#define SUN4V_ERR_ATTRS_SPSTATE_SHFT 9
#define SUN4V_ERR_ATTRS_MODE_MSK 0x03000000
#define SUN4V_ERR_ATTRS_MODE_SHFT 24
#define SUN4V_ERR_ATTRS_RES_QUEUE_FULL 0x80000000
#define SUN4V_ERR_SPSTATE_FAULTED 0
#define SUN4V_ERR_SPSTATE_AVAILABLE 1
#define SUN4V_ERR_SPSTATE_NOT_PRESENT 2
#define SUN4V_ERR_MODE_USER 1
#define SUN4V_ERR_MODE_PRIV 2
		u64 err_raddr;
		u32 err_size;
		u16 err_cpu;
		u16 err_secs;
		u8 err_asi;
		u8 reserved_2;
		u16 err_asr;
#define SUN4V_ERR_ASR_VALID 0x8000
		u32 reserved_3;
		u64 reserved_4;
		u64 reserved_5;
	} cocci_id/* arch/sparc/kernel/traps_64.c 1803 */;
	const struct exception_table_entry *cocci_id/* arch/sparc/kernel/traps_64.c 1726 */;
	int cocci_id/* arch/sparc/kernel/traps_64.c 1477 */;
	struct cheetah_err_info cocci_id/* arch/sparc/kernel/traps_64.c 1476 */;
	dimm_printer_t cocci_id/* arch/sparc/kernel/traps_64.c 138 */;
	struct tl1_traplog *cocci_id/* arch/sparc/kernel/traps_64.c 122 */;
	void *cocci_id/* arch/sparc/kernel/traps_64.c 1185 */;
	char cocci_id/* arch/sparc/kernel/traps_64.c 1174 */[256];
	const char *cocci_id/* arch/sparc/kernel/traps_64.c 1159 */;
	void __user *cocci_id/* arch/sparc/kernel/traps_64.c 111 */;
	unsigned char cocci_id/* arch/sparc/kernel/traps_64.c 1101 */[];
}
