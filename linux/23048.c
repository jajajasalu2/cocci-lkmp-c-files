cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/ti/davinci-i2s.c 756 */;
	const struct of_device_id cocci_id/* sound/soc/ti/davinci-i2s.c 750 */[];
	dma_addr_t cocci_id/* sound/soc/ti/davinci-i2s.c 679 */;
	struct davinci_mcbsp_dev cocci_id/* sound/soc/ti/davinci-i2s.c 670 */;
	int *cocci_id/* sound/soc/ti/davinci-i2s.c 652 */;
	void __iomem *cocci_id/* sound/soc/ti/davinci-i2s.c 651 */;
	struct resource *cocci_id/* sound/soc/ti/davinci-i2s.c 650 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/ti/davinci-i2s.c 648 */;
	struct platform_device *cocci_id/* sound/soc/ti/davinci-i2s.c 646 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/ti/davinci-i2s.c 642 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/ti/davinci-i2s.c 624 */;
	struct davinci_mcbsp_dev *cocci_id/* sound/soc/ti/davinci-i2s.c 616 */;
	struct snd_soc_dai *cocci_id/* sound/soc/ti/davinci-i2s.c 614 */;
	int cocci_id/* sound/soc/ti/davinci-i2s.c 614 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/ti/davinci-i2s.c 604 */;
	void cocci_id/* sound/soc/ti/davinci-i2s.c 592 */;
	unsigned cocci_id/* sound/soc/ti/davinci-i2s.c 386 */;
	snd_pcm_format_t cocci_id/* sound/soc/ti/davinci-i2s.c 385 */;
	u32 cocci_id/* sound/soc/ti/davinci-i2s.c 384 */;
	unsigned int cocci_id/* sound/soc/ti/davinci-i2s.c 383 */;
	struct snd_interval *cocci_id/* sound/soc/ti/davinci-i2s.c 381 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/ti/davinci-i2s.c 377 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/ti/davinci-i2s.c 376 */;
	bool cocci_id/* sound/soc/ti/davinci-i2s.c 225 */;
	struct davinci_mcbsp_dev {
		struct device *dev;
		struct snd_dmaengine_dai_dma_data dma_data[2];
		int dma_request[2];
		void __iomem *base;
#define MOD_DSP_A 0
#define MOD_DSP_B 1
		int mode;
		u32 pcr;
		struct clk *clk;
		unsigned enable_channel_combine:1;
		unsigned int fmt;
		int clk_div;
		int clk_input_pin;
		bool i2s_accurate_sck;
	} cocci_id/* sound/soc/ti/davinci-i2s.c 128 */;
	const unsigned char cocci_id/* sound/soc/ti/davinci-i2s.c 117 */[SNDRV_PCM_FORMAT_S32_LE + 1];
	enum{DAVINCI_MCBSP_WORD_8=0, DAVINCI_MCBSP_WORD_12, DAVINCI_MCBSP_WORD_16, DAVINCI_MCBSP_WORD_20, DAVINCI_MCBSP_WORD_24, DAVINCI_MCBSP_WORD_32,} cocci_id/* sound/soc/ti/davinci-i2s.c 102 */;
}
