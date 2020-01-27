cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/iio/adc/cpcap-adc.c 958 */;
	struct platform_device *cocci_id/* drivers/iio/adc/cpcap-adc.c 956 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/cpcap-adc.c 944 */[];
	const struct cpcap_adc_ato cocci_id/* drivers/iio/adc/cpcap-adc.c 933 */;
	const struct iio_info cocci_id/* drivers/iio/adc/cpcap-adc.c 925 */;
	struct cpcap_adc_ato {
		unsigned short ato_in;
		unsigned short atox_in;
		unsigned short adc_ps_factor_in;
		unsigned short atox_ps_factor_in;
		unsigned short ato_out;
		unsigned short atox_out;
		unsigned short adc_ps_factor_out;
		unsigned short atox_ps_factor_out;
	} cocci_id/* drivers/iio/adc/cpcap-adc.c 91 */;
	struct cpcap_adc_request cocci_id/* drivers/iio/adc/cpcap-adc.c 868 */;
	int *cocci_id/* drivers/iio/adc/cpcap-adc.c 865 */;
	long cocci_id/* drivers/iio/adc/cpcap-adc.c 865 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/cpcap-adc.c 864 */;
	const struct cpcap_adc_conversion_tbl *cocci_id/* drivers/iio/adc/cpcap-adc.c 746 */;
	struct cpcap_adc_request *cocci_id/* drivers/iio/adc/cpcap-adc.c 744 */;
	void cocci_id/* drivers/iio/adc/cpcap-adc.c 744 */;
	const struct cpcap_adc_phasing_tbl *cocci_id/* drivers/iio/adc/cpcap-adc.c 675 */;
	const struct cpcap_adc_ato *cocci_id/* drivers/iio/adc/cpcap-adc.c 537 */;
	struct cpcap_adc *cocci_id/* drivers/iio/adc/cpcap-adc.c 512 */;
	int cocci_id/* drivers/iio/adc/cpcap-adc.c 512 */;
	short cocci_id/* drivers/iio/adc/cpcap-adc.c 501 */;
	unsigned short cocci_id/* drivers/iio/adc/cpcap-adc.c 471 */;
	unsigned int cocci_id/* drivers/iio/adc/cpcap-adc.c 470 */[2];
	u16 cocci_id/* drivers/iio/adc/cpcap-adc.c 466 */;
	unsigned long cocci_id/* drivers/iio/adc/cpcap-adc.c 405 */;
	unsigned int cocci_id/* drivers/iio/adc/cpcap-adc.c 404 */;
	enum cpcap_adc_channel cocci_id/* drivers/iio/adc/cpcap-adc.c 402 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/cpcap-adc.c 384 */;
	irqreturn_t cocci_id/* drivers/iio/adc/cpcap-adc.c 382 */;
	void *cocci_id/* drivers/iio/adc/cpcap-adc.c 382 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/cpcap-adc.c 356 */[];
	const int cocci_id/* drivers/iio/adc/cpcap-adc.c 304 */[CPCAP_MAX_TEMP_LVL][2];
	struct cpcap_adc_conversion_tbl cocci_id/* drivers/iio/adc/cpcap-adc.c 246 */[];
	const struct cpcap_adc_phasing_tbl cocci_id/* drivers/iio/adc/cpcap-adc.c 220 */[];
	struct cpcap_adc_request {
		int channel;
		const struct cpcap_adc_phasing_tbl *phase_tbl;
		const struct cpcap_adc_conversion_tbl *conv_tbl;
		int bank_index;
		enum cpcap_adc_timing timing;
		int result;
	} cocci_id/* drivers/iio/adc/cpcap-adc.c 210 */;
	struct cpcap_adc_conversion_tbl {
		enum iio_chan_info_enum conv_type;
		int align_offset;
		int conv_offset;
		int cal_offset;
		int multiplier;
		int divider;
	} cocci_id/* drivers/iio/adc/cpcap-adc.c 192 */;
	struct cpcap_adc_phasing_tbl {
		short offset;
		unsigned short multiplier;
		unsigned short divider;
		short min;
		short max;
	} cocci_id/* drivers/iio/adc/cpcap-adc.c 175 */;
	enum cpcap_adc_timing{CPCAP_ADC_TIMING_IMM, CPCAP_ADC_TIMING_IN, CPCAP_ADC_TIMING_OUT,} cocci_id/* drivers/iio/adc/cpcap-adc.c 161 */;
	enum cpcap_adc_channel{CPCAP_ADC_AD0, CPCAP_ADC_BATTP, CPCAP_ADC_VBUS, CPCAP_ADC_AD3, CPCAP_ADC_BPLUS_AD4, CPCAP_ADC_CHG_ISENSE, CPCAP_ADC_BATTI, CPCAP_ADC_USB_ID, CPCAP_ADC_AD8, CPCAP_ADC_AD9, CPCAP_ADC_LICELL, CPCAP_ADC_HV_BATTP, CPCAP_ADC_TSX1_AD12, CPCAP_ADC_TSX2_AD13, CPCAP_ADC_TSY1_AD14, CPCAP_ADC_TSY2_AD15, CPCAP_ADC_BATTP_PI16, CPCAP_ADC_BATTI_PI17, CPCAP_ADC_CHANNEL_NUM,} cocci_id/* drivers/iio/adc/cpcap-adc.c 127 */;
	struct cpcap_adc {
		struct regmap *reg;
		struct device *dev;
		u16 vendor;
		int irq;
		struct mutex lock;
		const struct cpcap_adc_ato *ato;
		wait_queue_head_t wq_data_avail;
		bool done;
	} cocci_id/* drivers/iio/adc/cpcap-adc.c 113 */;
	struct platform_driver cocci_id/* drivers/iio/adc/cpcap-adc.c 1029 */;
}
