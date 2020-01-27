cocci_test_suite() {
	struct stm32_dfsdm_str2field {
		const char *name;
		unsigned int val;
	} cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 97 */;
	dma_cookie_t cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 931 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 930 */;
	dma_addr_t cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 927 */;
	struct dma_slave_config cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 926 */;
	s32 *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 853 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 847 */;
	irqreturn_t cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 845 */;
	void *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 845 */;
	enum dma_status cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 799 */;
	struct dma_tx_state cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 798 */;
	unsigned int cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 706 */;
	struct stm32_dfsdm_channel *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 705 */;
	const char *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 702 */;
	size_t cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 702 */;
	struct stm32_dfsdm_adc {
		struct stm32_dfsdm *dfsdm;
		const struct stm32_dfsdm_dev_data *dev_data;
		unsigned int fl_id;
		unsigned int nconv;
		unsigned long smask;
		unsigned int oversamp;
		struct iio_hw_consumer *hwc;
		struct completion completion;
		u32 *buffer;
		unsigned int spi_freq;
		unsigned int sample_freq;
		int (*cb)(const void *data, size_t size, void *cb_priv);
		void *cb_priv;
		u8 *rx_buf;
		unsigned int bufi;
		unsigned int buf_sz;
		struct dma_chan *dma_chan;
		dma_addr_t dma_buf;
	} cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 70 */;
	char *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 668 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 667 */;
	uintptr_t cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 666 */;
	ssize_t cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 665 */;
	struct stm32_dfsdm_dev_data {
		int type;
		int (*init)(struct iio_dev *indio_dev);
		unsigned int num_channels;
		const struct regmap_config *regmap_cfg;
	} cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 63 */;
	enum sd_converter_type{DFSDM_AUDIO, DFSDM_IIO,} cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 58 */;
	u32 cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 502 */;
	struct stm32_dfsdm_filter_osr *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 457 */;
	struct stm32_dfsdm_filter *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 456 */;
	struct iio_trigger *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 452 */;
	struct regmap *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 372 */;
	struct stm32_dfsdm *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 368 */;
	s32 cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 295 */;
	u64 cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 195 */;
	struct platform_driver cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1703 */;
	int __maybe_unused cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1677 */;
	const struct stm32_dfsdm_dev_data *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1560 */;
	struct device_node *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1559 */;
	struct device *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1557 */;
	struct platform_device *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1555 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1543 */[];
	const struct stm32_dfsdm_trig_info cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 154 */[];
	const struct stm32_dfsdm_dev_data cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1533 */;
	enum stm32_dfsdm_jexten{STM32_DFSDM_JEXTEN_DISABLED, STM32_DFSDM_JEXTEN_RISING_EDGE, STM32_DFSDM_JEXTEN_FALLING_EDGE, STM32_DFSDM_EXTEN_BOTH_EDGES,} cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 147 */;
	struct stm32_dfsdm_trig_info {
		const char *name;
		unsigned int jextsel;
	} cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 141 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1405 */;
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1359 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1320 */;
	long cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1263 */;
	int *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1262 */;
	const struct stm32_dfsdm_str2field *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 125 */;
	int (*cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1125 */)(const void *data,
								    size_t size,
								    void *private);
	const struct stm32_dfsdm_str2field cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 112 */[];
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1108 */;
	void cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1084 */;
	struct stm32_dfsdm_adc *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1020 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1018 */;
	int cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1018 */;
	const unsigned long *cocci_id/* drivers/iio/adc/stm32-dfsdm-adc.c 1006 */;
}
