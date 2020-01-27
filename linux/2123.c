cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/supply/axp288_charger.c 857 */;
	const struct platform_device_id cocci_id/* drivers/power/supply/axp288_charger.c 851 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/axp288_charger.c 742 */;
	struct axp20x_dev *cocci_id/* drivers/power/supply/axp288_charger.c 741 */;
	struct device *cocci_id/* drivers/power/supply/axp288_charger.c 740 */;
	struct platform_device *cocci_id/* drivers/power/supply/axp288_charger.c 736 */;
	struct axp288_chrg_info *cocci_id/* drivers/power/supply/axp288_charger.c 730 */;
	void *cocci_id/* drivers/power/supply/axp288_charger.c 728 */;
	void cocci_id/* drivers/power/supply/axp288_charger.c 728 */;
	unsigned long cocci_id/* drivers/power/supply/axp288_charger.c 597 */;
	struct notifier_block *cocci_id/* drivers/power/supply/axp288_charger.c 596 */;
	unsigned int cocci_id/* drivers/power/supply/axp288_charger.c 554 */;
	struct extcon_dev *cocci_id/* drivers/power/supply/axp288_charger.c 553 */;
	struct axp288_chrg_info cocci_id/* drivers/power/supply/axp288_charger.c 551 */;
	struct work_struct *cocci_id/* drivers/power/supply/axp288_charger.c 548 */;
	irqreturn_t cocci_id/* drivers/power/supply/axp288_charger.c 489 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/axp288_charger.c 479 */;
	enum power_supply_property cocci_id/* drivers/power/supply/axp288_charger.c 467 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/axp288_charger.c 450 */;
	struct power_supply *cocci_id/* drivers/power/supply/axp288_charger.c 449 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/axp288_charger.c 393 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/axp288_charger.c 358 */;
	bool cocci_id/* drivers/power/supply/axp288_charger.c 281 */;
	int cocci_id/* drivers/power/supply/axp288_charger.c 280 */;
	u8 cocci_id/* drivers/power/supply/axp288_charger.c 144 */;
	struct axp288_chrg_info {
		struct platform_device *pdev;
		struct regmap *regmap;
		struct regmap_irq_chip_data *regmap_irqc;
		int irq[CHRG_INTR_END];
		struct power_supply *psy_usb;
		struct {
			struct work_struct work;
			struct extcon_dev *cable;
			struct notifier_block id_nb;
			bool id_short;
		} otg;
		struct {
			struct extcon_dev *edev;
			struct notifier_block nb;
			struct work_struct work;
		} cable;
		int cc;
		int cv;
		int max_cc;
		int max_cv;
	} cocci_id/* drivers/power/supply/axp288_charger.c 114 */;
	enum{VBUS_OV_IRQ=0, CHARGE_DONE_IRQ, CHARGE_CHARGING_IRQ, BAT_SAFE_QUIT_IRQ, BAT_SAFE_ENTER_IRQ, QCBTU_IRQ, CBTU_IRQ, QCBTO_IRQ, CBTO_IRQ, CHRG_INTR_END,} cocci_id/* drivers/power/supply/axp288_charger.c 101 */;
}
