cocci_test_suite() {
	int cocci_id/* drivers/mmc/core/slot-gpio.c 41 */;
	irqreturn_t cocci_id/* drivers/mmc/core/slot-gpio.c 29 */;
	void *cocci_id/* drivers/mmc/core/slot-gpio.c 29 */;
	struct mmc_gpio *cocci_id/* drivers/mmc/core/slot-gpio.c 209 */;
	bool cocci_id/* drivers/mmc/core/slot-gpio.c 207 */;
	struct mmc_host *cocci_id/* drivers/mmc/core/slot-gpio.c 207 */;
	struct mmc_gpio {
		struct gpio_desc *ro_gpio;
		struct gpio_desc *cd_gpio;
		bool override_cd_active_level;
		irqreturn_t (*cd_gpio_isr)(int irq, void *dev_id);
		char *ro_label;
		char *cd_label;
		u32 cd_debounce_delay_ms;
	} cocci_id/* drivers/mmc/core/slot-gpio.c 19 */;
	struct gpio_desc *cocci_id/* drivers/mmc/core/slot-gpio.c 184 */;
	bool *cocci_id/* drivers/mmc/core/slot-gpio.c 181 */;
	unsigned int cocci_id/* drivers/mmc/core/slot-gpio.c 180 */;
	const char *cocci_id/* drivers/mmc/core/slot-gpio.c 179 */;
	irqreturn_t (*cocci_id/* drivers/mmc/core/slot-gpio.c 155 */)(int irq,
								      void *dev_id);
	void cocci_id/* drivers/mmc/core/slot-gpio.c 154 */;
}
