cocci_test_suite() {
	unsigned int cocci_id/* drivers/clocksource/timer-imx-gpt.c 92 */;
	struct imx_timer cocci_id/* drivers/clocksource/timer-imx-gpt.c 87 */;
	struct imx_gpt_data {
		int reg_tstat;
		int reg_tcn;
		int reg_tcmp;
		void (*gpt_setup_tctl)(struct imx_timer *imxtm);
		void (*gpt_irq_enable)(struct imx_timer *imxtm);
		void (*gpt_irq_disable)(struct imx_timer *imxtm);
		void (*gpt_irq_acknowledge)(struct imx_timer *imxtm);
		int (*set_next_event)(unsigned long evt,
				      struct clock_event_device *ced);
	} cocci_id/* drivers/clocksource/timer-imx-gpt.c 73 */;
	struct imx_timer {
		enum imx_gpt_type type;
		void __iomem *base;
		int irq;
		struct clk *clk_per;
		struct clk *clk_ipg;
		const struct imx_gpt_data *gpt;
		struct clock_event_device ced;
		struct irqaction act;
	} cocci_id/* drivers/clocksource/timer-imx-gpt.c 62 */;
	enum imx_gpt_type cocci_id/* drivers/clocksource/timer-imx-gpt.c 500 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-imx-gpt.c 488 */;
	void __init cocci_id/* drivers/clocksource/timer-imx-gpt.c 429 */;
	int cocci_id/* drivers/clocksource/timer-imx-gpt.c 383 */;
	struct imx_timer *cocci_id/* drivers/clocksource/timer-imx-gpt.c 381 */;
	int __init cocci_id/* drivers/clocksource/timer-imx-gpt.c 381 */;
	const struct imx_gpt_data cocci_id/* drivers/clocksource/timer-imx-gpt.c 337 */;
	u32 cocci_id/* drivers/clocksource/timer-imx-gpt.c 300 */;
	struct irqaction *cocci_id/* drivers/clocksource/timer-imx-gpt.c 276 */;
	uint32_t cocci_id/* drivers/clocksource/timer-imx-gpt.c 262 */;
	irqreturn_t cocci_id/* drivers/clocksource/timer-imx-gpt.c 258 */;
	void *cocci_id/* drivers/clocksource/timer-imx-gpt.c 258 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-imx-gpt.c 174 */;
	void __iomem *cocci_id/* drivers/clocksource/timer-imx-gpt.c 156 */;
	unsigned long cocci_id/* drivers/clocksource/timer-imx-gpt.c 147 */;
	struct delay_timer cocci_id/* drivers/clocksource/timer-imx-gpt.c 145 */;
	u64 notrace cocci_id/* drivers/clocksource/timer-imx-gpt.c 139 */;
	void cocci_id/* drivers/clocksource/timer-imx-gpt.c 120 */;
}
