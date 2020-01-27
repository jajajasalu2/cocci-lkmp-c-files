cocci_test_suite() {
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 58 */;
	struct i2c_client *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 56 */;
	struct device_node *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 53 */;
	struct platform_device *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 51 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/fsl/imx-sgtl5000.c 43 */[];
	struct device *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 30 */;
	struct imx_sgtl5000_data *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 29 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 27 */;
	int cocci_id/* sound/soc/fsl/imx-sgtl5000.c 27 */;
	struct platform_driver cocci_id/* sound/soc/fsl/imx-sgtl5000.c 212 */;
	const struct of_device_id cocci_id/* sound/soc/fsl/imx-sgtl5000.c 206 */[];
	struct snd_soc_card *cocci_id/* sound/soc/fsl/imx-sgtl5000.c 198 */;
	struct imx_sgtl5000_data {
		struct snd_soc_dai_link dai;
		struct snd_soc_card card;
		char codec_dai_name[DAI_NAME_SIZE];
		char platform_name[DAI_NAME_SIZE];
		struct clk *codec_clk;
		unsigned int clk_frequency;
	} cocci_id/* sound/soc/fsl/imx-sgtl5000.c 18 */;
}
