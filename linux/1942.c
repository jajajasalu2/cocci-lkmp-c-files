cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/abp060mg.c 92 */[];
	struct abp_state {
		struct i2c_client *client;
		struct mutex lock;
		int mreq_len;
		int scale;
		int offset;
	} cocci_id/* drivers/iio/pressure/abp060mg.c 77 */;
	struct abp_config cocci_id/* drivers/iio/pressure/abp060mg.c 38 */[];
	struct abp_config {
		int min;
		int max;
	} cocci_id/* drivers/iio/pressure/abp060mg.c 33 */;
	struct i2c_driver cocci_id/* drivers/iio/pressure/abp060mg.c 255 */;
	const struct i2c_device_id cocci_id/* drivers/iio/pressure/abp060mg.c 210 */[];
	enum abp_variant{ABP006KG, ABP010KG, ABP016KG, ABP025KG, ABP040KG, ABP060KG, ABP100KG, ABP160KG, ABP250KG, ABP400KG, ABP600KG, ABP001GG, ABP006KD, ABP010KD, ABP016KD, ABP025KD, ABP040KD, ABP060KD, ABP100KD, ABP160KD, ABP250KD, ABP400KD, ABP001PG, ABP005PG, ABP015PG, ABP030PG, ABP060PG, ABP100PG, ABP150PG, ABP001PD, ABP005PD, ABP015PD, ABP030PD, ABP060PD,} cocci_id/* drivers/iio/pressure/abp060mg.c 20 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/pressure/abp060mg.c 178 */;
	struct abp_config *cocci_id/* drivers/iio/pressure/abp060mg.c 168 */;
	struct iio_dev *cocci_id/* drivers/iio/pressure/abp060mg.c 165 */;
	unsigned long cocci_id/* drivers/iio/pressure/abp060mg.c 165 */;
	void cocci_id/* drivers/iio/pressure/abp060mg.c 165 */;
	const struct iio_info cocci_id/* drivers/iio/pressure/abp060mg.c 161 */;
	long cocci_id/* drivers/iio/pressure/abp060mg.c 132 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/abp060mg.c 131 */;
	u8 *cocci_id/* drivers/iio/pressure/abp060mg.c 108 */;
	u16 cocci_id/* drivers/iio/pressure/abp060mg.c 104 */;
	__be16 cocci_id/* drivers/iio/pressure/abp060mg.c 103 */[2];
	struct i2c_client *cocci_id/* drivers/iio/pressure/abp060mg.c 102 */;
	struct abp_state *cocci_id/* drivers/iio/pressure/abp060mg.c 100 */;
	int *cocci_id/* drivers/iio/pressure/abp060mg.c 100 */;
	int cocci_id/* drivers/iio/pressure/abp060mg.c 100 */;
}
