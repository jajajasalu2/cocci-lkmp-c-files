cocci_test_suite() {
	struct uprobe_task *cocci_id/* arch/s390/kernel/uprobes.c 81 */;
	unsigned short cocci_id/* arch/s390/kernel/uprobes.c 54 */;
	struct task_struct *cocci_id/* arch/s390/kernel/uprobes.c 45 */;
	bool cocci_id/* arch/s390/kernel/uprobes.c 383 */;
	s64 __user *cocci_id/* arch/s390/kernel/uprobes.c 346 */;
	u32 __user *cocci_id/* arch/s390/kernel/uprobes.c 311 */;
	s32 __user *cocci_id/* arch/s390/kernel/uprobes.c 308 */;
	u64 __user *cocci_id/* arch/s390/kernel/uprobes.c 305 */;
	s16 __user *cocci_id/* arch/s390/kernel/uprobes.c 296 */;
	u16 __user *cocci_id/* arch/s390/kernel/uprobes.c 293 */;
	unsigned int cocci_id/* arch/s390/kernel/uprobes.c 273 */;
	struct insn_ril *cocci_id/* arch/s390/kernel/uprobes.c 272 */;
	union split_register *cocci_id/* arch/s390/kernel/uprobes.c 271 */;
	union split_register {
		u64 u64;
		u32 u32[2];
		u16 u16[4];
		s64 s64;
		s32 s32[2];
		s16 s16[4];
	} cocci_id/* arch/s390/kernel/uprobes.c 237 */;
	struct insn_ril {
		u8 opc0;
		u8 reg:4;
		u8 opc1:4;
		s32 disp;
	}__packed cocci_id/* arch/s390/kernel/uprobes.c 230 */;
	struct mm_struct *cocci_id/* arch/s390/kernel/uprobes.c 23 */;
	int cocci_id/* arch/s390/kernel/uprobes.c 23 */;
	void __force *cocci_id/* arch/s390/kernel/uprobes.c 204 */;
	__typeof__(ptr) cocci_id/* arch/s390/kernel/uprobes.c 193 */;
	u64 __force cocci_id/* arch/s390/kernel/uprobes.c 181 */;
	__typeof__(*(ptr)) cocci_id/* arch/s390/kernel/uprobes.c 176 */;
	psw_t *cocci_id/* arch/s390/kernel/uprobes.c 164 */;
	unsigned long cocci_id/* arch/s390/kernel/uprobes.c 164 */;
	void cocci_id/* arch/s390/kernel/uprobes.c 164 */;
	enum rp_check cocci_id/* arch/s390/kernel/uprobes.c 153 */;
	struct return_instance *cocci_id/* arch/s390/kernel/uprobes.c 153 */;
	struct pt_regs *cocci_id/* arch/s390/kernel/uprobes.c 135 */;
	struct arch_uprobe *cocci_id/* arch/s390/kernel/uprobes.c 135 */;
	struct die_args *cocci_id/* arch/s390/kernel/uprobes.c 114 */;
	void *cocci_id/* arch/s390/kernel/uprobes.c 112 */;
	struct notifier_block *cocci_id/* arch/s390/kernel/uprobes.c 111 */;
}
