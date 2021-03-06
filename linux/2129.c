cocci_test_suite() {
	struct lp8727_chg {
		struct device *dev;
		struct i2c_client *client;
		struct mutex xfer_lock;
		struct lp8727_psy *psy;
		struct lp8727_platform_data *pdata;
		enum lp8727_dev_id devid;
		struct lp8727_chg_param *chg_param;
		int irq;
		struct delayed_work work;
		unsigned long debounce_jiffies;
	} cocci_id/* drivers/power/supply/lp8727_charger.c 84 */;
	struct lp8727_psy {
		struct power_supply *ac;
		struct power_supply *usb;
		struct power_supply *batt;
	} cocci_id/* drivers/power/supply/lp8727_charger.c 78 */;
	enum lp8727_die_temp{LP8788_TEMP_75C, LP8788_TEMP_95C, LP8788_TEMP_115C, LP8788_TEMP_135C,} cocci_id/* drivers/power/supply/lp8727_charger.c 71 */;
	enum lp8727_dev_id{LP8727_ID_NONE, LP8727_ID_TA, LP8727_ID_DEDICATED_CHG, LP8727_ID_USB_CHG, LP8727_ID_USB_DS, LP8727_ID_MAX,} cocci_id/* drivers/power/supply/lp8727_charger.c 62 */;
	struct i2c_driver cocci_id/* drivers/power/supply/lp8727_charger.c 614 */;
	const struct i2c_device_id cocci_id/* drivers/power/supply/lp8727_charger.c 608 */[];
	const struct of_device_id cocci_id/* drivers/power/supply/lp8727_charger.c 602 */[];
	const struct i2c_device_id *cocci_id/* drivers/power/supply/lp8727_charger.c 543 */;
	struct i2c_client *cocci_id/* drivers/power/supply/lp8727_charger.c 543 */;
	u8 *cocci_id/* drivers/power/supply/lp8727_charger.c 501 */;
	struct device_node *cocci_id/* drivers/power/supply/lp8727_charger.c 493 */;
	struct device *cocci_id/* drivers/power/supply/lp8727_charger.c 493 */;
	struct lp8727_chg_param *cocci_id/* drivers/power/supply/lp8727_charger.c 492 */;
	struct lp8727_psy *cocci_id/* drivers/power/supply/lp8727_charger.c 445 */;
	struct power_supply_config cocci_id/* drivers/power/supply/lp8727_charger.c 444 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/lp8727_charger.c 417 */;
	void cocci_id/* drivers/power/supply/lp8727_charger.c 397 */;
	u8 cocci_id/* drivers/power/supply/lp8727_charger.c 339 */;
	enum lp8727_die_temp cocci_id/* drivers/power/supply/lp8727_charger.c 338 */;
	struct lp8727_platform_data *cocci_id/* drivers/power/supply/lp8727_charger.c 337 */;
	struct lp8727_chg *cocci_id/* drivers/power/supply/lp8727_charger.c 336 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/lp8727_charger.c 334 */;
	enum power_supply_property cocci_id/* drivers/power/supply/lp8727_charger.c 333 */;
	struct power_supply *cocci_id/* drivers/power/supply/lp8727_charger.c 332 */;
	int cocci_id/* drivers/power/supply/lp8727_charger.c 332 */;
	char *cocci_id/* drivers/power/supply/lp8727_charger.c 302 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/lp8727_charger.c 293 */[];
	unsigned cocci_id/* drivers/power/supply/lp8727_charger.c 258 */;
	irqreturn_t cocci_id/* drivers/power/supply/lp8727_charger.c 246 */;
	void *cocci_id/* drivers/power/supply/lp8727_charger.c 246 */;
	u8 cocci_id/* drivers/power/supply/lp8727_charger.c 226 */[LP8788_NUM_INTREGS];
	struct lp8727_chg cocci_id/* drivers/power/supply/lp8727_charger.c 224 */;
	struct work_struct *cocci_id/* drivers/power/supply/lp8727_charger.c 222 */;
	bool cocci_id/* drivers/power/supply/lp8727_charger.c 128 */;
	const char *cocci_id/* drivers/power/supply/lp8727_charger.c 128 */;
	s32 cocci_id/* drivers/power/supply/lp8727_charger.c 103 */;
}
