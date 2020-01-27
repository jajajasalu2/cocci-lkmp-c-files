cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/bcm/bcm2835-i2s.c 919 */;
	const struct of_device_id cocci_id/* sound/soc/bcm/bcm2835-i2s.c 912 */[];
	dma_addr_t cocci_id/* sound/soc/bcm/bcm2835-i2s.c 833 */;
	const __be32 *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 832 */;
	void __iomem *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 831 */;
	struct platform_device *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 827 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/bcm/bcm2835-i2s.c 823 */;
	const struct regmap_config cocci_id/* sound/soc/bcm/bcm2835-i2s.c 813 */;
	struct device *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 803 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/bcm/bcm2835-i2s.c 762 */;
	struct snd_soc_dai *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 751 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/bcm/bcm2835-i2s.c 740 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 330 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 329 */;
	unsigned int cocci_id/* sound/soc/bcm/bcm2835-i2s.c 320 */;
	unsigned int *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 319 */;
	void cocci_id/* sound/soc/bcm/bcm2835-i2s.c 318 */;
	unsigned long cocci_id/* sound/soc/bcm/bcm2835-i2s.c 267 */;
	uint32_t cocci_id/* sound/soc/bcm/bcm2835-i2s.c 157 */;
	int cocci_id/* sound/soc/bcm/bcm2835-i2s.c 156 */;
	bool cocci_id/* sound/soc/bcm/bcm2835-i2s.c 154 */;
	struct bcm2835_i2s_dev *cocci_id/* sound/soc/bcm/bcm2835-i2s.c 153 */;
	struct bcm2835_i2s_dev {
		struct device *dev;
		struct snd_dmaengine_dai_dma_data dma_data[2];
		unsigned int fmt;
		unsigned int tdm_slots;
		unsigned int rx_mask;
		unsigned int tx_mask;
		unsigned int slot_width;
		unsigned int frame_length;
		struct regmap *i2s_regmap;
		struct clk *clk;
		bool clk_prepared;
		int clk_rate;
	} cocci_id/* sound/soc/bcm/bcm2835-i2s.c 112 */;
}
