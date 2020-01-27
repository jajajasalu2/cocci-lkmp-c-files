cocci_test_suite() {
	struct snd_jack *cocci_id/* sound/soc/qcom/apq8016_sbc.c 69 */;
	struct apq8016_sbc_data *cocci_id/* sound/soc/qcom/apq8016_sbc.c 40 */;
	struct snd_soc_card *cocci_id/* sound/soc/qcom/apq8016_sbc.c 39 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/qcom/apq8016_sbc.c 38 */;
	struct snd_soc_component *cocci_id/* sound/soc/qcom/apq8016_sbc.c 37 */;
	struct snd_soc_dai *cocci_id/* sound/soc/qcom/apq8016_sbc.c 36 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/qcom/apq8016_sbc.c 34 */;
	int cocci_id/* sound/soc/qcom/apq8016_sbc.c 34 */;
	struct platform_driver cocci_id/* sound/soc/qcom/apq8016_sbc.c 268 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/apq8016_sbc.c 262 */[];
	struct resource *cocci_id/* sound/soc/qcom/apq8016_sbc.c 231 */;
	struct platform_device *cocci_id/* sound/soc/qcom/apq8016_sbc.c 226 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/qcom/apq8016_sbc.c 217 */[];
	struct apq8016_sbc_data {
		void __iomem *mic_iomux;
		void __iomem *spkr_iomux;
		struct snd_soc_jack jack;
		bool jack_setup;
		struct snd_soc_dai_link dai_link[];
	} cocci_id/* sound/soc/qcom/apq8016_sbc.c 20 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/qcom/apq8016_sbc.c 120 */;
	struct device_node *cocci_id/* sound/soc/qcom/apq8016_sbc.c 118 */;
	struct device *cocci_id/* sound/soc/qcom/apq8016_sbc.c 116 */;
}
