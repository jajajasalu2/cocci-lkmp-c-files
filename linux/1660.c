cocci_test_suite() {
	const struct ak8975_platform_data *cocci_id/* drivers/iio/magnetometer/ak8975.c 863 */;
	enum asahi_compass_chipset cocci_id/* drivers/iio/magnetometer/ak8975.c 862 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/magnetometer/ak8975.c 855 */;
	struct i2c_client *cocci_id/* drivers/iio/magnetometer/ak8975.c 854 */;
	const struct iio_poll_func *cocci_id/* drivers/iio/magnetometer/ak8975.c 846 */;
	irqreturn_t cocci_id/* drivers/iio/magnetometer/ak8975.c 844 */;
	void *cocci_id/* drivers/iio/magnetometer/ak8975.c 844 */;
	s16 cocci_id/* drivers/iio/magnetometer/ak8975.c 831 */;
	u8 *cocci_id/* drivers/iio/magnetometer/ak8975.c 824 */;
	__le16 cocci_id/* drivers/iio/magnetometer/ak8975.c 809 */[3];
	s16 cocci_id/* drivers/iio/magnetometer/ak8975.c 808 */[8];
	int cocci_id/* drivers/iio/magnetometer/ak8975.c 807 */;
	const struct ak_def *cocci_id/* drivers/iio/magnetometer/ak8975.c 806 */;
	const struct i2c_client *cocci_id/* drivers/iio/magnetometer/ak8975.c 805 */;
	struct ak8975_data *cocci_id/* drivers/iio/magnetometer/ak8975.c 804 */;
	struct iio_dev *cocci_id/* drivers/iio/magnetometer/ak8975.c 802 */;
	void cocci_id/* drivers/iio/magnetometer/ak8975.c 802 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/magnetometer/ak8975.c 792 */;
	enum asahi_compass_chipset *cocci_id/* drivers/iio/magnetometer/ak8975.c 790 */;
	const char *cocci_id/* drivers/iio/magnetometer/ak8975.c 789 */;
	struct device *cocci_id/* drivers/iio/magnetometer/ak8975.c 789 */;
	const struct acpi_device_id cocci_id/* drivers/iio/magnetometer/ak8975.c 776 */[];
	const struct iio_info cocci_id/* drivers/iio/magnetometer/ak8975.c 771 */;
	const unsigned long cocci_id/* drivers/iio/magnetometer/ak8975.c 769 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/magnetometer/ak8975.c 764 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/magnetometer/ak8975.c 741 */[];
	const struct iio_chan_spec *cocci_id/* drivers/iio/magnetometer/ak8975.c 734 */;
	const struct iio_dev *cocci_id/* drivers/iio/magnetometer/ak8975.c 733 */;
	const struct iio_mount_matrix *cocci_id/* drivers/iio/magnetometer/ak8975.c 732 */;
	__le16 cocci_id/* drivers/iio/magnetometer/ak8975.c 680 */;
	int *cocci_id/* drivers/iio/magnetometer/ak8975.c 675 */;
	u32 cocci_id/* drivers/iio/magnetometer/ak8975.c 571 */;
	u8 cocci_id/* drivers/iio/magnetometer/ak8975.c 457 */;
	enum ak_ctrl_mode cocci_id/* drivers/iio/magnetometer/ak8975.c 455 */;
	u8 cocci_id/* drivers/iio/magnetometer/ak8975.c 413 */[2];
	const struct ak8975_data *cocci_id/* drivers/iio/magnetometer/ak8975.c 400 */;
	struct ak8975_data {
		struct i2c_client *client;
		const struct ak_def *def;
		struct mutex lock;
		u8 asa[3];
		long raw_to_gauss[3];
		int eoc_gpio;
		int eoc_irq;
		wait_queue_head_t data_ready_queue;
		unsigned long flags;
		u8 cntl_cache;
		struct iio_mount_matrix orientation;
		struct regulator *vdd;
		struct regulator *vid;
	} cocci_id/* drivers/iio/magnetometer/ak8975.c 357 */;
	const struct ak_def cocci_id/* drivers/iio/magnetometer/ak8975.c 251 */[AK_MAX_TYPE];
	struct ak_def {
		enum asahi_compass_chipset type;
		long (*raw_to_gauss)(u16 data);
		u16 range;
		u8 ctrl_regs[REGS_END];
		u8 ctrl_masks[MASK_END];
		u8 ctrl_modes[MODE_END];
		u8 data_regs[3];
	} cocci_id/* drivers/iio/magnetometer/ak8975.c 241 */;
	enum ak_ctrl_mode{POWER_DOWN, MODE_ONCE, SELF_TEST, FUSE_ROM, MODE_END,} cocci_id/* drivers/iio/magnetometer/ak8975.c 233 */;
	enum ak_ctrl_reg_mask{ST1_DRDY, ST2_HOFL, ST2_DERR, CNTL_MODE, MASK_END,} cocci_id/* drivers/iio/magnetometer/ak8975.c 225 */;
	enum ak_ctrl_reg_addr{ST1, ST2, CNTL, ASA_BASE, MAX_REGS, REGS_END,} cocci_id/* drivers/iio/magnetometer/ak8975.c 216 */;
	enum asahi_compass_chipset{AK8975, AK8963, AK09911, AK09912, AK_MAX_TYPE,} cocci_id/* drivers/iio/magnetometer/ak8975.c 208 */;
	u16 cocci_id/* drivers/iio/magnetometer/ak8975.c 202 */;
	long cocci_id/* drivers/iio/magnetometer/ak8975.c 202 */;
	struct i2c_driver cocci_id/* drivers/iio/magnetometer/ak8975.c 1088 */;
	const struct of_device_id cocci_id/* drivers/iio/magnetometer/ak8975.c 1075 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/magnetometer/ak8975.c 1064 */[];
}