cocci_test_suite() {
	void cocci_id/* drivers/video/fbdev/via/via-gpio.c 83 */;
	struct viafb_gpio_cfg {
		struct gpio_chip gpio_chip;
		struct viafb_dev *vdev;
		struct viafb_gpio *active_gpios[VIAFB_NUM_GPIOS];
		const char *gpio_names[VIAFB_NUM_GPIOS];
	} cocci_id/* drivers/video/fbdev/via/via-gpio.c 73 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/via/via-gpio.c 291 */;
	struct viafb_gpio cocci_id/* drivers/video/fbdev/via/via-gpio.c 27 */[];
	struct via_port_cfg *cocci_id/* drivers/video/fbdev/via/via-gpio.c 212 */;
	struct viafb_dev *cocci_id/* drivers/video/fbdev/via/via-gpio.c 211 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/via/via-gpio.c 209 */;
	struct viafb_gpio {
		char *vg_name;
		u16 vg_io_port;
		u8 vg_port_index;
		int vg_mask_shift;
	} cocci_id/* drivers/video/fbdev/via/via-gpio.c 20 */;
	const char *cocci_id/* drivers/video/fbdev/via/via-gpio.c 195 */;
	struct viafb_pm_hooks cocci_id/* drivers/video/fbdev/via/via-gpio.c 186 */;
	void *cocci_id/* drivers/video/fbdev/via/via-gpio.c 177 */;
	struct viafb_gpio_cfg cocci_id/* drivers/video/fbdev/via/via-gpio.c 143 */;
	u8 cocci_id/* drivers/video/fbdev/via/via-gpio.c 131 */;
	unsigned long cocci_id/* drivers/video/fbdev/via/via-gpio.c 118 */;
	struct viafb_gpio *cocci_id/* drivers/video/fbdev/via/via-gpio.c 117 */;
	struct viafb_gpio_cfg *cocci_id/* drivers/video/fbdev/via/via-gpio.c 116 */;
	struct gpio_chip *cocci_id/* drivers/video/fbdev/via/via-gpio.c 114 */;
	unsigned int cocci_id/* drivers/video/fbdev/via/via-gpio.c 114 */;
	int cocci_id/* drivers/video/fbdev/via/via-gpio.c 114 */;
}
