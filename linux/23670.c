cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/atmel/atmel-i2s.c 710 */;
	dma_addr_t cocci_id/* sound/soc/atmel/atmel-i2s.c 684 */;
	void __iomem *cocci_id/* sound/soc/atmel/atmel-i2s.c 596 */;
	struct regmap *cocci_id/* sound/soc/atmel/atmel-i2s.c 595 */;
	struct resource *cocci_id/* sound/soc/atmel/atmel-i2s.c 594 */;
	const struct of_device_id *cocci_id/* sound/soc/atmel/atmel-i2s.c 592 */;
	struct device_node *cocci_id/* sound/soc/atmel/atmel-i2s.c 591 */;
	struct platform_device *cocci_id/* sound/soc/atmel/atmel-i2s.c 589 */;
	void *cocci_id/* sound/soc/atmel/atmel-i2s.c 581 */;
	const struct of_device_id cocci_id/* sound/soc/atmel/atmel-i2s.c 578 */[];
	const struct atmel_i2s_caps cocci_id/* sound/soc/atmel/atmel-i2s.c 574 */;
	struct clk *cocci_id/* sound/soc/atmel/atmel-i2s.c 554 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/atmel/atmel-i2s.c 547 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/atmel/atmel-i2s.c 529 */;
	struct atmel_i2s_dev *cocci_id/* sound/soc/atmel/atmel-i2s.c 523 */;
	struct snd_soc_dai *cocci_id/* sound/soc/atmel/atmel-i2s.c 521 */;
	int cocci_id/* sound/soc/atmel/atmel-i2s.c 521 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/atmel/atmel-i2s.c 514 */;
	unsigned long cocci_id/* sound/soc/atmel/atmel-i2s.c 412 */;
	unsigned int cocci_id/* sound/soc/atmel/atmel-i2s.c 324 */;
	bool cocci_id/* sound/soc/atmel/atmel-i2s.c 323 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/atmel/atmel-i2s.c 319 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/atmel/atmel-i2s.c 318 */;
	const struct atmel_i2s_gck_param *cocci_id/* sound/soc/atmel/atmel-i2s.c 306 */;
	irqreturn_t cocci_id/* sound/soc/atmel/atmel-i2s.c 205 */;
	struct atmel_i2s_dev {
		struct device *dev;
		struct regmap *regmap;
		struct clk *pclk;
		struct clk *gclk;
		struct snd_dmaengine_dai_dma_data playback;
		struct snd_dmaengine_dai_dma_data capture;
		unsigned int fmt;
		const struct atmel_i2s_gck_param *gck_param;
		const struct atmel_i2s_caps *caps;
	} cocci_id/* sound/soc/atmel/atmel-i2s.c 193 */;
	struct atmel_i2s_caps {
		int (*mck_init)(struct atmel_i2s_dev *,
				struct device_node *np);
	} cocci_id/* sound/soc/atmel/atmel-i2s.c 189 */;
	struct atmel_i2s_dev cocci_id/* sound/soc/atmel/atmel-i2s.c 187 */;
	const struct atmel_i2s_gck_param cocci_id/* sound/soc/atmel/atmel-i2s.c 168 */[];
	struct atmel_i2s_gck_param {
		int fs;
		unsigned long mck;
		int imckdiv;
		int imckfs;
	} cocci_id/* sound/soc/atmel/atmel-i2s.c 157 */;
	const struct regmap_config cocci_id/* sound/soc/atmel/atmel-i2s.c 150 */;
}
