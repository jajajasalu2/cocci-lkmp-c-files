cocci_test_suite() {
	u8 cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 75 */;
	u32 cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 75 */;
	u16 cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 75 */;
	struct ssp_msg_header cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 72 */;
	__le32 cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 575 */;
	u8 *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 474 */;
	char cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 456 */;
	const int cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 43 */[SSP_SENSOR_MAX];
	struct ssp_msg {
		u16 length;
		u16 options;
		struct list_head list;
		struct completion *done;
		struct ssp_msg_header *h;
		char *buffer;
	} cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 34 */;
	struct iio_dev **cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 271 */;
	struct ssp_sensor_data *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 270 */;
	struct ssp_msg_header {
		u8 cmd;
		__le16 length;
		__le16 options;
		__le32 data;
	}__attribute__((__packed__)) cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 27 */;
	int *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 260 */;
	char *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 260 */;
	const bool cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 185 */;
	struct completion *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 178 */;
	bool cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 154 */;
	struct ssp_data *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 154 */;
	int cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 154 */;
	struct ssp_msg *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 126 */;
	void cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 126 */;
	void *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 116 */;
	const void *cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 110 */;
	unsigned int cocci_id/* drivers/iio/common/ssp_sensors/ssp_spi.c 109 */;
}
