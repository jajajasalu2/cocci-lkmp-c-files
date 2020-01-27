cocci_test_suite() {
	struct st33zp24_spi_phy {
		struct spi_device *spi_device;
		u8 tx_buf[ST33ZP24_SPI_BUFFER_SIZE];
		u8 rx_buf[ST33ZP24_SPI_BUFFER_SIZE];
		int io_lpcpd;
		int latency;
	} cocci_id/* drivers/char/tpm/st33zp24/spi.c 58 */;
	struct spi_driver cocci_id/* drivers/char/tpm/st33zp24/spi.c 417 */;
	const struct acpi_device_id cocci_id/* drivers/char/tpm/st33zp24/spi.c 408 */[];
	const struct of_device_id cocci_id/* drivers/char/tpm/st33zp24/spi.c 402 */[];
	const struct spi_device_id cocci_id/* drivers/char/tpm/st33zp24/spi.c 396 */[];
	struct st33zp24_spi_phy cocci_id/* drivers/char/tpm/st33zp24/spi.c 349 */;
	struct st33zp24_platform_data *cocci_id/* drivers/char/tpm/st33zp24/spi.c 339 */;
	struct device_node *cocci_id/* drivers/char/tpm/st33zp24/spi.c 264 */;
	struct device *cocci_id/* drivers/char/tpm/st33zp24/spi.c 234 */;
	struct gpio_desc *cocci_id/* drivers/char/tpm/st33zp24/spi.c 233 */;
	struct st33zp24_spi_phy *cocci_id/* drivers/char/tpm/st33zp24/spi.c 232 */;
	struct st33zp24_dev *cocci_id/* drivers/char/tpm/st33zp24/spi.c 231 */;
	struct tpm_chip *cocci_id/* drivers/char/tpm/st33zp24/spi.c 230 */;
	struct spi_device *cocci_id/* drivers/char/tpm/st33zp24/spi.c 228 */;
	int cocci_id/* drivers/char/tpm/st33zp24/spi.c 228 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/char/tpm/st33zp24/spi.c 223 */[];
	const struct acpi_gpio_params cocci_id/* drivers/char/tpm/st33zp24/spi.c 221 */;
	const struct st33zp24_phy_ops cocci_id/* drivers/char/tpm/st33zp24/spi.c 216 */;
	u8 cocci_id/* drivers/char/tpm/st33zp24/spi.c 200 */;
	void *cocci_id/* drivers/char/tpm/st33zp24/spi.c 196 */;
	struct spi_transfer cocci_id/* drivers/char/tpm/st33zp24/spi.c 150 */;
	u8 *cocci_id/* drivers/char/tpm/st33zp24/spi.c 144 */;
}
