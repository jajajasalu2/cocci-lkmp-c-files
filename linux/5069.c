cocci_test_suite() {
	struct gpio_set_config cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 77 */;
	struct rpi_exp_gpio *cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 76 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 74 */;
	unsigned int cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 74 */;
	int cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 74 */;
	struct gpio_get_set_state {
		u32 gpio;
		u32 state;
	} cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 49 */;
	struct gpio_get_config {
		u32 gpio;
		u32 direction;
		u32 polarity;
		u32 term_en;
		u32 term_pull_up;
	} cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 41 */;
	struct gpio_set_config {
		u32 gpio;
		u32 direction;
		u32 polarity;
		u32 term_en;
		u32 term_pull_up;
		u32 state;
	} cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 32 */;
	struct rpi_exp_gpio {
		struct gpio_chip gc;
		struct rpi_firmware *fw;
	} cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 25 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 244 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 238 */[];
	struct rpi_firmware *cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 202 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 200 */;
	struct device *cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 199 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 197 */;
	void cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 178 */;
	struct gpio_get_set_state cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 159 */;
	struct gpio_get_config cocci_id/* drivers/gpio/gpio-raspberrypi-exp.c 135 */;
}
