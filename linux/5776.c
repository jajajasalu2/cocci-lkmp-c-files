cocci_test_suite() {
	void __exit cocci_id/* drivers/clocksource/sh_mtu2.c 519 */;
	int __init cocci_id/* drivers/clocksource/sh_mtu2.c 514 */;
	struct platform_driver cocci_id/* drivers/clocksource/sh_mtu2.c 504 */;
	const struct of_device_id cocci_id/* drivers/clocksource/sh_mtu2.c 498 */[]__maybe_unused;
	const struct platform_device_id cocci_id/* drivers/clocksource/sh_mtu2.c 492 */[];
	struct platform_device *cocci_id/* drivers/clocksource/sh_mtu2.c 450 */;
	struct sh_mtu2_device {
		struct platform_device *pdev;
		void __iomem *mapbase;
		struct clk *clk;
		raw_spinlock_t lock;
		struct sh_mtu2_channel *channels;
		unsigned int num_channels;
		bool has_clockevent;
	} cocci_id/* drivers/clocksource/sh_mtu2.c 41 */;
	unsigned int cocci_id/* drivers/clocksource/sh_mtu2.c 390 */;
	struct resource *cocci_id/* drivers/clocksource/sh_mtu2.c 372 */;
	struct sh_mtu2_device *cocci_id/* drivers/clocksource/sh_mtu2.c 370 */;
	char cocci_id/* drivers/clocksource/sh_mtu2.c 342 */[6];
	const unsigned int cocci_id/* drivers/clocksource/sh_mtu2.c 335 */[];
	const char *cocci_id/* drivers/clocksource/sh_mtu2.c 327 */;
	struct sh_mtu2_channel {
		struct sh_mtu2_device *mtu;
		unsigned int index;
		void __iomem *base;
		struct clock_event_device ced;
	} cocci_id/* drivers/clocksource/sh_mtu2.c 32 */;
	void cocci_id/* drivers/clocksource/sh_mtu2.c 303 */;
	struct sh_mtu2_device cocci_id/* drivers/clocksource/sh_mtu2.c 30 */;
	int cocci_id/* drivers/clocksource/sh_mtu2.c 285 */;
	struct sh_mtu2_channel cocci_id/* drivers/clocksource/sh_mtu2.c 272 */;
	struct sh_mtu2_channel *cocci_id/* drivers/clocksource/sh_mtu2.c 270 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/sh_mtu2.c 270 */;
	irqreturn_t cocci_id/* drivers/clocksource/sh_mtu2.c 257 */;
	void *cocci_id/* drivers/clocksource/sh_mtu2.c 257 */;
	unsigned long cocci_id/* drivers/clocksource/sh_mtu2.c 206 */;
	unsigned long cocci_id/* drivers/clocksource/sh_mtu2.c 146 */[];
}
