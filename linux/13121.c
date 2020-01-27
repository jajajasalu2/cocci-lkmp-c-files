cocci_test_suite() {
	int cocci_id/* drivers/fpga/altera-ps-spi.c 98 */;
	void cocci_id/* drivers/fpga/altera-ps-spi.c 98 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/altera-ps-spi.c 88 */;
	const struct of_device_id cocci_id/* drivers/fpga/altera-ps-spi.c 81 */[];
	const struct altera_ps_data *cocci_id/* drivers/fpga/altera-ps-spi.c 76 */[];
	struct altera_ps_data cocci_id/* drivers/fpga/altera-ps-spi.c 67 */;
	struct altera_ps_conf {
		struct gpio_desc *config;
		struct gpio_desc *confd;
		struct gpio_desc *status;
		struct spi_device *spi;
		const struct altera_ps_data *data;
		u32 info_flags;
		char mgr_name[64];
	} cocci_id/* drivers/fpga/altera-ps-spi.c 39 */;
	struct spi_driver cocci_id/* drivers/fpga/altera-ps-spi.c 332 */;
	const struct spi_device_id cocci_id/* drivers/fpga/altera-ps-spi.c 324 */[];
	struct altera_ps_data {
		enum altera_ps_devtype devtype;
		int status_wait_min_us;
		int status_wait_max_us;
		int t_cfg_us;
		int t_st2ck_us;
	} cocci_id/* drivers/fpga/altera-ps-spi.c 31 */;
	struct fpga_manager *cocci_id/* drivers/fpga/altera-ps-spi.c 260 */;
	enum altera_ps_devtype{CYCLONE5, ARRIA10,} cocci_id/* drivers/fpga/altera-ps-spi.c 26 */;
	const struct of_device_id *cocci_id/* drivers/fpga/altera-ps-spi.c 259 */;
	struct altera_ps_conf *cocci_id/* drivers/fpga/altera-ps-spi.c 258 */;
	struct spi_device *cocci_id/* drivers/fpga/altera-ps-spi.c 256 */;
	kernel_ulong_t cocci_id/* drivers/fpga/altera-ps-spi.c 242 */;
	const struct spi_device_id *cocci_id/* drivers/fpga/altera-ps-spi.c 240 */;
	const struct altera_ps_data *cocci_id/* drivers/fpga/altera-ps-spi.c 240 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/altera-ps-spi.c 233 */;
	const char cocci_id/* drivers/fpga/altera-ps-spi.c 205 */[];
	struct fpga_image_info *cocci_id/* drivers/fpga/altera-ps-spi.c 202 */;
	char *cocci_id/* drivers/fpga/altera-ps-spi.c 187 */;
	size_t cocci_id/* drivers/fpga/altera-ps-spi.c 176 */;
	const char *cocci_id/* drivers/fpga/altera-ps-spi.c 175 */;
	const u32 *cocci_id/* drivers/fpga/altera-ps-spi.c 157 */;
	u32 *cocci_id/* drivers/fpga/altera-ps-spi.c 155 */;
}
