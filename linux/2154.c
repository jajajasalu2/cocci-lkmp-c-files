cocci_test_suite() {
	struct pm860x_charger_info {
		struct pm860x_chip *chip;
		struct i2c_client *i2c;
		struct i2c_client *i2c_8606;
		struct device *dev;
		struct power_supply *usb;
		struct mutex lock;
		int irq_nums;
		int irq[7];
		unsigned state:3;
		unsigned online:1;
		unsigned present:1;
		unsigned allowed:1;
	} cocci_id/* drivers/power/supply/88pm860x_charger.c 96 */;
	struct platform_driver cocci_id/* drivers/power/supply/88pm860x_charger.c 747 */;
	struct power_supply_config cocci_id/* drivers/power/supply/88pm860x_charger.c 666 */;
	struct pm860x_chip *cocci_id/* drivers/power/supply/88pm860x_charger.c 665 */;
	struct platform_device *cocci_id/* drivers/power/supply/88pm860x_charger.c 663 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/88pm860x_charger.c 655 */;
	struct pm860x_irq_desc {
		const char *name;
		irqreturn_t (*handler)(int irq, void *data);
	} cocci_id/* drivers/power/supply/88pm860x_charger.c 642 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/88pm860x_charger.c 614 */[];
	union power_supply_propval *cocci_id/* drivers/power/supply/88pm860x_charger.c 593 */;
	enum power_supply_property cocci_id/* drivers/power/supply/88pm860x_charger.c 592 */;
	union power_supply_propval cocci_id/* drivers/power/supply/88pm860x_charger.c 473 */;
	struct power_supply *cocci_id/* drivers/power/supply/88pm860x_charger.c 472 */;
	irqreturn_t cocci_id/* drivers/power/supply/88pm860x_charger.c 396 */;
	void *cocci_id/* drivers/power/supply/88pm860x_charger.c 396 */;
	unsigned char cocci_id/* drivers/power/supply/88pm860x_charger.c 287 */[][16];
	void cocci_id/* drivers/power/supply/88pm860x_charger.c 278 */;
	unsigned char cocci_id/* drivers/power/supply/88pm860x_charger.c 118 */[2];
	struct pm860x_charger_info *cocci_id/* drivers/power/supply/88pm860x_charger.c 116 */;
	int *cocci_id/* drivers/power/supply/88pm860x_charger.c 116 */;
	int cocci_id/* drivers/power/supply/88pm860x_charger.c 116 */;
	char *cocci_id/* drivers/power/supply/88pm860x_charger.c 112 */[];
}
