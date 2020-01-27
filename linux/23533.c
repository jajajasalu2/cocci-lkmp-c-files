cocci_test_suite() {
	void *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 73 */;
	struct platform_driver cocci_id/* sound/soc/intel/boards/sof_rt5682.c 686 */;
	const struct dmi_system_id cocci_id/* sound/soc/intel/boards/sof_rt5682.c 66 */[];
	const struct dmi_system_id *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 60 */;
	struct sof_card_private *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 589 */;
	struct snd_soc_acpi_mach *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 588 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 587 */;
	struct platform_device *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 585 */;
	struct sof_card_private {
		struct clk *mclk;
		struct snd_soc_jack sof_headset;
		struct list_head hdmi_pcm_list;
		bool common_hdmi_codec_drv;
	} cocci_id/* sound/soc/intel/boards/sof_rt5682.c 53 */;
	struct sof_hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/sof_rt5682.c 47 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/sof_rt5682.c 45 */[3];
	struct snd_soc_dai_link_component cocci_id/* sound/soc/intel/boards/sof_rt5682.c 428 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/sof_rt5682.c 426 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 421 */;
	struct device *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 415 */;
	struct snd_soc_dai_link_component cocci_id/* sound/soc/intel/boards/sof_rt5682.c 401 */[];
	unsigned long cocci_id/* sound/soc/intel/boards/sof_rt5682.c 40 */;
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/sof_rt5682.c 381 */;
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 360 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 358 */;
	int cocci_id/* sound/soc/intel/boards/sof_rt5682.c 358 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/sof_rt5682.c 340 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/sof_rt5682.c 322 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/sof_rt5682.c 310 */[];
	struct sof_hdmi_pcm cocci_id/* sound/soc/intel/boards/sof_rt5682.c 279 */;
	struct sof_hdmi_pcm *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 271 */;
	char cocci_id/* sound/soc/intel/boards/sof_rt5682.c 270 */[NAME_SIZE];
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 269 */;
	struct snd_soc_ops cocci_id/* sound/soc/intel/boards/sof_rt5682.c 255 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 202 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 201 */;
	struct snd_soc_jack *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 139 */;
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/sof_rt5682.c 119 */;
}
