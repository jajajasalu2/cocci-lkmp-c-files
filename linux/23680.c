cocci_test_suite() {
	void cocci_id/* sound/soc/spear/spdif_out.c 91 */;
	struct platform_driver cocci_id/* sound/soc/spear/spdif_out.c 351 */;
	struct spdif_out_dev {
		struct clk *clk;
		struct spear_dma_data dma_params;
		struct spdif_out_params saved_params;
		u32 running;
		void __iomem *io_base;
		struct snd_dmaengine_dai_dma_data dma_params_tx;
		struct snd_dmaengine_pcm_config config;
	} cocci_id/* sound/soc/spear/spdif_out.c 34 */;
	struct device *cocci_id/* sound/soc/spear/spdif_out.c 327 */;
	struct resource *cocci_id/* sound/soc/spear/spdif_out.c 281 */;
	struct spear_spdif_platform_data *cocci_id/* sound/soc/spear/spdif_out.c 280 */;
	struct spdif_out_params {
		u32 rate;
		u32 core_freq;
		u32 mute;
	} cocci_id/* sound/soc/spear/spdif_out.c 28 */;
	struct platform_device *cocci_id/* sound/soc/spear/spdif_out.c 277 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/spear/spdif_out.c 273 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/spear/spdif_out.c 260 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/spear/spdif_out.c 252 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/spear/spdif_out.c 236 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/spear/spdif_out.c 214 */;
	struct snd_kcontrol *cocci_id/* sound/soc/spear/spdif_out.c 213 */;
	u32 cocci_id/* sound/soc/spear/spdif_out.c 194 */;
	struct spdif_out_dev *cocci_id/* sound/soc/spear/spdif_out.c 193 */;
	struct snd_soc_dai *cocci_id/* sound/soc/spear/spdif_out.c 191 */;
	int cocci_id/* sound/soc/spear/spdif_out.c 191 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/spear/spdif_out.c 106 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/spear/spdif_out.c 105 */;
}
