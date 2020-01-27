cocci_test_suite() {
	u8 cocci_id/* drivers/power/supply/da9150-fg.c 91 */[DA9150_QIF_LONG_SIZE];
	u8 cocci_id/* drivers/power/supply/da9150-fg.c 88 */;
	struct da9150_fg {
		struct da9150 *da9150;
		struct device *dev;
		struct mutex io_lock;
		struct power_supply *battery;
		struct delayed_work work;
		u32 interval;
		int warn_soc;
		int crit_soc;
		int soc;
	} cocci_id/* drivers/power/supply/da9150-fg.c 72 */;
	struct platform_driver cocci_id/* drivers/power/supply/da9150-fg.c 562 */;
	struct da9150 *cocci_id/* drivers/power/supply/da9150-fg.c 448 */;
	struct platform_device *cocci_id/* drivers/power/supply/da9150-fg.c 445 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/da9150-fg.c 437 */;
	struct da9150_fg_pdata cocci_id/* drivers/power/supply/da9150-fg.c 423 */;
	struct device_node *cocci_id/* drivers/power/supply/da9150-fg.c 420 */;
	struct device *cocci_id/* drivers/power/supply/da9150-fg.c 418 */;
	struct da9150_fg_pdata *cocci_id/* drivers/power/supply/da9150-fg.c 418 */;
	irqreturn_t cocci_id/* drivers/power/supply/da9150-fg.c 398 */;
	void *cocci_id/* drivers/power/supply/da9150-fg.c 398 */;
	struct da9150_fg cocci_id/* drivers/power/supply/da9150-fg.c 356 */;
	struct work_struct *cocci_id/* drivers/power/supply/da9150-fg.c 354 */;
	union power_supply_propval cocci_id/* drivers/power/supply/da9150-fg.c 343 */;
	bool cocci_id/* drivers/power/supply/da9150-fg.c 341 */;
	enum power_supply_property cocci_id/* drivers/power/supply/da9150-fg.c 310 */;
	struct power_supply *cocci_id/* drivers/power/supply/da9150-fg.c 309 */;
	enum power_supply_property cocci_id/* drivers/power/supply/da9150-fg.c 301 */[];
	u64 cocci_id/* drivers/power/supply/da9150-fg.c 239 */;
	u32 cocci_id/* drivers/power/supply/da9150-fg.c 238 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/da9150-fg.c 224 */;
	struct da9150_fg *cocci_id/* drivers/power/supply/da9150-fg.c 223 */;
	int cocci_id/* drivers/power/supply/da9150-fg.c 223 */;
	void cocci_id/* drivers/power/supply/da9150-fg.c 157 */;
}
