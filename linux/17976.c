cocci_test_suite() {
	unsigned long cocci_id/* arch/sparc/kernel/sun4m_irq.c 457 */;
	void __iomem *cocci_id/* arch/sparc/kernel/sun4m_irq.c 456 */;
	u32 cocci_id/* arch/sparc/kernel/sun4m_irq.c 454 */;
	const u32 *cocci_id/* arch/sparc/kernel/sun4m_irq.c 440 */;
	struct device_node *cocci_id/* arch/sparc/kernel/sun4m_irq.c 438 */;
	void __init cocci_id/* arch/sparc/kernel/sun4m_irq.c 436 */;
	struct tt_entry *cocci_id/* arch/sparc/kernel/sun4m_irq.c 419 */;
	int cocci_id/* arch/sparc/kernel/sun4m_irq.c 348 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/sun4m_irq.c 312 */;
	void cocci_id/* arch/sparc/kernel/sun4m_irq.c 307 */;
	struct sun4m_timer_global __iomem *cocci_id/* arch/sparc/kernel/sun4m_irq.c 305 */;
	struct sun4m_timer_global {
		u32 l10_limit;
		u32 l10_count;
		u32 l10_limit_noclear;
		u32 reserved;
		u32 timer_config;
	} cocci_id/* arch/sparc/kernel/sun4m_irq.c 297 */;
	struct sun4m_timer_percpu __iomem *cocci_id/* arch/sparc/kernel/sun4m_irq.c 295 */[SUN4M_NCPUS];
	struct sun4m_timer_percpu {
		u32 l14_limit;
		u32 l14_count;
		u32 l14_limit_noclear;
		u32 user_timer_start_stop;
	} cocci_id/* arch/sparc/kernel/sun4m_irq.c 288 */;
	struct sun4m_handler_data cocci_id/* arch/sparc/kernel/sun4m_irq.c 272 */;
	struct sun4m_handler_data *cocci_id/* arch/sparc/kernel/sun4m_irq.c 254 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/sun4m_irq.c 251 */;
	unsigned int cocci_id/* arch/sparc/kernel/sun4m_irq.c 251 */;
	struct irq_chip cocci_id/* arch/sparc/kernel/sun4m_irq.c 242 */;
	struct irq_data *cocci_id/* arch/sparc/kernel/sun4m_irq.c 191 */;
	unsigned long cocci_id/* arch/sparc/kernel/sun4m_irq.c 153 */[0x50];
	struct sun4m_handler_data {
		bool percpu;
		long mask;
	} cocci_id/* arch/sparc/kernel/sun4m_irq.c 107 */;
	struct sun4m_irq_global __iomem *cocci_id/* arch/sparc/kernel/sun4m_irq.c 105 */;
	struct sun4m_irq_percpu __iomem *cocci_id/* arch/sparc/kernel/sun4m_irq.c 104 */[SUN4M_NCPUS];
}
