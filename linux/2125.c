cocci_test_suite() {
	bool cocci_id/* drivers/power/supply/isp1704_charger.c 71 */;
	void cocci_id/* drivers/power/supply/isp1704_charger.c 71 */;
	u32 cocci_id/* drivers/power/supply/isp1704_charger.c 61 */;
	struct platform_driver cocci_id/* drivers/power/supply/isp1704_charger.c 500 */;
	const struct of_device_id cocci_id/* drivers/power/supply/isp1704_charger.c 492 */[];
	struct isp1704_charger {
		struct device *dev;
		struct power_supply *psy;
		struct power_supply_desc psy_desc;
		struct gpio_desc *enable_gpio;
		struct usb_phy *phy;
		struct notifier_block nb;
		struct work_struct work;
		char model[8];
		unsigned present:1;
		unsigned online:1;
		unsigned current_max;
	} cocci_id/* drivers/power/supply/isp1704_charger.c 45 */;
	u16 cocci_id/* drivers/power/supply/isp1704_charger.c 40 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/isp1704_charger.c 384 */;
	struct platform_device *cocci_id/* drivers/power/supply/isp1704_charger.c 380 */;
	enum power_supply_property cocci_id/* drivers/power/supply/isp1704_charger.c 332 */[];
	union power_supply_propval *cocci_id/* drivers/power/supply/isp1704_charger.c 306 */;
	enum power_supply_property cocci_id/* drivers/power/supply/isp1704_charger.c 305 */;
	struct power_supply *cocci_id/* drivers/power/supply/isp1704_charger.c 304 */;
	void *cocci_id/* drivers/power/supply/isp1704_charger.c 294 */;
	struct notifier_block *cocci_id/* drivers/power/supply/isp1704_charger.c 293 */;
	struct isp1704_charger cocci_id/* drivers/power/supply/isp1704_charger.c 226 */;
	struct work_struct *cocci_id/* drivers/power/supply/isp1704_charger.c 223 */;
	u8 cocci_id/* drivers/power/supply/isp1704_charger.c 183 */;
	unsigned long cocci_id/* drivers/power/supply/isp1704_charger.c 182 */;
	struct isp1704_charger *cocci_id/* drivers/power/supply/isp1704_charger.c 180 */;
	int cocci_id/* drivers/power/supply/isp1704_charger.c 180 */;
}
