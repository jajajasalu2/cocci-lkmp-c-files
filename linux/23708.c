cocci_test_suite() {
	struct snd_pcm_substream *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 99 */;
	struct ccsr_guts cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 57 */;
	struct ccsr_guts __iomem *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 55 */;
	struct mpc8610_hpcd_data cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 54 */;
	struct mpc8610_hpcd_data *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 53 */;
	struct snd_soc_card *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 51 */;
	int cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 51 */;
	void __exit cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 441 */;
	void cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 441 */;
	struct resource cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 421 */;
	struct device_node *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 420 */;
	int __init cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 418 */;
	struct platform_driver cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 402 */;
	struct mpc8610_hpcd_data {
		struct snd_soc_dai_link dai[2];
		struct snd_soc_card card;
		unsigned int dai_format;
		unsigned int codec_clk_direction;
		unsigned int cpu_clk_direction;
		unsigned int clk_frequency;
		unsigned int ssi_id;
		unsigned int dma_id[2];
		unsigned int dma_channel_id[2];
		char codec_dai_name[DAI_NAME_SIZE];
		char platform_name[2][DAI_NAME_SIZE];
	} cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 30 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 246 */;
	phys_addr_t cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 22 */;
	const u32 *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 195 */;
	const char *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 194 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 192 */;
	struct device *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 186 */;
	struct platform_device *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 184 */;
	const struct snd_soc_ops cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 173 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/fsl/mpc8610_hpcd.c 101 */;
}
