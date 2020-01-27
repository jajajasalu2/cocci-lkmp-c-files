cocci_test_suite() {
	void __exit cocci_id/* drivers/i2c/busses/i2c-davinci.c 974 */;
	void cocci_id/* drivers/i2c/busses/i2c-davinci.c 974 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-davinci.c 968 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-davinci.c 957 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-davinci.c 942 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-davinci.c 932 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-davinci.c 793 */;
	struct davinci_i2c_dev cocci_id/* drivers/i2c/busses/i2c-davinci.c 778 */;
	struct i2c_bus_recovery_info *cocci_id/* drivers/i2c/busses/i2c-davinci.c 765 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-davinci.c 764 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-davinci.c 760 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-davinci.c 753 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-davinci.c 748 */;
	void *cocci_id/* drivers/i2c/busses/i2c-davinci.c 706 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-davinci.c 706 */;
	struct notifier_block *cocci_id/* drivers/i2c/busses/i2c-davinci.c 705 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-davinci.c 602 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-davinci.c 534 */[];
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-davinci.c 414 */;
	struct davinci_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-davinci.c 332 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-davinci.c 330 */;
	int cocci_id/* drivers/i2c/busses/i2c-davinci.c 330 */;
	struct i2c_bus_recovery_info cocci_id/* drivers/i2c/busses/i2c-davinci.c 312 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-davinci.c 178 */;
	struct davinci_i2c_platform_data *cocci_id/* drivers/i2c/busses/i2c-davinci.c 171 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-davinci.c 150 */;
	struct davinci_i2c_platform_data cocci_id/* drivers/i2c/busses/i2c-davinci.c 139 */;
	struct davinci_i2c_dev {
		struct device *dev;
		void __iomem *base;
		struct completion cmd_complete;
		struct clk *clk;
		int cmd_err;
		u8 *buf;
		size_t buf_len;
		int irq;
		int stop;
		u8 terminate;
		struct i2c_adapter adapter;
#ifdef CONFIG_CPU_FREQ
		struct notifier_block freq_transition;
#endif
		struct davinci_i2c_platform_data *pdata;
	} cocci_id/* drivers/i2c/busses/i2c-davinci.c 120 */;
}
