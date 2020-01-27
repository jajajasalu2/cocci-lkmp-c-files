cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/atmel/atmel-pdmic.c 729 */;
	const struct atmel_pdmic_pdata *cocci_id/* sound/soc/atmel/atmel-pdmic.c 598 */;
	void __iomem *cocci_id/* sound/soc/atmel/atmel-pdmic.c 597 */;
	struct resource *cocci_id/* sound/soc/atmel/atmel-pdmic.c 596 */;
	struct platform_device *cocci_id/* sound/soc/atmel/atmel-pdmic.c 592 */;
	const struct regmap_config cocci_id/* sound/soc/atmel/atmel-pdmic.c 585 */;
	irqreturn_t cocci_id/* sound/soc/atmel/atmel-pdmic.c 563 */;
	void *cocci_id/* sound/soc/atmel/atmel-pdmic.c 563 */;
	unsigned int *cocci_id/* sound/soc/atmel/atmel-pdmic.c 545 */;
	struct device_node *cocci_id/* sound/soc/atmel/atmel-pdmic.c 52 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/atmel/atmel-pdmic.c 511 */;
	struct atmel_pdmic *cocci_id/* sound/soc/atmel/atmel-pdmic.c 510 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/atmel/atmel-pdmic.c 509 */;
	struct snd_soc_card *cocci_id/* sound/soc/atmel/atmel-pdmic.c 507 */;
	struct device *cocci_id/* sound/soc/atmel/atmel-pdmic.c 506 */;
	int cocci_id/* sound/soc/atmel/atmel-pdmic.c 506 */;
	struct atmel_pdmic_pdata *cocci_id/* sound/soc/atmel/atmel-pdmic.c 50 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/atmel/atmel-pdmic.c 493 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/atmel/atmel-pdmic.c 485 */;
	u32 cocci_id/* sound/soc/atmel/atmel-pdmic.c 385 */;
	unsigned long cocci_id/* sound/soc/atmel/atmel-pdmic.c 383 */;
	const struct of_device_id cocci_id/* sound/soc/atmel/atmel-pdmic.c 38 */[];
	unsigned int cocci_id/* sound/soc/atmel/atmel-pdmic.c 379 */;
	struct snd_soc_component *cocci_id/* sound/soc/atmel/atmel-pdmic.c 378 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/atmel/atmel-pdmic.c 376 */;
	struct snd_soc_dai *cocci_id/* sound/soc/atmel/atmel-pdmic.c 374 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/atmel/atmel-pdmic.c 373 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/atmel/atmel-pdmic.c 372 */;
	struct snd_soc_component_driver cocci_id/* sound/soc/atmel/atmel-pdmic.c 358 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/atmel/atmel-pdmic.c 336 */[];
	struct soc_mixer_control *cocci_id/* sound/soc/atmel/atmel-pdmic.c 311 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/atmel/atmel-pdmic.c 287 */;
	struct snd_kcontrol *cocci_id/* sound/soc/atmel/atmel-pdmic.c 286 */;
	const  cocci_id/* sound/soc/atmel/atmel-pdmic.c 279 */(mic_gain_tlv,
							       0,1,
							       TLV_DB_SCALE_ITEM(-9000,600,0),
							       2,5,
							       TLV_DB_SCALE_ITEM(-8100,300,0),
							       6,7,
							       TLV_DB_SCALE_ITEM(-7000,200,0),
							       8,
							       ARRAY_SIZE(mic_gain_table)-1,
							       TLV_DB_SCALE_ITEM(-6500,100,0));
	struct atmel_pdmic {
		dma_addr_t phy_base;
		struct regmap *regmap;
		struct clk *pclk;
		struct clk *gclk;
		struct device *dev;
		int irq;
		struct snd_pcm_substream *substream;
		const struct atmel_pdmic_pdata *pdata;
	} cocci_id/* sound/soc/atmel/atmel-pdmic.c 27 */;
	const struct mic_gain cocci_id/* sound/soc/atmel/atmel-pdmic.c 234 */[];
	struct mic_gain {
		unsigned int dgain;
		unsigned int scale;
	} cocci_id/* sound/soc/atmel/atmel-pdmic.c 228 */;
	const struct snd_dmaengine_pcm_config cocci_id/* sound/soc/atmel/atmel-pdmic.c 219 */;
	struct atmel_pdmic_pdata {
		u32 mic_min_freq;
		u32 mic_max_freq;
		s32 mic_offset;
		const char *card_name;
	} cocci_id/* sound/soc/atmel/atmel-pdmic.c 20 */;
	struct dma_slave_config *cocci_id/* sound/soc/atmel/atmel-pdmic.c 198 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/atmel/atmel-pdmic.c 181 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/atmel/atmel-pdmic.c 173 */;
	void cocci_id/* sound/soc/atmel/atmel-pdmic.c 132 */;
}
