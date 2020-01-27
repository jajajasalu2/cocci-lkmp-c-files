cocci_test_suite() {
	struct ptn5150_info cocci_id/* drivers/extcon/extcon-ptn5150.c 89 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-ptn5150.c 86 */;
	const struct regmap_config cocci_id/* drivers/extcon/extcon-ptn5150.c 80 */;
	const unsigned int cocci_id/* drivers/extcon/extcon-ptn5150.c 74 */[];
	struct ptn5150_info {
		struct device *dev;
		struct extcon_dev *edev;
		struct i2c_client *i2c;
		struct regmap *regmap;
		struct gpio_desc *int_gpiod;
		struct gpio_desc *vbus_gpiod;
		int irq;
		struct work_struct irq_work;
		struct mutex mutex;
	} cocci_id/* drivers/extcon/extcon-ptn5150.c 61 */;
	int __init cocci_id/* drivers/extcon/extcon-ptn5150.c 331 */;
	void cocci_id/* drivers/extcon/extcon-ptn5150.c 331 */;
	struct i2c_driver cocci_id/* drivers/extcon/extcon-ptn5150.c 322 */;
	const struct i2c_device_id cocci_id/* drivers/extcon/extcon-ptn5150.c 316 */[];
	const struct of_device_id cocci_id/* drivers/extcon/extcon-ptn5150.c 310 */[];
	struct ptn5150_info *cocci_id/* drivers/extcon/extcon-ptn5150.c 229 */;
	struct device_node *cocci_id/* drivers/extcon/extcon-ptn5150.c 228 */;
	struct device *cocci_id/* drivers/extcon/extcon-ptn5150.c 227 */;
	const struct i2c_device_id *cocci_id/* drivers/extcon/extcon-ptn5150.c 225 */;
	struct i2c_client *cocci_id/* drivers/extcon/extcon-ptn5150.c 224 */;
	int cocci_id/* drivers/extcon/extcon-ptn5150.c 224 */;
	enum ptn5150_reg{PTN5150_REG_DEVICE_ID=0x01, PTN5150_REG_CONTROL, PTN5150_REG_INT_STATUS, PTN5150_REG_CC_STATUS, PTN5150_REG_CON_DET=0x09, PTN5150_REG_VCONN_STATUS, PTN5150_REG_RESET, PTN5150_REG_INT_MASK=0x18, PTN5150_REG_INT_REG_STATUS, PTN5150_REG_END,} cocci_id/* drivers/extcon/extcon-ptn5150.c 20 */;
	unsigned int cocci_id/* drivers/extcon/extcon-ptn5150.c 188 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-ptn5150.c 177 */;
	void *cocci_id/* drivers/extcon/extcon-ptn5150.c 177 */;
}
