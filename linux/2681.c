cocci_test_suite() {
	long cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 83 */;
	struct i2c_pca_pf_data {
		void __iomem *reg_base;
		int irq;
		struct gpio_desc *gpio;
		wait_queue_head_t wait;
		struct i2c_adapter adap;
		struct i2c_algo_pca_data algo_data;
		unsigned long io_base;
		unsigned long io_size;
	} cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 29 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 247 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 239 */[];
	unsigned long cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 168 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 139 */;
	struct i2c_pca9564_pf_platform_data *cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 137 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 136 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 133 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 120 */;
	int cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 120 */;
	struct i2c_pca_pf_data *cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 106 */;
	void *cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 104 */;
	void cocci_id/* drivers/i2c/busses/i2c-pca-platform.c 104 */;
}
