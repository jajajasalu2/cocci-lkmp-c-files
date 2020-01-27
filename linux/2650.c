cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-exynos5.c 873 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-exynos5.c 868 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 845 */;
	struct exynos5_i2c cocci_id/* drivers/i2c/busses/i2c-exynos5.c 746 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 743 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 741 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 739 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-exynos5.c 734 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 729 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 709 */;
	unsigned short cocci_id/* drivers/i2c/busses/i2c-exynos5.c 615 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-exynos5.c 586 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-exynos5.c 574 */;
	void cocci_id/* drivers/i2c/busses/i2c-exynos5.c 572 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-exynos5.c 418 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-exynos5.c 414 */;
	void *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 414 */;
	struct exynos5_i2c *cocci_id/* drivers/i2c/busses/i2c-exynos5.c 351 */;
	int cocci_id/* drivers/i2c/busses/i2c-exynos5.c 351 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-exynos5.c 276 */;
	bool cocci_id/* drivers/i2c/busses/i2c-exynos5.c 270 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-exynos5.c 240 */[];
	const struct exynos_hsi2c_variant cocci_id/* drivers/i2c/busses/i2c-exynos5.c 225 */;
	struct exynos_hsi2c_variant {
		unsigned int fifo_depth;
		enum i2c_type_exynos hw;
	} cocci_id/* drivers/i2c/busses/i2c-exynos5.c 220 */;
	struct exynos5_i2c {
		struct i2c_adapter adap;
		struct i2c_msg *msg;
		struct completion msg_complete;
		unsigned int msg_ptr;
		unsigned int irq;
		void __iomem *regs;
		struct clk *clk;
		struct device *dev;
		int state;
		spinlock_t lock;
		int trans_done;
		unsigned int op_clock;
		const struct exynos_hsi2c_variant *variant;
	} cocci_id/* drivers/i2c/busses/i2c-exynos5.c 181 */;
	enum i2c_type_exynos{I2C_TYPE_EXYNOS5, I2C_TYPE_EXYNOS7,} cocci_id/* drivers/i2c/busses/i2c-exynos5.c 176 */;
}
