cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 927 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 921 */[];
	struct vadc_channel_prop {
		unsigned int channel;
		enum vadc_calibration calibration;
		unsigned int decimation;
		unsigned int prescale;
		unsigned int hw_settle_time;
		unsigned int avg_samples;
		enum vadc_scale_fn_type scale_fn_type;
	} cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 88 */;
	struct regmap *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 856 */;
	struct platform_device *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 850 */;
	u8 cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 817 */;
	struct vadc_priv *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 815 */;
	irqreturn_t cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 806 */;
	void *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 806 */;
	struct vadc_channel_prop cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 739 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 738 */;
	const struct vadc_channels *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 737 */;
	const char *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 655 */;
	struct device_node *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 653 */;
	struct device *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 651 */;
	const struct vadc_channels cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 548 */[];
	struct vadc_channels {
		const char *datasheet_name;
		unsigned int prescale_index;
		enum iio_chan_type type;
		long info_mask;
		enum vadc_scale_fn_type scale_fn_type;
	} cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 503 */;
	const struct iio_info cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 498 */;
	const struct of_phandle_args *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 486 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 485 */;
	long cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 446 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 445 */;
	int *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 445 */;
	u32 cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 436 */;
	int cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 436 */;
	u16 cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 355 */;
	unsigned int cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 304 */;
	u16 *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 302 */;
	struct vadc_channel_prop *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 209 */;
	void cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 174 */;
	bool cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 169 */;
	u8 *cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 137 */;
	const struct vadc_prescale_ratio cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 126 */[];
	struct vadc_priv {
		struct regmap *regmap;
		struct device *dev;
		u16 base;
		unsigned int nchannels;
		struct vadc_channel_prop *chan_props;
		struct iio_chan_spec *iio_chans;
		bool are_ref_measured;
		bool poll_eoc;
		struct completion complete;
		struct vadc_linear_graph graph[2];
		struct mutex lock;
	} cocci_id/* drivers/iio/adc/qcom-spmi-vadc.c 112 */;
}
