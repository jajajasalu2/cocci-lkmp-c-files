cocci_test_suite() {
	const u8 cocci_id/* drivers/fpga/xilinx-spi.c 97 */[1];
	struct spi_device *cocci_id/* drivers/fpga/xilinx-spi.c 96 */;
	struct xilinx_spi_conf *cocci_id/* drivers/fpga/xilinx-spi.c 94 */;
	int cocci_id/* drivers/fpga/xilinx-spi.c 94 */;
	size_t cocci_id/* drivers/fpga/xilinx-spi.c 69 */;
	const char *cocci_id/* drivers/fpga/xilinx-spi.c 68 */;
	const size_t cocci_id/* drivers/fpga/xilinx-spi.c 44 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/xilinx-spi.c 29 */;
	struct xilinx_spi_conf {
		struct spi_device *spi;
		struct gpio_desc *prog_b;
		struct gpio_desc *done;
	} cocci_id/* drivers/fpga/xilinx-spi.c 23 */;
	struct spi_driver cocci_id/* drivers/fpga/xilinx-spi.c 192 */;
	const struct of_device_id cocci_id/* drivers/fpga/xilinx-spi.c 186 */[];
	struct fpga_manager *cocci_id/* drivers/fpga/xilinx-spi.c 143 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/xilinx-spi.c 133 */;
	unsigned long cocci_id/* drivers/fpga/xilinx-spi.c 111 */;
	struct fpga_image_info *cocci_id/* drivers/fpga/xilinx-spi.c 108 */;
}
