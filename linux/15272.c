cocci_test_suite() {
	struct mlxcpld_led_profile {
		u8 offset;
		u8 mask;
		u8 base_color;
		enum led_brightness brightness;
		const char *name;
	} cocci_id/* drivers/leds/leds-mlxcpld.c 98 */;
	struct mlxcpld_led_priv {
		struct led_classdev cdev;
		struct mlxcpld_param param;
	} cocci_id/* drivers/leds/leds-mlxcpld.c 83 */;
	struct mlxcpld_param {
		u8 offset;
		u8 mask;
		u8 base_color;
	} cocci_id/* drivers/leds/leds-mlxcpld.c 72 */;
	void __exit cocci_id/* drivers/leds/leds-mlxcpld.c 423 */;
	struct platform_device *cocci_id/* drivers/leds/leds-mlxcpld.c 402 */;
	int __init cocci_id/* drivers/leds/leds-mlxcpld.c 400 */;
	struct platform_driver cocci_id/* drivers/leds/leds-mlxcpld.c 394 */;
	struct mlxcpld_led_priv cocci_id/* drivers/leds/leds-mlxcpld.c 334 */;
	struct device *cocci_id/* drivers/leds/leds-mlxcpld.c 326 */;
	struct mlxcpld_led_priv *cocci_id/* drivers/leds/leds-mlxcpld.c 301 */;
	unsigned long *cocci_id/* drivers/leds/leds-mlxcpld.c 298 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-mlxcpld.c 297 */;
	int cocci_id/* drivers/leds/leds-mlxcpld.c 297 */;
	enum led_brightness cocci_id/* drivers/leds/leds-mlxcpld.c 283 */;
	void cocci_id/* drivers/leds/leds-mlxcpld.c 282 */;
	u32 cocci_id/* drivers/leds/leds-mlxcpld.c 250 */;
	u8 *cocci_id/* drivers/leds/leds-mlxcpld.c 248 */;
	u8 cocci_id/* drivers/leds/leds-mlxcpld.c 247 */;
	u16 cocci_id/* drivers/leds/leds-mlxcpld.c 247 */;
	const char *cocci_id/* drivers/leds/leds-mlxcpld.c 232 */;
	enum mlxcpld_led_platform_types cocci_id/* drivers/leds/leds-mlxcpld.c 229 */;
	const char *cocci_id/* drivers/leds/leds-mlxcpld.c 224 */[];
	enum mlxcpld_led_platform_types{MLXCPLD_LED_PLATFORM_DEFAULT, MLXCPLD_LED_PLATFORM_MSN2100,} cocci_id/* drivers/leds/leds-mlxcpld.c 219 */;
	struct mlxcpld_led_profile cocci_id/* drivers/leds/leds-mlxcpld.c 128 */[];
	struct mlxcpld_led_pdata *cocci_id/* drivers/leds/leds-mlxcpld.c 122 */;
	struct mlxcpld_led_pdata {
		struct platform_device *pdev;
		struct mlxcpld_led_priv *pled;
		struct mlxcpld_led_profile *profile;
		int num_led_instances;
		spinlock_t lock;
	} cocci_id/* drivers/leds/leds-mlxcpld.c 114 */;
}
