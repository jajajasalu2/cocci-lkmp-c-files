cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/supply/da9150-charger.c 678 */;
	struct da9150 *cocci_id/* drivers/power/supply/da9150-charger.c 517 */;
	struct device *cocci_id/* drivers/power/supply/da9150-charger.c 516 */;
	struct platform_device *cocci_id/* drivers/power/supply/da9150-charger.c 514 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/da9150-charger.c 506 */;
	const char *cocci_id/* drivers/power/supply/da9150-charger.c 462 */;
	irq_handler_t cocci_id/* drivers/power/supply/da9150-charger.c 461 */;
	struct da9150_charger cocci_id/* drivers/power/supply/da9150-charger.c 450 */;
	struct notifier_block *cocci_id/* drivers/power/supply/da9150-charger.c 446 */;
	unsigned long cocci_id/* drivers/power/supply/da9150-charger.c 446 */;
	struct work_struct *cocci_id/* drivers/power/supply/da9150-charger.c 425 */;
	void cocci_id/* drivers/power/supply/da9150-charger.c 425 */;
	irqreturn_t cocci_id/* drivers/power/supply/da9150-charger.c 364 */;
	void *cocci_id/* drivers/power/supply/da9150-charger.c 364 */;
	enum power_supply_property cocci_id/* drivers/power/supply/da9150-charger.c 322 */;
	struct power_supply *cocci_id/* drivers/power/supply/da9150-charger.c 321 */;
	enum power_supply_property cocci_id/* drivers/power/supply/da9150-charger.c 309 */[];
	struct da9150_charger {
		struct da9150 *da9150;
		struct device *dev;
		struct power_supply *usb;
		struct power_supply *battery;
		struct power_supply *supply_online;
		struct usb_phy *usb_phy;
		struct notifier_block otg_nb;
		struct work_struct otg_work;
		unsigned long usb_event;
		struct iio_channel *ibus_chan;
		struct iio_channel *vbus_chan;
		struct iio_channel *tjunc_chan;
		struct iio_channel *vbat_chan;
	} cocci_id/* drivers/power/supply/da9150-charger.c 25 */;
	u8 cocci_id/* drivers/power/supply/da9150-charger.c 235 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/da9150-charger.c 233 */;
	struct da9150_charger *cocci_id/* drivers/power/supply/da9150-charger.c 232 */;
	int cocci_id/* drivers/power/supply/da9150-charger.c 232 */;
}
