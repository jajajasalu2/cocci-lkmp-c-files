cocci_test_suite() {
	struct device *cocci_id/* sound/soc/fsl/imx-es8328.c 80 */;
	u32 cocci_id/* sound/soc/fsl/imx-es8328.c 78 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/fsl/imx-es8328.c 77 */;
	struct device_node *cocci_id/* sound/soc/fsl/imx-es8328.c 73 */;
	struct platform_device *cocci_id/* sound/soc/fsl/imx-es8328.c 71 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/fsl/imx-es8328.c 64 */[];
	struct imx_es8328_data cocci_id/* sound/soc/fsl/imx-es8328.c 44 */;
	struct imx_es8328_data *cocci_id/* sound/soc/fsl/imx-es8328.c 43 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/fsl/imx-es8328.c 41 */;
	int cocci_id/* sound/soc/fsl/imx-es8328.c 41 */;
	struct snd_soc_jack cocci_id/* sound/soc/fsl/imx-es8328.c 39 */;
	struct snd_soc_jack_gpio cocci_id/* sound/soc/fsl/imx-es8328.c 29 */[];
	struct platform_driver cocci_id/* sound/soc/fsl/imx-es8328.c 225 */;
	const struct of_device_id cocci_id/* sound/soc/fsl/imx-es8328.c 219 */[];
	struct imx_es8328_data {
		struct device *dev;
		struct snd_soc_dai_link dai;
		struct snd_soc_card card;
		char codec_dai_name[DAI_NAME_SIZE];
		char platform_name[DAI_NAME_SIZE];
		int jack_gpio;
	} cocci_id/* sound/soc/fsl/imx-es8328.c 20 */;
}
