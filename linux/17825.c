cocci_test_suite() {
	char *cocci_id/* arch/ia64/kernel/traps.c 93 */;
	char cocci_id/* arch/ia64/kernel/traps.c 506 */[];
	struct {
		spinlock_t lock;
		u32 lock_owner;
		int lock_owner_depth;
	} cocci_id/* arch/ia64/kernel/traps.c 45 */;
	const char *cocci_id/* arch/ia64/kernel/traps.c 43 */;
	struct pt_regs *cocci_id/* arch/ia64/kernel/traps.c 43 */;
	long cocci_id/* arch/ia64/kernel/traps.c 43 */;
	const char *cocci_id/* arch/ia64/kernel/traps.c 423 */[];
	char cocci_id/* arch/ia64/kernel/traps.c 421 */[128];
	int cocci_id/* arch/ia64/kernel/traps.c 42 */;
	struct pt_regs cocci_id/* arch/ia64/kernel/traps.c 418 */;
	void __kprobes cocci_id/* arch/ia64/kernel/traps.c 415 */;
	struct illegal_op_return cocci_id/* arch/ia64/kernel/traps.c 396 */(struct pt_regs *,
									    unsigned long);
	struct illegal_op_return cocci_id/* arch/ia64/kernel/traps.c 386 */;
	struct illegal_op_return {
		unsigned long fkt,arg1,arg2,arg3;
	} cocci_id/* arch/ia64/kernel/traps.c 382 */;
	void __init cocci_id/* arch/ia64/kernel/traps.c 34 */;
	fpswa_interface_t *cocci_id/* arch/ia64/kernel/traps.c 31 */;
	struct fpu_swa_msg *cocci_id/* arch/ia64/kernel/traps.c 297 */;
	void __user *cocci_id/* arch/ia64/kernel/traps.c 292 */;
	struct fpu_swa_msg cocci_id/* arch/ia64/kernel/traps.c 277 */;
	struct fpu_swa_msg {
		unsigned long count;
		unsigned long time;
	} cocci_id/* arch/ia64/kernel/traps.c 271 */;
	unsigned long *cocci_id/* arch/ia64/kernel/traps.c 264 */;
	unsigned long cocci_id/* arch/ia64/kernel/traps.c 263 */;
	fp_state_low_volatile_t *cocci_id/* arch/ia64/kernel/traps.c 251 */;
	fpswa_ret_t cocci_id/* arch/ia64/kernel/traps.c 237 */;
	fp_state_t cocci_id/* arch/ia64/kernel/traps.c 236 */;
	long *cocci_id/* arch/ia64/kernel/traps.c 233 */;
	void *cocci_id/* arch/ia64/kernel/traps.c 233 */;
	struct task_struct *cocci_id/* arch/ia64/kernel/traps.c 205 */;
	struct ia64_psr *cocci_id/* arch/ia64/kernel/traps.c 193 */;
	void cocci_id/* arch/ia64/kernel/traps.c 190 */;
	void
__kprobes cocci_id/* arch/ia64/kernel/traps.c 100 */;
	__typeof__(struct fpu_swa_msg) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
