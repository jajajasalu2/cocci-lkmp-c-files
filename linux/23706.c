cocci_test_suite() {
	u32 cocci_id/* sound/soc/fsl/imx-audmix.c 80 */;
	unsigned long cocci_id/* sound/soc/fsl/imx-audmix.c 51 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/fsl/imx-audmix.c 49 */;
	struct imx_audmix *cocci_id/* sound/soc/fsl/imx-audmix.c 48 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/fsl/imx-audmix.c 40 */;
	const u32 cocci_id/* sound/soc/fsl/imx-audmix.c 36 */[];
	struct platform_driver cocci_id/* sound/soc/fsl/imx-audmix.c 344 */;
	struct imx_audmix {
		struct platform_device *pdev;
		struct snd_soc_card card;
		struct platform_device *audmix_pdev;
		struct platform_device *out_pdev;
		struct clk *cpu_mclk;
		int num_dai;
		struct snd_soc_dai_link *dai;
		int num_dai_conf;
		struct snd_soc_codec_conf *dai_conf;
		int num_dapm_routes;
		struct snd_soc_dapm_route *dapm_routes;
	} cocci_id/* sound/soc/fsl/imx-audmix.c 22 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/fsl/imx-audmix.c 208 */;
	struct snd_soc_dapm_route cocci_id/* sound/soc/fsl/imx-audmix.c 202 */;
	struct snd_soc_codec_conf cocci_id/* sound/soc/fsl/imx-audmix.c 195 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/fsl/imx-audmix.c 189 */;
	char *cocci_id/* sound/soc/fsl/imx-audmix.c 154 */;
	const char *cocci_id/* sound/soc/fsl/imx-audmix.c 153 */;
	struct of_phandle_args cocci_id/* sound/soc/fsl/imx-audmix.c 150 */;
	struct device_node *cocci_id/* sound/soc/fsl/imx-audmix.c 146 */;
	struct platform_device *cocci_id/* sound/soc/fsl/imx-audmix.c 144 */;
	struct snd_soc_ops cocci_id/* sound/soc/fsl/imx-audmix.c 140 */;
	unsigned int cocci_id/* sound/soc/fsl/imx-audmix.c 118 */;
	bool cocci_id/* sound/soc/fsl/imx-audmix.c 117 */;
	struct device *cocci_id/* sound/soc/fsl/imx-audmix.c 116 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/fsl/imx-audmix.c 115 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/fsl/imx-audmix.c 113 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/fsl/imx-audmix.c 112 */;
	int cocci_id/* sound/soc/fsl/imx-audmix.c 112 */;
}
