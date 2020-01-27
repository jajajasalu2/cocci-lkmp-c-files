cocci_test_suite() {
	const char *cocci_id/* drivers/macintosh/therm_windtunnel.c 93 */;
	struct {
		int fan_down_setting;
		int temp;
		int fan_up_setting;
	} cocci_id/* drivers/macintosh/therm_windtunnel.c 73 */[];
	void cocci_id/* drivers/macintosh/therm_windtunnel.c 537 */;
	void __exit cocci_id/* drivers/macintosh/therm_windtunnel.c 536 */;
	struct device_node *cocci_id/* drivers/macintosh/therm_windtunnel.c 506 */;
	const struct apple_thermal_info *cocci_id/* drivers/macintosh/therm_windtunnel.c 505 */;
	int __init cocci_id/* drivers/macintosh/therm_windtunnel.c 502 */;
	struct apple_thermal_info {
		u8 id;
		u8 fan_count;
		u8 thermostat_count;
		u8 unused;
	} cocci_id/* drivers/macintosh/therm_windtunnel.c 495 */;
	struct {
		volatile int running;
		struct task_struct *poll_task;
		struct mutex lock;
		struct platform_device *of_dev;
		struct i2c_client *thermostat;
		struct i2c_client *fan;
		int overheat_temp;
		int overheat_hyst;
		int temp;
		int casetemp;
		int fan_level;
		int downind;
		int upind;
		int r0,r1,r20,r23,r25;
	} cocci_id/* drivers/macintosh/therm_windtunnel.c 49 */;
	struct platform_driver cocci_id/* drivers/macintosh/therm_windtunnel.c 486 */;
	const struct of_device_id cocci_id/* drivers/macintosh/therm_windtunnel.c 479 */[];
	struct platform_device *cocci_id/* drivers/macintosh/therm_windtunnel.c 445 */;
	struct i2c_driver cocci_id/* drivers/macintosh/therm_windtunnel.c 431 */;
	const struct i2c_device_id *cocci_id/* drivers/macintosh/therm_windtunnel.c 414 */;
	const struct i2c_device_id cocci_id/* drivers/macintosh/therm_windtunnel.c 406 */[];
	enum chip{ds1775, adm1030,} cocci_id/* drivers/macintosh/therm_windtunnel.c 404 */;
	struct i2c_client *cocci_id/* drivers/macintosh/therm_windtunnel.c 356 */;
	int cocci_id/* drivers/macintosh/therm_windtunnel.c 355 */;
	struct i2c_board_info cocci_id/* drivers/macintosh/therm_windtunnel.c 320 */;
	const unsigned short cocci_id/* drivers/macintosh/therm_windtunnel.c 307 */[];
	struct i2c_adapter *cocci_id/* drivers/macintosh/therm_windtunnel.c 304 */;
	void *cocci_id/* drivers/macintosh/therm_windtunnel.c 275 */;
	unsigned int cocci_id/* drivers/macintosh/therm_windtunnel.c 149 */;
	u8 cocci_id/* drivers/macintosh/therm_windtunnel.c 140 */[2];
	u8 cocci_id/* drivers/macintosh/therm_windtunnel.c 122 */[3];
	struct device_attribute *cocci_id/* drivers/macintosh/therm_windtunnel.c 105 */;
	struct device *cocci_id/* drivers/macintosh/therm_windtunnel.c 105 */;
	char *cocci_id/* drivers/macintosh/therm_windtunnel.c 105 */;
	ssize_t cocci_id/* drivers/macintosh/therm_windtunnel.c 104 */;
}
