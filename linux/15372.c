cocci_test_suite() {
	bool cocci_id/* drivers/watchdog/ziirave_wdt.c 98 */;
	struct ziirave_wdt_data {
		struct mutex sysfs_mutex;
		struct watchdog_device wdd;
		struct ziirave_wdt_rev bootloader_rev;
		struct ziirave_wdt_rev firmware_rev;
		int reset_reason;
	} cocci_id/* drivers/watchdog/ziirave_wdt.c 81 */;
	struct ziirave_wdt_rev {
		unsigned char major;
		unsigned char minor;
	} cocci_id/* drivers/watchdog/ziirave_wdt.c 76 */;
	struct i2c_driver cocci_id/* drivers/watchdog/ziirave_wdt.c 734 */;
	const struct of_device_id cocci_id/* drivers/watchdog/ziirave_wdt.c 728 */[];
	const struct i2c_device_id cocci_id/* drivers/watchdog/ziirave_wdt.c 722 */[];
	struct ziirave_wdt_data *cocci_id/* drivers/watchdog/ziirave_wdt.c 602 */;
	const struct i2c_device_id *cocci_id/* drivers/watchdog/ziirave_wdt.c 599 */;
	struct attribute *cocci_id/* drivers/watchdog/ziirave_wdt.c 560 */[];
	const char *cocci_id/* drivers/watchdog/ziirave_wdt.c 507 */;
	size_t cocci_id/* drivers/watchdog/ziirave_wdt.c 507 */;
	char *cocci_id/* drivers/watchdog/ziirave_wdt.c 462 */;
	struct device_attribute *cocci_id/* drivers/watchdog/ziirave_wdt.c 461 */;
	struct device *cocci_id/* drivers/watchdog/ziirave_wdt.c 460 */;
	ssize_t cocci_id/* drivers/watchdog/ziirave_wdt.c 460 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/ziirave_wdt.c 428 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/ziirave_wdt.c 423 */;
	char *cocci_id/* drivers/watchdog/ziirave_wdt.c 38 */[];
	void *cocci_id/* drivers/watchdog/ziirave_wdt.c 372 */;
	const struct ihex_binrec *cocci_id/* drivers/watchdog/ziirave_wdt.c 345 */;
	const struct firmware *cocci_id/* drivers/watchdog/ziirave_wdt.c 342 */;
	const u32 cocci_id/* drivers/watchdog/ziirave_wdt.c 307 */;
	u8 cocci_id/* drivers/watchdog/ziirave_wdt.c 303 */[ZIIRAVE_FIRM_PKT_DATA_SIZE];
	const u8 cocci_id/* drivers/watchdog/ziirave_wdt.c 276 */;
	struct i2c_client *cocci_id/* drivers/watchdog/ziirave_wdt.c 222 */;
	const u16 cocci_id/* drivers/watchdog/ziirave_wdt.c 221 */;
	u16 cocci_id/* drivers/watchdog/ziirave_wdt.c 221 */;
	u8 cocci_id/* drivers/watchdog/ziirave_wdt.c 219 */;
	u32 cocci_id/* drivers/watchdog/ziirave_wdt.c 219 */;
	const u8 *cocci_id/* drivers/watchdog/ziirave_wdt.c 219 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/ziirave_wdt.c 218 */;
	int cocci_id/* drivers/watchdog/ziirave_wdt.c 218 */;
	u8 cocci_id/* drivers/watchdog/ziirave_wdt.c 191 */[2];
	unsigned int cocci_id/* drivers/watchdog/ziirave_wdt.c 161 */;
	struct ziirave_wdt_rev *cocci_id/* drivers/watchdog/ziirave_wdt.c 104 */;
}
