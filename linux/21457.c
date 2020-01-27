cocci_test_suite() {
	size_t cocci_id/* arch/arm64/kernel/traps.c 996 */;
	struct break_hook cocci_id/* arch/arm64/kernel/traps.c 980 */;
	unsigned long cocci_id/* arch/arm64/kernel/traps.c 941 */;
	void cocci_id/* arch/arm64/kernel/traps.c 941 */;
	const bool cocci_id/* arch/arm64/kernel/traps.c 906 */;
	struct stackframe cocci_id/* arch/arm64/kernel/traps.c 88 */;
	bool cocci_id/* arch/arm64/kernel/traps.c 872 */;
	void __noreturn cocci_id/* arch/arm64/kernel/traps.c 857 */;
	const char *cocci_id/* arch/arm64/kernel/traps.c 741 */[];
	u32 *cocci_id/* arch/arm64/kernel/traps.c 73 */;
	const struct sys64_hook *cocci_id/* arch/arm64/kernel/traps.c 683 */;
	u64 cocci_id/* arch/arm64/kernel/traps.c 665 */;
	const struct sys64_hook cocci_id/* arch/arm64/kernel/traps.c 652 */[];
	char cocci_id/* arch/arm64/kernel/traps.c 64 */[sizeof("00000000 ") * 5 + 2 + 1];
	unsigned int cocci_id/* arch/arm64/kernel/traps.c 638 */;
	u32 cocci_id/* arch/arm64/kernel/traps.c 616 */;
	void *cocci_id/* arch/arm64/kernel/traps.c 58 */;
	struct sys64_hook {
		unsigned int esr_mask;
		unsigned int esr_val;
		void (*handler)(unsigned int esr, struct pt_regs *regs);
	} cocci_id/* arch/arm64/kernel/traps.c 521 */;
	__le32 __user *cocci_id/* arch/arm64/kernel/traps.c 335 */;
	__le16 __user *cocci_id/* arch/arm64/kernel/traps.c 321 */;
	__le16 cocci_id/* arch/arm64/kernel/traps.c 320 */;
	__le32 *cocci_id/* arch/arm64/kernel/traps.c 315 */;
	__le32 cocci_id/* arch/arm64/kernel/traps.c 314 */;
	int (*cocci_id/* arch/arm64/kernel/traps.c 310 */)(struct pt_regs *regs,
							   u32 instr);
	struct undef_hook *cocci_id/* arch/arm64/kernel/traps.c 307 */;
	short cocci_id/* arch/arm64/kernel/traps.c 243 */;
	void __user *cocci_id/* arch/arm64/kernel/traps.c 233 */;
	struct task_struct *cocci_id/* arch/arm64/kernel/traps.c 213 */;
	const char *cocci_id/* arch/arm64/kernel/traps.c 152 */;
	struct pt_regs *cocci_id/* arch/arm64/kernel/traps.c 152 */;
	int cocci_id/* arch/arm64/kernel/traps.c 152 */;
	unsigned long *cocci_id/* arch/arm64/kernel/traps.c 139 */;
	void __init cocci_id/* arch/arm64/kernel/traps.c 1048 */;
	int __init cocci_id/* arch/arm64/kernel/traps.c 1035 */;
	__typeof__(unsigned long[OVERFLOW_STACK_SIZE / sizeof(long)]) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
