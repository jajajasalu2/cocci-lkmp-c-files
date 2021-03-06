cocci_test_suite() {
	hda_nid_t *cocci_id/* sound/pci/hda/patch_conexant.c 965 */;
	hda_nid_t cocci_id/* sound/pci/hda/patch_conexant.c 962 */[];
	struct conexant_spec *cocci_id/* sound/pci/hda/patch_conexant.c 961 */;
	struct hda_codec *cocci_id/* sound/pci/hda/patch_conexant.c 959 */;
	void cocci_id/* sound/pci/hda/patch_conexant.c 959 */;
	const struct hda_model_fixup cocci_id/* sound/pci/hda/patch_conexant.c 864 */[];
	const struct snd_pci_quirk cocci_id/* sound/pci/hda/patch_conexant.c 851 */[];
	hda_nid_t cocci_id/* sound/pci/hda/patch_conexant.c 77 */;
	const struct hda_pintbl cocci_id/* sound/pci/hda/patch_conexant.c 729 */[];
	const struct hda_fixup cocci_id/* sound/pci/hda/patch_conexant.c 706 */[];
	const struct hda_verb cocci_id/* sound/pci/hda/patch_conexant.c 656 */[];
	unsigned int cocci_id/* sound/pci/hda/patch_conexant.c 613 */;
	struct snd_kcontrol_new *cocci_id/* sound/pci/hda/patch_conexant.c 534 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_conexant.c 51 */[];
	const struct hda_input_mux *cocci_id/* sound/pci/hda/patch_conexant.c 483 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/hda/patch_conexant.c 473 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/hda/patch_conexant.c 418 */;
	struct hda_pcm_stream *cocci_id/* sound/pci/hda/patch_conexant.c 416 */;
	struct hda_jack_callback *cocci_id/* sound/pci/hda/patch_conexant.c 403 */;
	struct nid_path *cocci_id/* sound/pci/hda/patch_conexant.c 351 */;
	const struct hda_input_mux cocci_id/* sound/pci/hda/patch_conexant.c 323 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/hda/patch_conexant.c 272 */;
	struct snd_kcontrol *cocci_id/* sound/pci/hda/patch_conexant.c 271 */;
	struct auto_pin_cfg *cocci_id/* sound/pci/hda/patch_conexant.c 249 */;
	struct conexant_spec {
		struct hda_gen_spec gen;
		unsigned int num_eapds;
		hda_nid_t eapds[4];
		bool dynamic_eapd;
		hda_nid_t mute_led_eapd;
		unsigned int parse_flags;
		bool recording;
		bool dc_enable;
		unsigned int dc_input_bias;
		struct nid_path *dc_mode_path;
		int mute_led_polarity;
		unsigned int gpio_led;
		unsigned int gpio_mute_led_mask;
		unsigned int gpio_mic_led_mask;
	} cocci_id/* sound/pci/hda/patch_conexant.c 24 */;
	const struct hda_fixup *cocci_id/* sound/pci/hda/patch_conexant.c 231 */;
	enum{CXT_PINCFG_LENOVO_X200, CXT_PINCFG_LENOVO_TP410, CXT_PINCFG_LEMOTE_A1004, CXT_PINCFG_LEMOTE_A1205, CXT_PINCFG_COMPAQ_CQ60, CXT_FIXUP_STEREO_DMIC, CXT_FIXUP_INC_MIC_BOOST, CXT_FIXUP_HEADPHONE_MIC_PIN, CXT_FIXUP_HEADPHONE_MIC, CXT_FIXUP_GPIO1, CXT_FIXUP_ASPIRE_DMIC, CXT_FIXUP_THINKPAD_ACPI, CXT_FIXUP_OLPC_XO, CXT_FIXUP_CAP_MIX_AMP, CXT_FIXUP_TOSHIBA_P105, CXT_FIXUP_HP_530, CXT_FIXUP_CAP_MIX_AMP_5047, CXT_FIXUP_MUTE_LED_EAPD, CXT_FIXUP_HP_DOCK, CXT_FIXUP_HP_SPECTRE, CXT_FIXUP_HP_GATE_MIC, CXT_FIXUP_MUTE_LED_GPIO, CXT_FIXUP_HEADSET_MIC, CXT_FIXUP_HP_MIC_NO_PRESENCE,} cocci_id/* sound/pci/hda/patch_conexant.c 193 */;
	const struct hda_codec_ops cocci_id/* sound/pci/hda/patch_conexant.c 178 */;
	int cocci_id/* sound/pci/hda/patch_conexant.c 150 */;
	void *cocci_id/* sound/pci/hda/patch_conexant.c 131 */;
	bool cocci_id/* sound/pci/hda/patch_conexant.c 119 */;
	struct hda_codec_driver cocci_id/* sound/pci/hda/patch_conexant.c 1112 */;
	const struct hda_device_id cocci_id/* sound/pci/hda/patch_conexant.c 1074 */[];
}
