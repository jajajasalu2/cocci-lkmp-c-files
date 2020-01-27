cocci_test_suite() {
	u8 cocci_id/* drivers/iio/adc/npcm_adc.c 93 */;
	int *cocci_id/* drivers/iio/adc/npcm_adc.c 93 */;
	struct npcm_adc *cocci_id/* drivers/iio/adc/npcm_adc.c 81 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/npcm_adc.c 80 */;
	u32 cocci_id/* drivers/iio/adc/npcm_adc.c 79 */;
	irqreturn_t cocci_id/* drivers/iio/adc/npcm_adc.c 77 */;
	void *cocci_id/* drivers/iio/adc/npcm_adc.c 77 */;
	int cocci_id/* drivers/iio/adc/npcm_adc.c 77 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/npcm_adc.c 66 */[];
	struct platform_driver cocci_id/* drivers/iio/adc/npcm_adc.c 319 */;
	struct device_node *cocci_id/* drivers/iio/adc/npcm_adc.c 189 */;
	struct device *cocci_id/* drivers/iio/adc/npcm_adc.c 188 */;
	struct platform_device *cocci_id/* drivers/iio/adc/npcm_adc.c 180 */;
	struct npcm_adc {
		bool int_status;
		u32 adc_sample_hz;
		struct device *dev;
		void __iomem *regs;
		struct clk *adc_clk;
		wait_queue_head_t wq;
		struct regulator *vref;
		struct regmap *rst_regmap;
	} cocci_id/* drivers/iio/adc/npcm_adc.c 18 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/npcm_adc.c 174 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/npcm_adc.c 170 */;
	long cocci_id/* drivers/iio/adc/npcm_adc.c 135 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/npcm_adc.c 134 */;
}
