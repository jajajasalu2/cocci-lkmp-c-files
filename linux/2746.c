cocci_test_suite() {
	void *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 894 */;
	struct notifier_block *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 893 */;
	enum s3c24xx_i2c_state{STATE_IDLE, STATE_START, STATE_READ, STATE_WRITE, STATE_STOP,} cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 87 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 834 */;
	struct s3c2410_platform_i2c *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 830 */;
	unsigned int *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 799 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 798 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 790 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 783 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 692 */;
	ktime_t cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 642 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 558 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 390 */;
	struct s3c24xx_i2c *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 387 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 387 */;
	int cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 387 */;
	bool cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 221 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 160 */;
	kernel_ulong_t cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 157 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 157 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 142 */[];
	int cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 139 */(struct s3c24xx_i2c *i2c,
							       unsigned long iicstat);
	void __exit cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1263 */;
	void cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1263 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1257 */;
	const struct platform_device_id cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 125 */[];
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1246 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1236 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1216 */;
	struct s3c24xx_i2c cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1065 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1054 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1028 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-s3c2410.c 1016 */;
	struct s3c24xx_i2c {
		wait_queue_head_t wait;
		kernel_ulong_t quirks;
		struct i2c_msg *msg;
		unsigned int msg_num;
		unsigned int msg_idx;
		unsigned int msg_ptr;
		unsigned int tx_setup;
		unsigned int irq;
		enum s3c24xx_i2c_state state;
		unsigned long clkrate;
		void __iomem *regs;
		struct clk *clk;
		struct device *dev;
		struct i2c_adapter adap;
		struct s3c2410_platform_i2c *pdata;
		struct gpio_desc *gpios[2];
		struct pinctrl *pctrl;
#if defined(CONFIG_ARM_S3C24XX_CPUFREQ)
		struct notifier_block freq_transition;
#endif
		struct regmap *sysreg;
		unsigned int sys_i2c_cfg;
	} cocci_id/*  1 */;
}
