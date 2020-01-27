cocci_test_suite() {
	struct max3191x_chip {
		struct gpio_chip gpio;
		struct mutex lock;
		u32 nchips;
		enum max3191x_mode mode;
		struct gpio_descs *modesel_pins;
		struct gpio_descs *fault_pins;
		struct gpio_descs *db0_pins;
		struct gpio_descs *db1_pins;
		struct spi_message mesg;
		struct spi_transfer xfer;
		unsigned long *crc_error;
		unsigned long *overtemp;
		unsigned long *undervolt1;
		unsigned long *undervolt2;
		unsigned long *fault;
		bool ignore_uv;
	} cocci_id/* drivers/gpio/gpio-max3191x.c 72 */;
	struct spi_driver cocci_id/* drivers/gpio/gpio-max3191x.c 486 */;
	const struct spi_device_id cocci_id/* drivers/gpio/gpio-max3191x.c 475 */[];
	const struct of_device_id cocci_id/* drivers/gpio/gpio-max3191x.c 463 */[];
	struct spi_driver *cocci_id/* drivers/gpio/gpio-max3191x.c 456 */;
	int __init cocci_id/* drivers/gpio/gpio-max3191x.c 456 */;
	enum max3191x_mode{STATUS_BYTE_ENABLED, STATUS_BYTE_DISABLED,} cocci_id/* drivers/gpio/gpio-max3191x.c 41 */;
	long cocci_id/* drivers/gpio/gpio-max3191x.c 375 */;
	struct spi_device *cocci_id/* drivers/gpio/gpio-max3191x.c 359 */;
	int cocci_id/* drivers/gpio/gpio-max3191x.c 337 */;
	enum gpiod_flags cocci_id/* drivers/gpio/gpio-max3191x.c 334 */;
	unsigned int cocci_id/* drivers/gpio/gpio-max3191x.c 334 */;
	const char *cocci_id/* drivers/gpio/gpio-max3191x.c 333 */;
	struct device *cocci_id/* drivers/gpio/gpio-max3191x.c 333 */;
	struct gpio_descs *cocci_id/* drivers/gpio/gpio-max3191x.c 332 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-max3191x.c 317 */;
	struct gpio_array *cocci_id/* drivers/gpio/gpio-max3191x.c 314 */;
	struct gpio_desc **cocci_id/* drivers/gpio/gpio-max3191x.c 313 */;
	void cocci_id/* drivers/gpio/gpio-max3191x.c 312 */;
	u32 cocci_id/* drivers/gpio/gpio-max3191x.c 270 */;
	unsigned long cocci_id/* drivers/gpio/gpio-max3191x.c 238 */;
	const unsigned int cocci_id/* drivers/gpio/gpio-max3191x.c 236 */;
	u8 *cocci_id/* drivers/gpio/gpio-max3191x.c 224 */;
	u8 cocci_id/* drivers/gpio/gpio-max3191x.c 211 */;
	bool cocci_id/* drivers/gpio/gpio-max3191x.c 191 */;
	struct max3191x_chip *cocci_id/* drivers/gpio/gpio-max3191x.c 191 */;
	struct gpio_desc *cocci_id/* drivers/gpio/gpio-max3191x.c 170 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-max3191x.c 101 */;
}
