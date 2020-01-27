cocci_test_suite() {
	const struct iio_trigger_ops cocci_id/* drivers/iio/gyro/bmg160_core.c 962 */;
	struct bmg160_data {
		struct regmap *regmap;
		struct iio_trigger *dready_trig;
		struct iio_trigger *motion_trig;
		struct iio_mount_matrix orientation;
		struct mutex mutex;
		s16 buffer[8];
		u32 dps_range;
		int ev_enable_state;
		int slope_thres;
		bool dready_trigger_on;
		bool motion_trigger_on;
		int irq;
	} cocci_id/* drivers/iio/gyro/bmg160_core.c 93 */;
	bool cocci_id/* drivers/iio/gyro/bmg160_core.c 920 */;
	struct iio_trigger *cocci_id/* drivers/iio/gyro/bmg160_core.c 919 */;
	struct iio_poll_func *cocci_id/* drivers/iio/gyro/bmg160_core.c 876 */;
	const unsigned long cocci_id/* drivers/iio/gyro/bmg160_core.c 870 */[];
	const struct iio_info cocci_id/* drivers/iio/gyro/bmg160_core.c 860 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/bmg160_core.c 846 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/gyro/bmg160_core.c 819 */;
	const struct attribute_group cocci_id/* drivers/iio/gyro/bmg160_core.c 815 */;
	struct attribute *cocci_id/* drivers/iio/gyro/bmg160_core.c 809 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/gyro/bmg160_core.c 799 */[];
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/bmg160_core.c 792 */;
	const struct iio_dev *cocci_id/* drivers/iio/gyro/bmg160_core.c 791 */;
	const struct iio_mount_matrix *cocci_id/* drivers/iio/gyro/bmg160_core.c 790 */;
	enum iio_event_info cocci_id/* drivers/iio/gyro/bmg160_core.c 692 */;
	enum iio_event_direction cocci_id/* drivers/iio/gyro/bmg160_core.c 691 */;
	enum iio_event_type cocci_id/* drivers/iio/gyro/bmg160_core.c 690 */;
	long cocci_id/* drivers/iio/gyro/bmg160_core.c 550 */;
	__le16 cocci_id/* drivers/iio/gyro/bmg160_core.c 521 */;
	int *cocci_id/* drivers/iio/gyro/bmg160_core.c 517 */;
	unsigned int cocci_id/* drivers/iio/gyro/bmg160_core.c 233 */;
	struct device *cocci_id/* drivers/iio/gyro/bmg160_core.c 231 */;
	u8 cocci_id/* drivers/iio/gyro/bmg160_core.c 136 */;
	const struct {
		int scale;
		int dps_range;
	} cocci_id/* drivers/iio/gyro/bmg160_core.c 127 */[];
	void cocci_id/* drivers/iio/gyro/bmg160_core.c 1189 */;
	const struct {
		int odr;
		int filter;
		int bw_bits;
	} cocci_id/* drivers/iio/gyro/bmg160_core.c 115 */[];
	enum bmg160_axis{AXIS_X, AXIS_Y, AXIS_Z, AXIS_MAX,} cocci_id/* drivers/iio/gyro/bmg160_core.c 108 */;
	const char *cocci_id/* drivers/iio/gyro/bmg160_core.c 1071 */;
	struct regmap *cocci_id/* drivers/iio/gyro/bmg160_core.c 1070 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/gyro/bmg160_core.c 1061 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/gyro/bmg160_core.c 1052 */;
	struct bmg160_data *cocci_id/* drivers/iio/gyro/bmg160_core.c 1047 */;
	struct iio_dev *cocci_id/* drivers/iio/gyro/bmg160_core.c 1045 */;
	int cocci_id/* drivers/iio/gyro/bmg160_core.c 1045 */;
	irqreturn_t cocci_id/* drivers/iio/gyro/bmg160_core.c 1021 */;
	void *cocci_id/* drivers/iio/gyro/bmg160_core.c 1021 */;
}
