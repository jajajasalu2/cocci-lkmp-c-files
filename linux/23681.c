cocci_test_suite() {
	struct snd_pcm_hw_params *cocci_id/* sound/soc/spear/spdif_in.c 95 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/spear/spdif_in.c 94 */;
	struct snd_soc_dai *cocci_id/* sound/soc/spear/spdif_in.c 56 */;
	int cocci_id/* sound/soc/spear/spdif_in.c 56 */;
	u32 cocci_id/* sound/soc/spear/spdif_in.c 48 */;
	struct spdif_in_dev *cocci_id/* sound/soc/spear/spdif_in.c 46 */;
	void cocci_id/* sound/soc/spear/spdif_in.c 46 */;
	struct spdif_in_dev {
		struct clk *clk;
		struct spear_dma_data dma_params;
		struct spdif_in_params saved_params;
		void *io_base;
		struct device *dev;
		void (*reset_perip)(void);
		int irq;
		struct snd_dmaengine_dai_dma_data dma_params_rx;
		struct snd_dmaengine_pcm_config config;
	} cocci_id/* sound/soc/spear/spdif_in.c 34 */;
	struct spdif_in_params {
		u32 format;
	} cocci_id/* sound/soc/spear/spdif_in.c 30 */;
	struct platform_driver cocci_id/* sound/soc/spear/spdif_in.c 262 */;
	void __iomem *cocci_id/* sound/soc/spear/spdif_in.c 206 */;
	struct resource *cocci_id/* sound/soc/spear/spdif_in.c 205 */;
	struct spear_spdif_platform_data *cocci_id/* sound/soc/spear/spdif_in.c 204 */;
	struct platform_device *cocci_id/* sound/soc/spear/spdif_in.c 201 */;
	irqreturn_t cocci_id/* sound/soc/spear/spdif_in.c 178 */;
	void *cocci_id/* sound/soc/spear/spdif_in.c 178 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/spear/spdif_in.c 174 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/spear/spdif_in.c 160 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/spear/spdif_in.c 154 */;
}
