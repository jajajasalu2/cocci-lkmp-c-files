cocci_test_suite() {
	u8 cocci_id/* drivers/leds/leds-mlxreg.c 60 */;
	struct mlxreg_led_priv_data {
		struct platform_device *pdev;
		struct mlxreg_core_platform_data *pdata;
		struct mutex access_lock;
	} cocci_id/* drivers/leds/leds-mlxreg.c 53 */;
	struct mlxreg_led_data cocci_id/* drivers/leds/leds-mlxreg.c 44 */;
	struct mlxreg_led_data {
		struct mlxreg_core_data *data;
		struct led_classdev led_cdev;
		u8 base_color;
		void *data_parent;
		char led_cdev_name[MLXREG_CORE_LABEL_MAX_SIZE];
	} cocci_id/* drivers/leds/leds-mlxreg.c 36 */;
	struct platform_driver cocci_id/* drivers/leds/leds-mlxreg.c 287 */;
	struct platform_device *cocci_id/* drivers/leds/leds-mlxreg.c 256 */;
	u32 cocci_id/* drivers/leds/leds-mlxreg.c 191 */;
	struct mlxreg_core_data *cocci_id/* drivers/leds/leds-mlxreg.c 187 */;
	struct mlxreg_core_platform_data *cocci_id/* drivers/leds/leds-mlxreg.c 186 */;
	struct mlxreg_led_priv_data *cocci_id/* drivers/leds/leds-mlxreg.c 184 */;
	struct mlxreg_led_data *cocci_id/* drivers/leds/leds-mlxreg.c 157 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-mlxreg.c 154 */;
	unsigned long *cocci_id/* drivers/leds/leds-mlxreg.c 154 */;
	int cocci_id/* drivers/leds/leds-mlxreg.c 153 */;
	enum led_brightness cocci_id/* drivers/leds/leds-mlxreg.c 145 */;
}
