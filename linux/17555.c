cocci_test_suite() {
	int cocci_id/* arch/powerpc/oprofile/op_model_cell.c 952 */[];
	u32 cocci_id/* arch/powerpc/oprofile/op_model_cell.c 894 */;
	struct op_counter_config *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 892 */;
	struct pm_signal {
		u16 cpu;
		u16 sub_unit;
		short int signal_group;
		u8 bus_word;
		u8 bit;
	} cocci_id/* arch/powerpc/oprofile/op_model_cell.c 89 */;
	struct op_system_config *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 835 */;
	struct pmc_cntrl_data {
		unsigned long vcntr;
		unsigned long evnts;
		unsigned long masks;
		unsigned long enabled;
	} cocci_id/* arch/powerpc/oprofile/op_model_cell.c 79 */;
	struct timer_list *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 450 */;
	u32 *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 424 */;
	struct pm_signal *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 284 */;
	struct pm_signal cocci_id/* arch/powerpc/oprofile/op_model_cell.c 267 */;
	struct pm_signal cocci_id/* arch/powerpc/oprofile/op_model_cell.c 239 */[NR_PHYS_CTRS];
	unsigned char cocci_id/* arch/powerpc/oprofile/op_model_cell.c 185 */[NUM_INPUT_BUS_WORDS];
	u32 cocci_id/* arch/powerpc/oprofile/op_model_cell.c 178 */[NR_PHYS_CTRS];
	struct op_powerpc_model cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1701 */;
	struct timer_list cocci_id/* arch/powerpc/oprofile/op_model_cell.c 167 */;
	struct pt_regs *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1669 */;
	unsigned long cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1602 */;
	u64 cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1600 */;
	u64 cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1484 */[2];
	struct pmc_cntrl_data cocci_id/* arch/powerpc/oprofile/op_model_cell.c 138 */[NUM_THREADS][NR_PHYS_CTRS];
	unsigned long cocci_id/* arch/powerpc/oprofile/op_model_cell.c 137 */[MAX_NUMNODES * NUM_SPUS_PER_NODE];
	unsigned int cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1244 */;
	void cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1231 */;
	struct {
		u32 group_control;
		u32 debug_bus_control;
		struct pm_cntrl pm_cntrl;
		u32 pm07_cntrl[NR_PHYS_CTRS];
	} cocci_id/* arch/powerpc/oprofile/op_model_cell.c 122 */;
	struct notifier_block cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1121 */;
	struct pm_cntrl {
		u16 enable;
		u16 stop_at_max;
		u16 trace_mode;
		u16 freeze;
		u16 count_mode;
		u16 spu_addr_trace;
		u8 trace_buf_ovflw;
	} cocci_id/* arch/powerpc/oprofile/op_model_cell.c 112 */;
	struct cpufreq_freqs *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1114 */;
	struct notifier_block *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1111 */;
	void *cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1111 */;
	struct pm_signal cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1079 */[NUM_SPUS_PER_NODE];
	int cocci_id/* arch/powerpc/oprofile/op_model_cell.c 1050 */;
	enum{SUBFUNC_RESET=1, SUBFUNC_ACTIVATE=2, SUBFUNC_DEACTIVATE=3, PASSTHRU_IGNORE=0, PASSTHRU_ENABLE=1, PASSTHRU_DISABLE=2,} cocci_id/* arch/powerpc/oprofile/op_model_cell.c 102 */;
	__typeof__(unsigned long[NR_PHYS_CTRS]) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
