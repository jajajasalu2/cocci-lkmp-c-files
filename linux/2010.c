cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/accel/mma9551.c 610 */;
	const struct i2c_device_id cocci_id/* drivers/iio/accel/mma9551.c 603 */[];
	const struct acpi_device_id cocci_id/* drivers/iio/accel/mma9551.c 596 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/accel/mma9551.c 450 */;
	struct mma9551_data {
		struct i2c_client *client;
		struct mutex mutex;
		int event_enabled[3];
		int irqs[MMA9551_GPIO_COUNT];
	} cocci_id/* drivers/iio/accel/mma9551.c 45 */;
	struct i2c_client *cocci_id/* drivers/iio/accel/mma9551.c 449 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/accel/mma9551.c 440 */;
	const char *cocci_id/* drivers/iio/accel/mma9551.c 438 */;
	struct device *cocci_id/* drivers/iio/accel/mma9551.c 408 */;
	struct gpio_desc *cocci_id/* drivers/iio/accel/mma9551.c 405 */;
	enum mma9551_tilt_axis{mma9551_x=0, mma9551_y, mma9551_z,} cocci_id/* drivers/iio/accel/mma9551.c 39 */;
	u8 cocci_id/* drivers/iio/accel/mma9551.c 340 */;
	u16 cocci_id/* drivers/iio/accel/mma9551.c 339 */;
	irqreturn_t cocci_id/* drivers/iio/accel/mma9551.c 334 */;
	void *cocci_id/* drivers/iio/accel/mma9551.c 334 */;
	const struct iio_info cocci_id/* drivers/iio/accel/mma9551.c 326 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/mma9551.c 316 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/accel/mma9551.c 300 */;
	int *cocci_id/* drivers/iio/accel/mma9551.c 277 */;
	enum iio_event_info cocci_id/* drivers/iio/accel/mma9551.c 276 */;
	enum mma9551_gpio_pin cocci_id/* drivers/iio/accel/mma9551.c 179 */;
	enum mma9551_tilt_axis cocci_id/* drivers/iio/accel/mma9551.c 168 */;
	struct mma9551_data *cocci_id/* drivers/iio/accel/mma9551.c 167 */;
	enum iio_modifier cocci_id/* drivers/iio/accel/mma9551.c 164 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/mma9551.c 163 */;
	int cocci_id/* drivers/iio/accel/mma9551.c 163 */;
	enum iio_event_direction cocci_id/* drivers/iio/accel/mma9551.c 150 */;
	enum iio_event_type cocci_id/* drivers/iio/accel/mma9551.c 149 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/mma9551.c 148 */;
	long cocci_id/* drivers/iio/accel/mma9551.c 108 */;
}
