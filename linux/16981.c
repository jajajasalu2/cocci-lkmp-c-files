cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/touchscreen/surface3_spi.c 98 */;
	u16 cocci_id/* drivers/input/touchscreen/surface3_spi.c 97 */;
	struct surface3_ts_data_pen {
		u8 status;
		__le16 x;
		__le16 y;
		__le16 pressure;
		u8 padding;
	}__packed cocci_id/* drivers/input/touchscreen/surface3_spi.c 50 */;
	struct spi_driver cocci_id/* drivers/input/touchscreen/surface3_spi.c 410 */;
	const struct acpi_device_id cocci_id/* drivers/input/touchscreen/surface3_spi.c 403 */[];
	int __maybe_unused cocci_id/* drivers/input/touchscreen/surface3_spi.c 386 */;
	struct surface3_ts_data_finger {
		u8 status;
		__le16 tracking_id;
		__le16 x;
		__le16 cx;
		__le16 y;
		__le16 cy;
		__le16 width;
		__le16 height;
		u32 padding;
	}__packed cocci_id/* drivers/input/touchscreen/surface3_spi.c 38 */;
	struct spi_device *cocci_id/* drivers/input/touchscreen/surface3_spi.c 329 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/surface3_spi.c 290 */;
	struct surface3_ts_data *cocci_id/* drivers/input/touchscreen/surface3_spi.c 288 */;
	int cocci_id/* drivers/input/touchscreen/surface3_spi.c 288 */;
	struct surface3_ts_data {
		struct spi_device *spi;
		struct gpio_desc *gpiod_rst[2];
		struct input_dev *input_dev;
		struct input_dev *pen_input_dev;
		int pen_tool;
		u8 rd_buf[SURFACE3_PACKET_SIZE]____cacheline_aligned;
	} cocci_id/* drivers/input/touchscreen/surface3_spi.c 28 */;
	struct gpio_desc *cocci_id/* drivers/input/touchscreen/surface3_spi.c 228 */;
	struct device *cocci_id/* drivers/input/touchscreen/surface3_spi.c 227 */;
	bool cocci_id/* drivers/input/touchscreen/surface3_spi.c 211 */;
	void cocci_id/* drivers/input/touchscreen/surface3_spi.c 211 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/surface3_spi.c 197 */;
	void *cocci_id/* drivers/input/touchscreen/surface3_spi.c 197 */;
	u8 *cocci_id/* drivers/input/touchscreen/surface3_spi.c 175 */;
	const char cocci_id/* drivers/input/touchscreen/surface3_spi.c 172 */[];
	struct surface3_ts_data_pen *cocci_id/* drivers/input/touchscreen/surface3_spi.c 162 */;
	struct surface3_ts_data_finger cocci_id/* drivers/input/touchscreen/surface3_spi.c 105 */;
	struct surface3_ts_data_finger *cocci_id/* drivers/input/touchscreen/surface3_spi.c 102 */;
}
