cocci_test_suite() {
	void cocci_id/* drivers/clocksource/h8300_tpu.c 97 */;
	unsigned long long cocci_id/* drivers/clocksource/h8300_tpu.c 72 */;
	u64 cocci_id/* drivers/clocksource/h8300_tpu.c 68 */;
	struct tpu_priv cocci_id/* drivers/clocksource/h8300_tpu.c 65 */;
	struct tpu_priv *cocci_id/* drivers/clocksource/h8300_tpu.c 63 */;
	struct clocksource *cocci_id/* drivers/clocksource/h8300_tpu.c 63 */;
	unsigned long long *cocci_id/* drivers/clocksource/h8300_tpu.c 42 */;
	unsigned long cocci_id/* drivers/clocksource/h8300_tpu.c 33 */;
	struct tpu_priv {
		struct clocksource cs;
		void __iomem *mapbase1;
		void __iomem *mapbase2;
		raw_spinlock_t lock;
		unsigned int cs_enabled;
	} cocci_id/* drivers/clocksource/h8300_tpu.c 25 */;
	int cocci_id/* drivers/clocksource/h8300_tpu.c 127 */;
	struct clk *cocci_id/* drivers/clocksource/h8300_tpu.c 126 */;
	void __iomem *cocci_id/* drivers/clocksource/h8300_tpu.c 125 */[2];
	struct device_node *cocci_id/* drivers/clocksource/h8300_tpu.c 123 */;
	int __init cocci_id/* drivers/clocksource/h8300_tpu.c 123 */;
}
