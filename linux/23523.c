cocci_test_suite() {
	struct snd_soc_jack *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 90 */;
	struct snd_soc_component *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 89 */;
	struct card_private *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 88 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 68 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 58 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 49 */[];
	struct platform_driver cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 472 */;
	const char *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 447 */;
	struct snd_soc_acpi_mach *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 446 */;
	struct platform_device *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 443 */;
	struct snd_soc_card cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 427 */;
	struct card_private {
		char codec_name[SND_ACPI_I2C_ID_LEN];
		struct snd_soc_jack headset;
		struct list_head hdmi_pcm_list;
		bool common_hdmi_codec_drv;
	} cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 42 */;
	struct snd_soc_codec_conf cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 407 */[];
	struct hdmi_pcm {
		struct list_head head;
		struct snd_soc_dai *codec_dai;
		int device;
	} cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 36 */;
	struct snd_soc_jack cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 34 */[3];
	struct snd_soc_dai_link cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 337 */[];
	struct hdmi_pcm *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 279 */;
	struct hdmi_pcm cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 245 */;
	char cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 241 */[NAME_SIZE];
	const struct snd_soc_ops cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 233 */;
	struct snd_soc_ops cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 229 */;
	struct snd_soc_card *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 163 */;
	struct snd_soc_dai *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 162 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 161 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 159 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 158 */;
	int cocci_id/* sound/soc/intel/boards/cml_rt1011_rt5682.c 158 */;
}
