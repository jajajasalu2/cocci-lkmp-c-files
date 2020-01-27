cocci_test_suite() {
	bool cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 96 */;
	struct uniphier_fi2c_priv {
		struct completion comp;
		struct i2c_adapter adap;
		void __iomem *membase;
		struct clk *clk;
		unsigned int len;
		u8 *buf;
		u32 enabled_irqs;
		int error;
		unsigned int flags;
		unsigned int busy_cnt;
		unsigned int clk_cycle;
		spinlock_t lock;
	} cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 80 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 636 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 630 */[];
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 626 */;
	int __maybe_unused cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 612 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 519 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 517 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 483 */;
	struct i2c_bus_recovery_info cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 473 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 439 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 410 */;
	struct uniphier_fi2c_priv *cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 390 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 388 */;
	int cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 388 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 321 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 268 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 149 */;
	void *cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 149 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 136 */;
	void cocci_id/* drivers/i2c/busses/i2c-uniphier-f.c 135 */;
}
