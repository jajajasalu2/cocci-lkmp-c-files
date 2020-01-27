cocci_test_suite() {
	struct dln2_adc_demux_table *cocci_id/* drivers/iio/adc/dln2-adc.c 87 */;
	unsigned int cocci_id/* drivers/iio/adc/dln2-adc.c 84 */;
	struct dln2_adc *cocci_id/* drivers/iio/adc/dln2-adc.c 83 */;
	void cocci_id/* drivers/iio/adc/dln2-adc.c 83 */;
	struct dln2_adc_get_all_vals {
		__le16 channel_mask;
		__le16 values[DLN2_ADC_MAX_CHANNELS];
	} cocci_id/* drivers/iio/adc/dln2-adc.c 78 */;
	struct dln2_adc_port_chan {
		u8 port;
		u8 chan;
	} cocci_id/* drivers/iio/adc/dln2-adc.c 73 */;
	struct platform_driver cocci_id/* drivers/iio/adc/dln2-adc.c 710 */;
	struct dln2_platform_data *cocci_id/* drivers/iio/adc/dln2-adc.c 615 */;
	struct device *cocci_id/* drivers/iio/adc/dln2-adc.c 613 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/dln2-adc.c 604 */;
	const void *cocci_id/* drivers/iio/adc/dln2-adc.c 602 */;
	int cocci_id/* drivers/iio/adc/dln2-adc.c 602 */;
	u16 cocci_id/* drivers/iio/adc/dln2-adc.c 601 */;
	struct platform_device *cocci_id/* drivers/iio/adc/dln2-adc.c 601 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/dln2-adc.c 596 */;
	struct dln2_adc {
		struct platform_device *pdev;
		struct iio_chan_spec iio_channels[DLN2_ADC_MAX_CHANNELS + 1];
		int port,trigger_chan;
		struct iio_trigger *trig;
		struct mutex mutex;
		unsigned int sample_period;
		unsigned int demux_count;
		struct dln2_adc_demux_table demux[DLN2_ADC_MAX_CHANNELS];
		unsigned int ts_pad_offset,ts_pad_length;
	} cocci_id/* drivers/iio/adc/dln2-adc.c 58 */;
	struct dln2_adc_demux_table {
		unsigned int from;
		unsigned int to;
		unsigned int length;
	} cocci_id/* drivers/iio/adc/dln2-adc.c 52 */;
	const struct dln2_adc_demux_table *cocci_id/* drivers/iio/adc/dln2-adc.c 491 */;
	struct dln2_adc_get_all_vals cocci_id/* drivers/iio/adc/dln2-adc.c 489 */;
	struct {
		__le16 values[DLN2_ADC_MAX_CHANNELS];
		int64_t timestamp_space;
	} cocci_id/* drivers/iio/adc/dln2-adc.c 485 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/dln2-adc.c 483 */;
	irqreturn_t cocci_id/* drivers/iio/adc/dln2-adc.c 481 */;
	void *cocci_id/* drivers/iio/adc/dln2-adc.c 481 */;
	const struct iio_info cocci_id/* drivers/iio/adc/dln2-adc.c 475 */;
	const unsigned long *cocci_id/* drivers/iio/adc/dln2-adc.c 423 */;
	long cocci_id/* drivers/iio/adc/dln2-adc.c 332 */;
	int *cocci_id/* drivers/iio/adc/dln2-adc.c 330 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/dln2-adc.c 329 */;
	__u8 cocci_id/* drivers/iio/adc/dln2-adc.c 313 */;
	struct dln2_adc_get_all_vals *cocci_id/* drivers/iio/adc/dln2-adc.c 310 */;
	struct dln2_adc_port_chan cocci_id/* drivers/iio/adc/dln2-adc.c 255 */;
	__le16 cocci_id/* drivers/iio/adc/dln2-adc.c 253 */;
	struct {
		struct dln2_adc_port_chan port_chan;
		__u8 type;
		__le16 period;
		__le16 low;
		__le16 high;
	}__packed cocci_id/* drivers/iio/adc/dln2-adc.c 227 */;
	u16 *cocci_id/* drivers/iio/adc/dln2-adc.c 197 */;
	bool cocci_id/* drivers/iio/adc/dln2-adc.c 180 */;
	u8 cocci_id/* drivers/iio/adc/dln2-adc.c 147 */;
	size_t cocci_id/* drivers/iio/adc/dln2-adc.c 134 */;
}
