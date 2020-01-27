cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/img/img-i2s-in.c 606 */;
	const struct of_device_id cocci_id/* sound/soc/img/img-i2s-in.c 594 */[];
	struct platform_device *cocci_id/* sound/soc/img/img-i2s-in.c 536 */;
	struct img_i2s_in {
		void __iomem *base;
		struct clk *clk_sys;
		struct snd_dmaengine_dai_dma_data dma_data;
		struct device *dev;
		unsigned int max_i2s_chan;
		void __iomem *channel_base;
		unsigned int active_channels;
		struct snd_soc_dai_driver dai_driver;
		u32 suspend_ctl;
		u32 *suspend_ch_ctl;
	} cocci_id/* sound/soc/img/img-i2s-in.c 52 */;
	struct device *cocci_id/* sound/soc/img/img-i2s-in.c 425 */;
	struct reset_control *cocci_id/* sound/soc/img/img-i2s-in.c 423 */;
	void __iomem *cocci_id/* sound/soc/img/img-i2s-in.c 421 */;
	struct resource *cocci_id/* sound/soc/img/img-i2s-in.c 420 */;
	const struct snd_dmaengine_pcm_config cocci_id/* sound/soc/img/img-i2s-in.c 413 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/img/img-i2s-in.c 397 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/img/img-i2s-in.c 396 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/img/img-i2s-in.c 393 */;
	struct dma_slave_config *cocci_id/* sound/soc/img/img-i2s-in.c 393 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/img/img-i2s-in.c 392 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/img/img-i2s-in.c 388 */;
	struct snd_soc_dai *cocci_id/* sound/soc/img/img-i2s-in.c 379 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/img/img-i2s-in.c 373 */;
	snd_pcm_format_t cocci_id/* sound/soc/img/img-i2s-in.c 223 */;
	unsigned int *cocci_id/* sound/soc/img/img-i2s-in.c 186 */;
	unsigned int cocci_id/* sound/soc/img/img-i2s-in.c 185 */;
	int cocci_id/* sound/soc/img/img-i2s-in.c 184 */;
	u32 cocci_id/* sound/soc/img/img-i2s-in.c 110 */;
	struct img_i2s_in *cocci_id/* sound/soc/img/img-i2s-in.c 110 */;
	void cocci_id/* sound/soc/img/img-i2s-in.c 110 */;
}
