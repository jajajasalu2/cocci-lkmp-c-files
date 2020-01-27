cocci_test_suite() {
	enum{QWBTU_IRQ=0, WBTU_IRQ, QWBTO_IRQ, WBTO_IRQ, WL2_IRQ, WL1_IRQ,} cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 91 */;
	struct platform_driver cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 874 */;
	const struct platform_device_id cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 850 */[];
	unsigned int cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 753 */;
	const char *const cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 745 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 744 */;
	struct axp20x_dev *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 743 */;
	struct axp288_fg_info *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 742 */;
	struct platform_device *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 739 */;
	int cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 739 */;
	const struct dmi_system_id cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 679 */[];
	const struct power_supply_desc cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 626 */;
	struct power_supply *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 619 */;
	irqreturn_t cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 573 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 529 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 436 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 435 */;
	int *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 389 */;
	void cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 303 */;
	struct seq_file *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 210 */;
	void *cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 210 */;
	unsigned char cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 195 */[2];
	u8 cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 159 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 123 */[];
	struct axp288_fg_info {
		struct platform_device *pdev;
		struct regmap *regmap;
		struct regmap_irq_chip_data *regmap_irqc;
		int irq[AXP288_FG_INTR_NUM];
		struct iio_channel *iio_channel[IIO_CHANNEL_NUM];
		struct power_supply *bat;
		struct mutex lock;
		int status;
		int max_volt;
		struct dentry *debug_file;
	} cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 110 */;
	enum{BAT_TEMP=0, PMIC_TEMP, SYSTEM_TEMP, BAT_CHRG_CURR, BAT_D_CURR, BAT_VOLT, IIO_CHANNEL_NUM,} cocci_id/* drivers/power/supply/axp288_fuel_gauge.c 100 */;
}
