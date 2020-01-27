cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpio/gpio-viperboard.c 74 */;
	unsigned char cocci_id/* drivers/gpio/gpio-viperboard.c 73 */;
	struct vprbrd_gpio {
		struct gpio_chip gpioa;
		u32 gpioa_out;
		u32 gpioa_val;
		struct gpio_chip gpiob;
		u32 gpiob_out;
		u32 gpiob_val;
		struct vprbrd *vb;
	} cocci_id/* drivers/gpio/gpio-viperboard.c 62 */;
	struct vprbrd_gpiob_msg {
		u8 cmd;
		u16 val;
		u16 mask;
	}__packed cocci_id/* drivers/gpio/gpio-viperboard.c 56 */;
	void __exit cocci_id/* drivers/gpio/gpio-viperboard.c 470 */;
	void cocci_id/* drivers/gpio/gpio-viperboard.c 470 */;
	int __init cocci_id/* drivers/gpio/gpio-viperboard.c 440 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-viperboard.c 435 */;
	struct vprbrd_gpioa_msg {
		u8 cmd;
		u8 clk;
		u8 offset;
		u8 t1;
		u8 t2;
		u8 invert;
		u8 pwmlevel;
		u8 outval;
		u8 risefall;
		u8 answer;
		u8 __fill;
	}__packed cocci_id/* drivers/gpio/gpio-viperboard.c 42 */;
	struct vprbrd_gpio *cocci_id/* drivers/gpio/gpio-viperboard.c 388 */;
	struct vprbrd *cocci_id/* drivers/gpio/gpio-viperboard.c 387 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-viperboard.c 385 */;
	int cocci_id/* drivers/gpio/gpio-viperboard.c 385 */;
	struct vprbrd_gpiob_msg cocci_id/* drivers/gpio/gpio-viperboard.c 292 */;
	struct vprbrd_gpiob_msg *cocci_id/* drivers/gpio/gpio-viperboard.c 282 */;
	u16 cocci_id/* drivers/gpio/gpio-viperboard.c 279 */;
	struct vprbrd_gpioa_msg cocci_id/* drivers/gpio/gpio-viperboard.c 198 */;
	struct vprbrd_gpioa_msg *cocci_id/* drivers/gpio/gpio-viperboard.c 178 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-viperboard.c 172 */;
}
