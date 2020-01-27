cocci_test_suite() {
	const void *cocci_id/* drivers/staging/wfx/bus_spi.c 88 */;
	u16 *cocci_id/* drivers/staging/wfx/bus_spi.c 67 */;
	struct spi_transfer cocci_id/* drivers/staging/wfx/bus_spi.c 59 */;
	struct spi_message cocci_id/* drivers/staging/wfx/bus_spi.c 58 */;
	u16 cocci_id/* drivers/staging/wfx/bus_spi.c 57 */;
	struct wfx_spi_priv *cocci_id/* drivers/staging/wfx/bus_spi.c 56 */;
	unsigned int cocci_id/* drivers/staging/wfx/bus_spi.c 53 */;
	struct wfx_spi_priv {
		struct spi_device *func;
		struct wfx_dev *core;
		struct gpio_desc *gpio_reset;
		struct work_struct request_rx;
		bool need_swab;
	} cocci_id/* drivers/staging/wfx/bus_spi.c 36 */;
	const struct wfx_platform_data cocci_id/* drivers/staging/wfx/bus_spi.c 30 */;
	struct spi_driver cocci_id/* drivers/staging/wfx/bus_spi.c 259 */;
	const struct of_device_id cocci_id/* drivers/staging/wfx/bus_spi.c 252 */[];
	const struct spi_device_id cocci_id/* drivers/staging/wfx/bus_spi.c 245 */[];
	int cocci_id/* drivers/staging/wfx/bus_spi.c 23 */;
	struct spi_device *cocci_id/* drivers/staging/wfx/bus_spi.c 227 */;
	const struct hwbus_ops cocci_id/* drivers/staging/wfx/bus_spi.c 161 */;
	void *cocci_id/* drivers/staging/wfx/bus_spi.c 155 */;
	size_t cocci_id/* drivers/staging/wfx/bus_spi.c 155 */;
	struct wfx_spi_priv cocci_id/* drivers/staging/wfx/bus_spi.c 150 */;
	struct work_struct *cocci_id/* drivers/staging/wfx/bus_spi.c 147 */;
	irqreturn_t cocci_id/* drivers/staging/wfx/bus_spi.c 135 */;
	void cocci_id/* drivers/staging/wfx/bus_spi.c 127 */;
}
