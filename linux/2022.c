cocci_test_suite() {
	const struct iio_event_spec cocci_id/* drivers/iio/accel/bmc150-accel-core.c 965 */;
	const struct attribute_group cocci_id/* drivers/iio/accel/bmc150-accel-core.c 961 */;
	struct attribute *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 956 */[];
	u16 cocci_id/* drivers/iio/accel/bmc150-accel-core.c 925 */[8];
	u8 *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 914 */;
	unsigned int cocci_id/* drivers/iio/accel/bmc150-accel-core.c 867 */;
	uint64_t cocci_id/* drivers/iio/accel/bmc150-accel-core.c 866 */;
	int64_t cocci_id/* drivers/iio/accel/bmc150-accel-core.c 865 */;
	u16 cocci_id/* drivers/iio/accel/bmc150-accel-core.c 864 */[BMC150_ACCEL_FIFO_LENGTH * 3];
	u8 cocci_id/* drivers/iio/accel/bmc150-accel-core.c 863 */;
	struct device *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 861 */;
	struct bmc150_accel_data *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 860 */;
	bool cocci_id/* drivers/iio/accel/bmc150-accel-core.c 858 */;
	unsigned cocci_id/* drivers/iio/accel/bmc150-accel-core.c 858 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 857 */;
	int cocci_id/* drivers/iio/accel/bmc150-accel-core.c 857 */;
	char *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 841 */;
	const struct attribute *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 814 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/accel/bmc150-accel-core.c 801 */[];
	const struct iio_dev *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 793 */;
	const struct iio_mount_matrix *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 792 */;
	struct device_attribute *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 778 */;
	ssize_t cocci_id/* drivers/iio/accel/bmc150-accel-core.c 777 */;
	enum iio_event_info cocci_id/* drivers/iio/accel/bmc150-accel-core.c 665 */;
	enum iio_event_direction cocci_id/* drivers/iio/accel/bmc150-accel-core.c 664 */;
	enum iio_event_type cocci_id/* drivers/iio/accel/bmc150-accel-core.c 663 */;
	const struct bmc150_scale_info *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 608 */;
	long cocci_id/* drivers/iio/accel/bmc150-accel-core.c 574 */;
	__le16 cocci_id/* drivers/iio/accel/bmc150-accel-core.c 545 */;
	int *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 540 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 539 */;
	const struct bmc150_accel_interrupt_info *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 447 */;
	struct bmc150_accel_interrupt *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 446 */;
	void cocci_id/* drivers/iio/accel/bmc150-accel-core.c 433 */;
	const struct bmc150_accel_interrupt_info {
		u8 map_reg;
		u8 map_bitmask;
		u8 en_reg;
		u8 en_bitmask;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 405 */[BMC150_ACCEL_INTERRUPTS];
	struct bmc150_accel_trigger *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 337 */;
	enum bmc150_power_modes cocci_id/* drivers/iio/accel/bmc150-accel-core.c 251 */;
	const struct regmap_config cocci_id/* drivers/iio/accel/bmc150-accel-core.c 243 */;
	const struct {
		int sleep_dur;
		u8 reg_value;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 227 */[];
	const struct {
		int bw_bits;
		int msec;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 215 */[];
	const struct {
		int val;
		int val2;
		u8 bw_bits;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 202 */[];
	struct bmc150_accel_data {
		struct regmap *regmap;
		int irq;
		struct bmc150_accel_interrupt interrupts[BMC150_ACCEL_INTERRUPTS];
		struct bmc150_accel_trigger triggers[BMC150_ACCEL_TRIGGERS];
		struct mutex mutex;
		u8 fifo_mode,watermark;
		s16 buffer[8];
		u8 bw_bits;
		u32 slope_dur;
		u32 slope_thres;
		u32 range;
		int ev_enable_state;
		int64_t timestamp,old_timestamp;
		const struct bmc150_accel_chip_info *chip_info;
		struct iio_mount_matrix orientation;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 184 */;
	enum bmc150_accel_trigger_id{BMC150_ACCEL_TRIGGER_DATA_READY, BMC150_ACCEL_TRIGGER_ANY_MOTION, BMC150_ACCEL_TRIGGERS,} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 178 */;
	enum bmc150_accel_interrupt_id{BMC150_ACCEL_INT_DATA_READY, BMC150_ACCEL_INT_ANY_MOTION, BMC150_ACCEL_INT_WATERMARK, BMC150_ACCEL_INTERRUPTS,} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 171 */;
	struct bmc150_accel_trigger {
		struct bmc150_accel_data *data;
		struct iio_trigger *indio_trig;
		int (*setup)(struct bmc150_accel_trigger *t, bool state);
		int intr;
		bool enabled;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 163 */;
	struct bmc150_accel_interrupt {
		const struct bmc150_accel_interrupt_info *info;
		atomic_t users;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 158 */;
	const char *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1550 */;
	struct regmap *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1549 */;
	struct bmc150_accel_chip_info {
		const char *name;
		u8 chip_id;
		const struct iio_chan_spec *channels;
		int num_channels;
		const struct bmc150_scale_info scale_table[4];
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 150 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1471 */;
	struct bmc150_scale_info {
		int scale;
		u8 reg_range;
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 145 */;
	enum bmc150_power_modes{BMC150_ACCEL_SLEEP_MODE_NORMAL, BMC150_ACCEL_SLEEP_MODE_DEEP_SUSPEND, BMC150_ACCEL_SLEEP_MODE_LPM, BMC150_ACCEL_SLEEP_MODE_SUSPEND=0x04,} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 138 */;
	enum bmc150_accel_axis{AXIS_X, AXIS_Y, AXIS_Z, AXIS_MAX,} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 131 */;
	const struct {
		int intr;
		const char *name;
		int (*setup)(struct bmc150_accel_trigger *t, bool state);
	} cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1309 */[BMC150_ACCEL_TRIGGERS];
	irqreturn_t cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1282 */;
	void *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1282 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1188 */;
	struct iio_trigger *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1128 */;
	struct iio_poll_func *cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1108 */;
	const unsigned long cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1102 */[];
	const struct iio_info cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1079 */;
	const struct bmc150_accel_chip_info cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1016 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/bmc150-accel-core.c 1007 */[];
}
