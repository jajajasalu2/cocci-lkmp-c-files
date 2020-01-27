cocci_test_suite() {
	const char *cocci_id/* drivers/fpga/ice40-spi.c 97 */;
	size_t cocci_id/* drivers/fpga/ice40-spi.c 97 */;
	int cocci_id/* drivers/fpga/ice40-spi.c 96 */;
	struct spi_transfer cocci_id/* drivers/fpga/ice40-spi.c 47 */;
	struct spi_message cocci_id/* drivers/fpga/ice40-spi.c 46 */;
	struct ice40_fpga_priv *cocci_id/* drivers/fpga/ice40-spi.c 34 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/ice40-spi.c 32 */;
	struct fpga_manager *cocci_id/* drivers/fpga/ice40-spi.c 32 */;
	struct ice40_fpga_priv {
		struct spi_device *dev;
		struct gpio_desc *reset;
		struct gpio_desc *cdone;
	} cocci_id/* drivers/fpga/ice40-spi.c 26 */;
	struct spi_driver cocci_id/* drivers/fpga/ice40-spi.c 200 */;
	const struct of_device_id cocci_id/* drivers/fpga/ice40-spi.c 194 */[];
	struct device *cocci_id/* drivers/fpga/ice40-spi.c 131 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/ice40-spi.c 122 */;
	const u8 cocci_id/* drivers/fpga/ice40-spi.c 109 */[ICE40_SPI_NUM_ACTIVATION_BYTES];
	struct spi_device *cocci_id/* drivers/fpga/ice40-spi.c 108 */;
	struct fpga_image_info *cocci_id/* drivers/fpga/ice40-spi.c 105 */;
}
