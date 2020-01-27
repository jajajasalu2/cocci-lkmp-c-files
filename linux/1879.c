cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 999 */[];
	const struct xoadc_variant cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 976 */;
	struct regmap *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 887 */;
	const struct xoadc_variant *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 883 */;
	struct platform_device *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 881 */;
	u32 cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 740 */;
	const char *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 738 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 735 */;
	const struct xoadc_channel *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 734 */;
	struct device_node *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 733 */;
	struct device *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 732 */;
	const struct iio_info cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 727 */;
	unsigned int cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 701 */;
	const struct of_phandle_args *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 696 */;
	int *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 649 */;
	long cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 649 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 648 */;
	u16 cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 583 */;
	const struct pm8xxx_chan_info *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 582 */;
	struct pm8xxx_xoadc *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 580 */;
	int cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 580 */;
	u16 *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 570 */;
	bool cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 440 */;
	u8 cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 425 */;
	struct pm8xxx_chan_info *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 424 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 416 */;
	irqreturn_t cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 414 */;
	void *cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 414 */;
	struct pm8xxx_xoadc {
		struct device *dev;
		struct regmap *map;
		const struct xoadc_variant *variant;
		struct regulator *vref;
		unsigned int nchans;
		struct pm8xxx_chan_info *chans;
		struct iio_chan_spec *iio_chans;
		struct vadc_linear_graph graph[2];
		struct completion complete;
		struct mutex lock;
	} cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 401 */;
	struct pm8xxx_chan_info {
		const char *name;
		const struct xoadc_channel *hwchan;
		enum vadc_calibration calibration;
		u8 decimation:2;
		u8 amux_ip_rsv:3;
	} cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 379 */;
	const struct xoadc_channel cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 232 */[];
	struct xoadc_variant {
		const char name[16];
		const struct xoadc_channel *channels;
		bool broken_ratiometric;
		bool prescaling;
		bool second_level_mux;
	} cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 195 */;
	struct xoadc_channel {
		const char *datasheet_name;
		u8 pre_scale_mux:2;
		u8 amux_channel:4;
		const struct vadc_prescale_ratio prescale;
		enum iio_chan_type type;
		enum vadc_scale_fn_type scale_fn_type;
		u8 amux_ip_rsv:3;
	} cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 175 */;
	struct platform_driver cocci_id/* drivers/iio/adc/qcom-pm8xxx-xoadc.c 1020 */;
}
