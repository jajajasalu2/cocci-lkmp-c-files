cocci_test_suite() {
	dispatch_init_table_t __initdata cocci_id/* arch/xtensa/kernel/traps.c 89 */[];
	struct {
		int cause;
		int fast;
		void *handler;
	} cocci_id/* arch/xtensa/kernel/traps.c 83 */;
	void cocci_id/* arch/xtensa/kernel/traps.c 68 */(struct pt_regs *);
	void cocci_id/* arch/xtensa/kernel/traps.c 66 */(struct pt_regs *,
							 unsigned long);
	void cocci_id/* arch/xtensa/kernel/traps.c 56 */(void);
	unsigned long *cocci_id/* arch/xtensa/kernel/traps.c 530 */;
	int cocci_id/* arch/xtensa/kernel/traps.c 521 */;
	struct task_struct *cocci_id/* arch/xtensa/kernel/traps.c 500 */;
	size_t cocci_id/* arch/xtensa/kernel/traps.c 498 */;
	struct stackframe *cocci_id/* arch/xtensa/kernel/traps.c 480 */;
	void __init cocci_id/* arch/xtensa/kernel/traps.c 412 */;
	void *__init cocci_id/* arch/xtensa/kernel/traps.c 375 */;
	unsigned int cocci_id/* arch/xtensa/kernel/traps.c 367 */;
	void *cocci_id/* arch/xtensa/kernel/traps.c 337 */;
	const unsigned cocci_id/* arch/xtensa/kernel/traps.c 260 */[];
	irqreturn_t cocci_id/* arch/xtensa/kernel/traps.c 237 */(int irq,
								 void *dev_id);
	unsigned cocci_id/* arch/xtensa/kernel/traps.c 220 */;
	void cocci_id/* arch/xtensa/kernel/traps.c 207 */(int,
							  struct pt_regs *);
	unsigned long cocci_id/* arch/xtensa/kernel/traps.c 198 */;
	const char *cocci_id/* arch/xtensa/kernel/traps.c 170 */;
	struct pt_regs *cocci_id/* arch/xtensa/kernel/traps.c 170 */;
	long cocci_id/* arch/xtensa/kernel/traps.c 170 */;
	void cocci_id/* arch/xtensa/kernel/traps.c 169 */;
	void cocci_id/* arch/xtensa/kernel/traps.c 167 */(const char *,
							  struct pt_regs *,
							  long);
	__typeof__(struct exc_table) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct debug_table) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
