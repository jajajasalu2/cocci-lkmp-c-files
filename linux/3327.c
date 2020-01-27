cocci_test_suite() {
	struct device_attribute *cocci_id/* drivers/hwmon/max1111.c 99 */;
	char *cocci_id/* drivers/hwmon/max1111.c 99 */;
	ssize_t cocci_id/* drivers/hwmon/max1111.c 98 */;
	uint8_t cocci_id/* drivers/hwmon/max1111.c 52 */;
	struct device *cocci_id/* drivers/hwmon/max1111.c 49 */;
	struct max1111_data {
		struct spi_device *spi;
		struct device *hwmon_dev;
		struct spi_message msg;
		struct spi_transfer xfer[2];
		uint8_t tx_buf[MAX1111_TX_BUF_SIZE];
		uint8_t rx_buf[MAX1111_RX_BUF_SIZE];
		struct mutex drvdata_lock;
		int sel_sh;
		int lsb;
	} cocci_id/* drivers/hwmon/max1111.c 36 */;
	struct spi_driver cocci_id/* drivers/hwmon/max1111.c 280 */;
	const struct spi_device_id cocci_id/* drivers/hwmon/max1111.c 271 */[];
	enum chips{max1110, max1111, max1112, max1113,} cocci_id/* drivers/hwmon/max1111.c 22 */;
	struct max1111_data cocci_id/* drivers/hwmon/max1111.c 194 */;
	struct max1111_data *cocci_id/* drivers/hwmon/max1111.c 185 */;
	enum chips cocci_id/* drivers/hwmon/max1111.c 184 */;
	struct spi_device *cocci_id/* drivers/hwmon/max1111.c 182 */;
	int cocci_id/* drivers/hwmon/max1111.c 182 */;
	struct spi_transfer *cocci_id/* drivers/hwmon/max1111.c 163 */;
	struct spi_message *cocci_id/* drivers/hwmon/max1111.c 162 */;
	const struct attribute_group cocci_id/* drivers/hwmon/max1111.c 156 */;
	struct attribute *cocci_id/* drivers/hwmon/max1111.c 148 */[];
}
