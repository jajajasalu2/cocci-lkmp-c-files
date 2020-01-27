cocci_test_suite() {
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 76 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 66 */[];
	struct platform_driver cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 638 */;
	const struct platform_device_id cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 629 */[];
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 603 */;
	const char *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 602 */;
	struct snd_soc_acpi_mach *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 601 */;
	struct glk_card_private *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 600 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 60 */[];
	struct platform_device *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 598 */;
	int cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 598 */;
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 583 */;
	struct glk_hdmi_pcm cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 550 */;
	char cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 545 */[NAME_SIZE];
	enum{GLK_DPCM_AUDIO_PB=0, GLK_DPCM_AUDIO_CP, GLK_DPCM_AUDIO_HS_PB, GLK_DPCM_AUDIO_ECHO_REF_CP, GLK_DPCM_AUDIO_REF_CP, GLK_DPCM_AUDIO_DMIC_CP, GLK_DPCM_AUDIO_HDMI1_PB, GLK_DPCM_AUDIO_HDMI2_PB, GLK_DPCM_AUDIO_HDMI3_PB,} cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 48 */;
	struct glk_card_private {
		struct snd_soc_jack geminilake_headset;
		struct list_head hdmi_pcm_list;
		bool common_hdmi_codec_drv;
	} cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 42 */;
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 385 */[];
	struct glk_hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 36 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 34 */[3];
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 306 */;
	const struct snd_soc_ops cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 298 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 288 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 286 */;
	struct snd_interval *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 275 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 273 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 272 */;
	struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 266 */;
	unsigned int cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 262 */[];
	const unsigned int cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 252 */[];
	struct snd_soc_dapm_context *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 229 */;
	struct glk_hdmi_pcm *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 212 */;
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 211 */;
	struct snd_soc_ops cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 204 */;
	struct snd_soc_jack *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 141 */;
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 139 */;
	struct snd_mask *cocci_id/* sound/soc/intel/boards/glk_rt5682_max98357a.c 123 */;
}
