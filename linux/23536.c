cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/bxt_rt298.c 76 */[];
	struct platform_driver cocci_id/* sound/soc/intel/boards/bxt_rt298.c 651 */;
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/bxt_rt298.c 65 */[];
	unsigned long cocci_id/* sound/soc/intel/boards/bxt_rt298.c 645 */;
	const struct platform_device_id cocci_id/* sound/soc/intel/boards/bxt_rt298.c 643 */[];
	const char *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 601 */;
	struct snd_soc_acpi_mach *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 600 */;
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 598 */;
	struct bxt_rt286_private *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 597 */;
	struct platform_device *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 595 */;
	int cocci_id/* sound/soc/intel/boards/bxt_rt298.c 595 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/bxt_rt298.c 59 */[];
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/bxt_rt298.c 566 */;
	struct bxt_hdmi_pcm cocci_id/* sound/soc/intel/boards/bxt_rt298.c 532 */;
	char cocci_id/* sound/soc/intel/boards/bxt_rt298.c 530 */[NAME_SIZE];
	struct snd_soc_jack_pin cocci_id/* sound/soc/intel/boards/bxt_rt298.c 48 */[];
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/bxt_rt298.c 387 */[];
	enum{BXT_DPCM_AUDIO_PB=0, BXT_DPCM_AUDIO_CP, BXT_DPCM_AUDIO_REF_CP, BXT_DPCM_AUDIO_DMIC_CP, BXT_DPCM_AUDIO_HDMI1_PB, BXT_DPCM_AUDIO_HDMI2_PB, BXT_DPCM_AUDIO_HDMI3_PB,} cocci_id/* sound/soc/intel/boards/bxt_rt298.c 38 */;
	struct bxt_rt286_private {
		struct list_head hdmi_pcm_list;
		bool common_hdmi_codec_drv;
	} cocci_id/* sound/soc/intel/boards/bxt_rt298.c 33 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/bxt_rt298.c 295 */;
	const unsigned int cocci_id/* sound/soc/intel/boards/bxt_rt298.c 291 */[];
	const struct snd_soc_ops cocci_id/* sound/soc/intel/boards/bxt_rt298.c 287 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 277 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 275 */;
	struct bxt_hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/bxt_rt298.c 27 */;
	struct snd_interval *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 258 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 256 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 255 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/bxt_rt298.c 25 */[3];
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/bxt_rt298.c 24 */;
	struct snd_mask *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 211 */;
	struct bxt_hdmi_pcm *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 190 */;
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 189 */;
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 168 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/intel/boards/bxt_rt298.c 157 */;
}
