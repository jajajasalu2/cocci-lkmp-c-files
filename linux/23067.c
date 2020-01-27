cocci_test_suite() {
	struct device *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 974 */;
	struct mtk_base_afe_irq *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 931 */;
	struct mtk_base_afe_memif *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 930 */;
	irqreturn_t cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 916 */;
	void *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 916 */;
	const struct regmap_config cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 908 */;
	const struct mtk_base_irq_data cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 820 */[MT8173_AFE_IRQ_NUM];
	const struct mtk_base_memif_data cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 705 */[MT8173_AFE_MEMIF_NUM];
	const char *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 692 */[MT8173_CLK_NUM];
	const struct snd_soc_component_driver cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 686 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 674 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 636 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 618 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 582 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 524 */;
	struct snd_soc_component *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 486 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 485 */;
	struct mt8173_afe_private *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 376 */;
	struct snd_pcm_runtime *const cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 374 */;
	struct snd_soc_dai *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 372 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 371 */;
	struct clk *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 287 */;
	struct mtk_base_afe *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 286 */;
	void cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 286 */;
	unsigned int cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 263 */;
	int cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 239 */;
	bool cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 224 */;
	const struct mt8173_afe_rate cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 169 */[];
	struct mt8173_afe_rate {
		unsigned int rate;
		unsigned int regvalue;
	} cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 164 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 153 */;
	struct mt8173_afe_private {
		struct clk *clocks[MT8173_CLK_NUM];
	} cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 149 */;
	const unsigned int cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 132 */[];
	enum afe_tdm_ch_start{AFE_TDM_CH_START_O30_O31=0, AFE_TDM_CH_START_O32_O33, AFE_TDM_CH_START_O34_O35, AFE_TDM_CH_START_O36_O37, AFE_TDM_CH_ZERO,} cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 124 */;
	struct platform_driver cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 1188 */;
	const struct dev_pm_ops cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 1183 */;
	const struct of_device_id cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 1177 */[];
	struct platform_device *cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 1053 */;
	size_t cocci_id/* sound/soc/mediatek/mt8173/mt8173-afe-pcm.c 1037 */;
}
