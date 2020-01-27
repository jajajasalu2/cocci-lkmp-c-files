cocci_test_suite() {
	int cocci_id/* arch/sparc/kernel/sun4d_irq.c 60 */[];
	unsigned char cocci_id/* arch/sparc/kernel/sun4d_irq.c 58 */[32];
	struct sun4d_timer_regs __iomem *cocci_id/* arch/sparc/kernel/sun4d_irq.c 51 */;
	struct sun4d_timer_regs cocci_id/* arch/sparc/kernel/sun4d_irq.c 455 */;
	struct sun4d_timer_regs {
		u32 l10_timer_limit;
		u32 l10_cur_countx;
		u32 l10_limit_noclear;
		u32 ctrl;
		u32 l10_cur_count;
	} cocci_id/* arch/sparc/kernel/sun4d_irq.c 43 */;
	const u32 *cocci_id/* arch/sparc/kernel/sun4d_irq.c 423 */;
	struct resource cocci_id/* arch/sparc/kernel/sun4d_irq.c 421 */;
	struct tt_entry *cocci_id/* arch/sparc/kernel/sun4d_irq.c 398 */;
	unsigned long cocci_id/* arch/sparc/kernel/sun4d_irq.c 397 */;
	int cocci_id/* arch/sparc/kernel/sun4d_irq.c 333 */;
	const struct linux_prom_registers *cocci_id/* arch/sparc/kernel/sun4d_irq.c 330 */;
	char *cocci_id/* arch/sparc/kernel/sun4d_irq.c 329 */;
	struct device_node *cocci_id/* arch/sparc/kernel/sun4d_irq.c 327 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/sun4d_irq.c 324 */;
	struct sun4d_handler_data {
		unsigned int cpuid;
		unsigned int real_irq;
	} cocci_id/* arch/sparc/kernel/sun4d_irq.c 32 */;
	struct sun4d_handler_data cocci_id/* arch/sparc/kernel/sun4d_irq.c 307 */;
	struct sun4d_handler_data *cocci_id/* arch/sparc/kernel/sun4d_irq.c 293 */;
	unsigned int cocci_id/* arch/sparc/kernel/sun4d_irq.c 289 */;
	void cocci_id/* arch/sparc/kernel/sun4d_irq.c 268 */;
	void __init cocci_id/* arch/sparc/kernel/sun4d_irq.c 250 */;
	struct irq_chip cocci_id/* arch/sparc/kernel/sun4d_irq.c 240 */;
	struct irq_data *cocci_id/* arch/sparc/kernel/sun4d_irq.c 190 */;
	struct irq_bucket *cocci_id/* arch/sparc/kernel/sun4d_irq.c 171 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/sun4d_irq.c 147 */;
}
