cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/supply/wm831x_power.c 729 */;
	enum wm831x_auxadc cocci_id/* drivers/power/supply/wm831x_power.c 54 */;
	struct wm831x_power cocci_id/* drivers/power/supply/wm831x_power.c 539 */;
	struct platform_device *cocci_id/* drivers/power/supply/wm831x_power.c 532 */;
	irqreturn_t cocci_id/* drivers/power/supply/wm831x_power.c 484 */;
	void *cocci_id/* drivers/power/supply/wm831x_power.c 484 */;
	const char *cocci_id/* drivers/power/supply/wm831x_power.c 473 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/wm831x_power.c 465 */[];
	struct wm831x_power *cocci_id/* drivers/power/supply/wm831x_power.c 436 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/wm831x_power.c 434 */;
	enum power_supply_property cocci_id/* drivers/power/supply/wm831x_power.c 433 */;
	struct power_supply *cocci_id/* drivers/power/supply/wm831x_power.c 432 */;
	struct wm831x *cocci_id/* drivers/power/supply/wm831x_power.c 393 */;
	int *cocci_id/* drivers/power/supply/wm831x_power.c 393 */;
	int cocci_id/* drivers/power/supply/wm831x_power.c 393 */;
	struct wm831x_battery_pdata *cocci_id/* drivers/power/supply/wm831x_power.c 259 */;
	struct wm831x_pdata *cocci_id/* drivers/power/supply/wm831x_power.c 258 */;
	const char *cocci_id/* drivers/power/supply/wm831x_power.c 239 */;
	struct chg_map *cocci_id/* drivers/power/supply/wm831x_power.c 238 */;
	void cocci_id/* drivers/power/supply/wm831x_power.c 237 */;
	struct chg_map cocci_id/* drivers/power/supply/wm831x_power.c 218 */[];
	struct wm831x_power {
		struct wm831x *wm831x;
		struct power_supply *wall;
		struct power_supply *usb;
		struct power_supply *battery;
		struct power_supply_desc wall_desc;
		struct power_supply_desc usb_desc;
		struct power_supply_desc battery_desc;
		char wall_name[20];
		char usb_name[20];
		char battery_name[20];
		bool have_battery;
		struct usb_phy *usb_phy;
		struct notifier_block usb_notify;
	} cocci_id/* drivers/power/supply/wm831x_power.c 20 */;
	struct chg_map {
		int val;
		int reg_val;
	} cocci_id/* drivers/power/supply/wm831x_power.c 169 */;
	unsigned int cocci_id/* drivers/power/supply/wm831x_power.c 146 */;
	unsigned long cocci_id/* drivers/power/supply/wm831x_power.c 141 */;
	struct notifier_block *cocci_id/* drivers/power/supply/wm831x_power.c 140 */;
	const unsigned int cocci_id/* drivers/power/supply/wm831x_power.c 129 */[];
}
