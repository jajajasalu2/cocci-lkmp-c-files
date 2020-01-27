cocci_test_suite() {
	uint8_t cocci_id/* drivers/mfd/da903x.c 82 */;
	uint8_t *cocci_id/* drivers/mfd/da903x.c 72 */;
	struct i2c_client *cocci_id/* drivers/mfd/da903x.c 71 */;
	int cocci_id/* drivers/mfd/da903x.c 71 */;
	struct da903x_chip {
		struct i2c_client *client;
		struct device *dev;
		const struct da903x_chip_ops *ops;
		int type;
		uint32_t events_mask;
		struct mutex lock;
		struct work_struct irq_work;
		struct blocking_notifier_head notifier_list;
	} cocci_id/* drivers/mfd/da903x.c 57 */;
	void __exit cocci_id/* drivers/mfd/da903x.c 558 */;
	void cocci_id/* drivers/mfd/da903x.c 558 */;
	int __init cocci_id/* drivers/mfd/da903x.c 552 */;
	struct i2c_driver cocci_id/* drivers/mfd/da903x.c 543 */;
	const struct i2c_device_id *cocci_id/* drivers/mfd/da903x.c 492 */;
	struct da903x_chip_ops {
		int (*init_chip)(struct da903x_chip *);
		int (*unmask_events)(struct da903x_chip *,
				     unsigned int events);
		int (*mask_events)(struct da903x_chip *, unsigned int events);
		int (*read_events)(struct da903x_chip *, unsigned int *events);
		int (*read_status)(struct da903x_chip *, unsigned int *status);
	} cocci_id/* drivers/mfd/da903x.c 49 */;
	struct platform_device *cocci_id/* drivers/mfd/da903x.c 463 */;
	struct da903x_subdev_info *cocci_id/* drivers/mfd/da903x.c 462 */;
	struct da903x_platform_data *cocci_id/* drivers/mfd/da903x.c 460 */;
	struct device *cocci_id/* drivers/mfd/da903x.c 448 */;
	void *cocci_id/* drivers/mfd/da903x.c 448 */;
	const struct i2c_device_id cocci_id/* drivers/mfd/da903x.c 441 */[];
	const struct da903x_chip_ops cocci_id/* drivers/mfd/da903x.c 424 */[];
	irqreturn_t cocci_id/* drivers/mfd/da903x.c 414 */;
	struct da903x_chip cocci_id/* drivers/mfd/da903x.c 397 */;
	struct work_struct *cocci_id/* drivers/mfd/da903x.c 394 */;
	uint8_t cocci_id/* drivers/mfd/da903x.c 383 */[2];
	uint8_t cocci_id/* drivers/mfd/da903x.c 356 */[4];
	unsigned int *cocci_id/* drivers/mfd/da903x.c 289 */;
	uint8_t cocci_id/* drivers/mfd/da903x.c 278 */[3];
	unsigned int cocci_id/* drivers/mfd/da903x.c 276 */;
	struct da903x_chip *cocci_id/* drivers/mfd/da903x.c 246 */;
	struct notifier_block *cocci_id/* drivers/mfd/da903x.c 126 */;
}
