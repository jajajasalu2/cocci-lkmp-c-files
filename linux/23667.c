cocci_test_suite() {
	const struct snd_pcm_hardware cocci_id/* sound/soc/atmel/atmel-classd.c 96 */;
	struct platform_driver cocci_id/* sound/soc/atmel/atmel-classd.c 662 */;
	void __iomem *cocci_id/* sound/soc/atmel/atmel-classd.c 555 */;
	struct resource *cocci_id/* sound/soc/atmel/atmel-classd.c 554 */;
	struct platform_device *cocci_id/* sound/soc/atmel/atmel-classd.c 550 */;
	const struct regmap_config cocci_id/* sound/soc/atmel/atmel-classd.c 539 */;
	const struct reg_default cocci_id/* sound/soc/atmel/atmel-classd.c 534 */[];
	const char *cocci_id/* sound/soc/atmel/atmel-classd.c 51 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/atmel/atmel-classd.c 500 */;
	struct atmel_classd *cocci_id/* sound/soc/atmel/atmel-classd.c 499 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/atmel/atmel-classd.c 498 */;
	struct snd_soc_card *cocci_id/* sound/soc/atmel/atmel-classd.c 496 */;
	struct device *cocci_id/* sound/soc/atmel/atmel-classd.c 495 */;
	int cocci_id/* sound/soc/atmel/atmel-classd.c 495 */;
	struct device_node *cocci_id/* sound/soc/atmel/atmel-classd.c 49 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/atmel/atmel-classd.c 482 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/atmel/atmel-classd.c 471 */;
	struct atmel_classd_pdata *cocci_id/* sound/soc/atmel/atmel-classd.c 47 */;
	void cocci_id/* sound/soc/atmel/atmel-classd.c 419 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/atmel/atmel-classd.c 380 */;
	const struct of_device_id cocci_id/* sound/soc/atmel/atmel-classd.c 38 */[];
	struct snd_pcm_hw_params *cocci_id/* sound/soc/atmel/atmel-classd.c 377 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/atmel/atmel-classd.c 376 */;
	const struct {
		int rate;
		int sample_rate;
		int dsp_clk;
		unsigned long gclk_rate;
	} cocci_id/* sound/soc/atmel/atmel-classd.c 351 */[];
	u32 cocci_id/* sound/soc/atmel/atmel-classd.c 334 */;
	struct snd_soc_component *cocci_id/* sound/soc/atmel/atmel-classd.c 333 */;
	struct snd_soc_dai *cocci_id/* sound/soc/atmel/atmel-classd.c 330 */;
	struct snd_soc_component_driver cocci_id/* sound/soc/atmel/atmel-classd.c 309 */;
	struct atmel_classd {
		dma_addr_t phy_base;
		struct regmap *regmap;
		struct clk *pclk;
		struct clk *gclk;
		struct device *dev;
		int irq;
		const struct atmel_classd_pdata *pdata;
	} cocci_id/* sound/soc/atmel/atmel-classd.c 27 */;
	const struct atmel_classd_pdata *cocci_id/* sound/soc/atmel/atmel-classd.c 252 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/atmel/atmel-classd.c 227 */[];
	const unsigned int cocci_id/* sound/soc/atmel/atmel-classd.c 211 */[];
	const char *const cocci_id/* sound/soc/atmel/atmel-classd.c 201 */[];
	struct atmel_classd_pdata {
		bool non_overlap_enable;
		int non_overlap_time;
		int pwm_type;
		const char *card_name;
	} cocci_id/* sound/soc/atmel/atmel-classd.c 20 */;
	const struct snd_dmaengine_pcm_config cocci_id/* sound/soc/atmel/atmel-classd.c 185 */;
	struct dma_slave_config *cocci_id/* sound/soc/atmel/atmel-classd.c 160 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/atmel/atmel-classd.c 152 */;
}
