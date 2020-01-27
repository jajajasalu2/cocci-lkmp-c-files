cocci_test_suite() {
	struct mct_clock_event_device {
		struct clock_event_device evt;
		unsigned long base;
		char name[10];
	} cocci_id/* drivers/clocksource/exynos_mct.c 80 */;
	int cocci_id/* drivers/clocksource/exynos_mct.c 78 */[MCT_NR_IRQS];
	unsigned long cocci_id/* drivers/clocksource/exynos_mct.c 76 */;
	enum{MCT_G0_IRQ, MCT_G1_IRQ, MCT_G2_IRQ, MCT_G3_IRQ, MCT_L0_IRQ, MCT_L1_IRQ, MCT_L2_IRQ, MCT_L3_IRQ, MCT_L4_IRQ, MCT_L5_IRQ, MCT_L6_IRQ, MCT_L7_IRQ, MCT_NR_IRQS,} cocci_id/* drivers/clocksource/exynos_mct.c 59 */;
	enum{MCT_INT_SPI, MCT_INT_PPI,} cocci_id/* drivers/clocksource/exynos_mct.c 54 */;
	struct clk *cocci_id/* drivers/clocksource/exynos_mct.c 504 */;
	struct device_node *cocci_id/* drivers/clocksource/exynos_mct.c 501 */;
	void __iomem *cocci_id/* drivers/clocksource/exynos_mct.c 501 */;
	struct mct_clock_event_device *cocci_id/* drivers/clocksource/exynos_mct.c 486 */;
	struct mct_clock_event_device cocci_id/* drivers/clocksource/exynos_mct.c 398 */;
	int cocci_id/* drivers/clocksource/exynos_mct.c 339 */;
	void cocci_id/* drivers/clocksource/exynos_mct.c 339 */;
	struct irqaction cocci_id/* drivers/clocksource/exynos_mct.c 332 */;
	irqreturn_t cocci_id/* drivers/clocksource/exynos_mct.c 321 */;
	void *cocci_id/* drivers/clocksource/exynos_mct.c 321 */;
	struct clock_event_device cocci_id/* drivers/clocksource/exynos_mct.c 308 */;
	unsigned long long cocci_id/* drivers/clocksource/exynos_mct.c 301 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/exynos_mct.c 284 */;
	u32 cocci_id/* drivers/clocksource/exynos_mct.c 274 */;
	unsigned int cocci_id/* drivers/clocksource/exynos_mct.c 263 */;
	bool cocci_id/* drivers/clocksource/exynos_mct.c 261 */;
	int __init cocci_id/* drivers/clocksource/exynos_mct.c 232 */;
	cycles_t cocci_id/* drivers/clocksource/exynos_mct.c 224 */;
	struct delay_timer cocci_id/* drivers/clocksource/exynos_mct.c 222 */;
	u64 notrace cocci_id/* drivers/clocksource/exynos_mct.c 216 */;
	struct clocksource cocci_id/* drivers/clocksource/exynos_mct.c 207 */;
	u64 cocci_id/* drivers/clocksource/exynos_mct.c 197 */;
	struct clocksource *cocci_id/* drivers/clocksource/exynos_mct.c 197 */;
	u32 notrace cocci_id/* drivers/clocksource/exynos_mct.c 192 */;
	__typeof__(struct mct_clock_event_device) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
