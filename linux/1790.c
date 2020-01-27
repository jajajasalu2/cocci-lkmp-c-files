cocci_test_suite() {
	s32 cocci_id/* drivers/iio/light/cm3232.c 87 */;
	struct cm3232_chip {
		struct i2c_client *client;
		struct cm3232_als_info *als_info;
		u8 regs_cmd;
		u16 regs_als;
	} cocci_id/* drivers/iio/light/cm3232.c 69 */;
	struct cm3232_als_info cocci_id/* drivers/iio/light/cm3232.c 61 */;
	struct cm3232_als_info {
		u8 regs_cmd_default;
		u8 hw_id;
		int calibscale;
		int mlux_per_bit;
		int mlux_per_bit_base_it;
	} cocci_id/* drivers/iio/light/cm3232.c 53 */;
	struct i2c_driver cocci_id/* drivers/iio/light/cm3232.c 418 */;
	const struct of_device_id cocci_id/* drivers/iio/light/cm3232.c 412 */[];
	const struct dev_pm_ops cocci_id/* drivers/iio/light/cm3232.c 406 */;
	const struct {
		int val;
		int val2;
		u8 it;
	} cocci_id/* drivers/iio/light/cm3232.c 40 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/cm3232.c 372 */[];
	struct iio_dev *cocci_id/* drivers/iio/light/cm3232.c 331 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/cm3232.c 328 */;
	const struct iio_info cocci_id/* drivers/iio/light/cm3232.c 321 */;
	const struct attribute_group cocci_id/* drivers/iio/light/cm3232.c 317 */;
	struct attribute *cocci_id/* drivers/iio/light/cm3232.c 312 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/cm3232.c 299 */[];
	int cocci_id/* drivers/iio/light/cm3232.c 290 */;
	struct device_attribute *cocci_id/* drivers/iio/light/cm3232.c 288 */;
	char *cocci_id/* drivers/iio/light/cm3232.c 288 */;
	struct device *cocci_id/* drivers/iio/light/cm3232.c 287 */;
	ssize_t cocci_id/* drivers/iio/light/cm3232.c 287 */;
	long cocci_id/* drivers/iio/light/cm3232.c 236 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/cm3232.c 235 */;
	u16 cocci_id/* drivers/iio/light/cm3232.c 222 */;
	u64 cocci_id/* drivers/iio/light/cm3232.c 205 */;
	struct cm3232_als_info *cocci_id/* drivers/iio/light/cm3232.c 201 */;
	struct i2c_client *cocci_id/* drivers/iio/light/cm3232.c 200 */;
	struct cm3232_chip *cocci_id/* drivers/iio/light/cm3232.c 198 */;
	int *cocci_id/* drivers/iio/light/cm3232.c 132 */;
}
