cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/pxa/pxa-ssp.c 899 */;
	struct platform_device *cocci_id/* sound/soc/pxa/pxa-ssp.c 893 */;
	int cocci_id/* sound/soc/pxa/pxa-ssp.c 893 */;
	const struct of_device_id cocci_id/* sound/soc/pxa/pxa-ssp.c 886 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/pxa/pxa-ssp.c 870 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/pxa/pxa-ssp.c 850 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/pxa/pxa-ssp.c 839 */;
	unsigned int cocci_id/* sound/soc/pxa/pxa-ssp.c 812 */;
	struct device_node *cocci_id/* sound/soc/pxa/pxa-ssp.c 781 */;
	struct ssp_priv cocci_id/* sound/soc/pxa/pxa-ssp.c 776 */;
	struct device *cocci_id/* sound/soc/pxa/pxa-ssp.c 772 */;
	uint32_t cocci_id/* sound/soc/pxa/pxa-ssp.c 74 */;
	const struct pxa_ssp_clock_mode *cocci_id/* sound/soc/pxa/pxa-ssp.c 611 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/pxa/pxa-ssp.c 559 */;
	struct snd_soc_dai *cocci_id/* sound/soc/pxa/pxa-ssp.c 551 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/pxa/pxa-ssp.c 550 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/pxa/pxa-ssp.c 549 */;
	const struct pxa_ssp_clock_mode cocci_id/* sound/soc/pxa/pxa-ssp.c 534 */[];
	struct ssp_device *cocci_id/* sound/soc/pxa/pxa-ssp.c 53 */;
	void cocci_id/* sound/soc/pxa/pxa-ssp.c 53 */;
	struct pxa_ssp_clock_mode {
		int rate;
		int pll;
		u8 acds;
		u8 scdb;
	} cocci_id/* sound/soc/pxa/pxa-ssp.c 527 */;
	u32 cocci_id/* sound/soc/pxa/pxa-ssp.c 436 */;
	struct ssp_priv *cocci_id/* sound/soc/pxa/pxa-ssp.c 433 */;
	struct ssp_priv {
		struct ssp_device *ssp;
		struct clk *extclk;
		unsigned long ssp_clk;
		unsigned int sysclk;
		unsigned int dai_fmt;
		unsigned int configured_dai_fmt;
#ifdef CONFIG_PM
		uint32_t cr0;
		uint32_t cr1;
		uint32_t to;
		uint32_t psp;
#endif
	} cocci_id/* sound/soc/pxa/pxa-ssp.c 38 */;
	u64 cocci_id/* sound/soc/pxa/pxa-ssp.c 308 */;
	struct snd_dmaengine_dai_dma_data cocci_id/* sound/soc/pxa/pxa-ssp.c 105 */;
}
