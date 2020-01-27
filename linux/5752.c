cocci_test_suite() {
	unsigned long cocci_id/* drivers/clocksource/h8300_timer16.c 79 */;
	u64 cocci_id/* drivers/clocksource/h8300_timer16.c 76 */;
	struct timer16_priv cocci_id/* drivers/clocksource/h8300_timer16.c 73 */;
	struct timer16_priv *cocci_id/* drivers/clocksource/h8300_timer16.c 71 */;
	struct clocksource *cocci_id/* drivers/clocksource/h8300_timer16.c 71 */;
	irqreturn_t cocci_id/* drivers/clocksource/h8300_timer16.c 61 */;
	void *cocci_id/* drivers/clocksource/h8300_timer16.c 61 */;
	unsigned char cocci_id/* drivers/clocksource/h8300_timer16.c 40 */;
	unsigned short cocci_id/* drivers/clocksource/h8300_timer16.c 39 */;
	struct timer16_priv {
		struct clocksource cs;
		unsigned long total_cycles;
		void __iomem *mapbase;
		void __iomem *mapcommon;
		unsigned short cs_enabled;
		unsigned char enb;
		unsigned char ovf;
		unsigned char ovie;
	} cocci_id/* drivers/clocksource/h8300_timer16.c 26 */;
	struct clk *cocci_id/* drivers/clocksource/h8300_timer16.c 135 */;
	unsigned int cocci_id/* drivers/clocksource/h8300_timer16.c 134 */;
	int cocci_id/* drivers/clocksource/h8300_timer16.c 133 */;
	void __iomem *cocci_id/* drivers/clocksource/h8300_timer16.c 132 */[2];
	struct device_node *cocci_id/* drivers/clocksource/h8300_timer16.c 130 */;
	int __init cocci_id/* drivers/clocksource/h8300_timer16.c 130 */;
	void cocci_id/* drivers/clocksource/h8300_timer16.c 103 */;
}
