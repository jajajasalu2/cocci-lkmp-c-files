cocci_test_suite() {
	u16 cocci_id/* sound/soc/ti/omap-dmic.c 56 */;
	struct platform_driver cocci_id/* sound/soc/ti/omap-dmic.c 514 */;
	const struct of_device_id cocci_id/* sound/soc/ti/omap-dmic.c 508 */[];
	struct omap_dmic cocci_id/* sound/soc/ti/omap-dmic.c 464 */;
	struct resource *cocci_id/* sound/soc/ti/omap-dmic.c 461 */;
	struct omap_dmic *cocci_id/* sound/soc/ti/omap-dmic.c 460 */;
	struct platform_device *cocci_id/* sound/soc/ti/omap-dmic.c 458 */;
	int cocci_id/* sound/soc/ti/omap-dmic.c 458 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/ti/omap-dmic.c 454 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/ti/omap-dmic.c 440 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/ti/omap-dmic.c 403 */;
	struct omap_dmic {
		struct device *dev;
		void __iomem *io_base;
		struct clk *fclk;
		struct pm_qos_request pm_qos_req;
		int latency;
		int fclk_freq;
		int out_freq;
		int clk_div;
		int sysclk;
		int threshold;
		u32 ch_enabled;
		bool active;
		struct mutex mutex;
		struct snd_dmaengine_dai_dma_data dma_data;
	} cocci_id/* sound/soc/ti/omap-dmic.c 33 */;
	char *cocci_id/* sound/soc/ti/omap-dmic.c 282 */;
	struct clk *cocci_id/* sound/soc/ti/omap-dmic.c 281 */;
	unsigned int cocci_id/* sound/soc/ti/omap-dmic.c 279 */;
	u32 cocci_id/* sound/soc/ti/omap-dmic.c 231 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/ti/omap-dmic.c 191 */;
	struct snd_soc_dai *cocci_id/* sound/soc/ti/omap-dmic.c 188 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/ti/omap-dmic.c 187 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/ti/omap-dmic.c 186 */;
	void cocci_id/* sound/soc/ti/omap-dmic.c 108 */;
}
