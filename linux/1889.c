cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/adc/twl6030-gpadc.c 977 */;
	struct twl6030_gpadc_data cocci_id/* drivers/iio/adc/twl6030-gpadc.c 91 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 871 */;
	const struct of_device_id *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 870 */;
	struct device *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 867 */;
	struct platform_device *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 865 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/twl6030-gpadc.c 852 */[];
	const struct twl6030_gpadc_platform_data cocci_id/* drivers/iio/adc/twl6030-gpadc.c 834 */;
	const struct iio_info cocci_id/* drivers/iio/adc/twl6030-gpadc.c 830 */;
	struct twl6030_ideal_code {
		int channel;
		u16 code1;
		u16 code2;
		u16 volt1;
		u16 volt2;
	} cocci_id/* drivers/iio/adc/twl6030-gpadc.c 83 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/twl6030-gpadc.c 796 */[];
	unsigned int cocci_id/* drivers/iio/adc/twl6030-gpadc.c 681 */;
	struct twl6030_chnl_calib {
		s32 gain;
		s32 gain_error;
		s32 offset_error;
	} cocci_id/* drivers/iio/adc/twl6030-gpadc.c 66 */;
	s8 cocci_id/* drivers/iio/adc/twl6030-gpadc.c 613 */;
	u8 cocci_id/* drivers/iio/adc/twl6030-gpadc.c 612 */[TWL6030_GPADC_NUM_TRIM_REGS];
	__u32 cocci_id/* drivers/iio/adc/twl6030-gpadc.c 603 */;
	const struct twl6030_ideal_code *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 564 */;
	int cocci_id/* drivers/iio/adc/twl6030-gpadc.c 561 */;
	struct twl6030_gpadc_data *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 560 */;
	void cocci_id/* drivers/iio/adc/twl6030-gpadc.c 560 */;
	long cocci_id/* drivers/iio/adc/twl6030-gpadc.c 505 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 504 */;
	int *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 476 */;
	u8 *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 458 */;
	__le16 cocci_id/* drivers/iio/adc/twl6030-gpadc.c 454 */;
	const struct twl6030_gpadc_platform_data *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 424 */;
	u8 cocci_id/* drivers/iio/adc/twl6030-gpadc.c 397 */;
	irqreturn_t cocci_id/* drivers/iio/adc/twl6030-gpadc.c 370 */;
	void *cocci_id/* drivers/iio/adc/twl6030-gpadc.c 370 */;
	const struct twl6030_ideal_code cocci_id/* drivers/iio/adc/twl6030-gpadc.c 230 */[TWL6032_GPADC_USED_CHANNELS];
	const struct twl6030_ideal_code cocci_id/* drivers/iio/adc/twl6030-gpadc.c 137 */[TWL6030_GPADC_USED_CHANNELS];
	struct twl6030_gpadc_data {
		struct device *dev;
		struct mutex lock;
		struct completion irq_complete;
		struct twl6030_chnl_calib *twl6030_cal_tbl;
		const struct twl6030_gpadc_platform_data *pdata;
	} cocci_id/* drivers/iio/adc/twl6030-gpadc.c 121 */;
	struct twl6030_gpadc_platform_data {
		const int nchannels;
		const struct iio_chan_spec *iio_channels;
		const struct twl6030_ideal_code *ideal;
		int (*start_conversion)(int channel);
		u8 (*channel_to_reg)(int channel);
		int (*calibrate)(struct twl6030_gpadc_data *gpadc);
	} cocci_id/* drivers/iio/adc/twl6030-gpadc.c 103 */;
}
