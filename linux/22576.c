cocci_test_suite() {
	const struct hda_codec_ops cocci_id/* sound/pci/hda/patch_via.c 98 */;
	void cocci_id/* sound/pci/hda/patch_via.c 93 */(struct hda_pcm_stream *hinfo,
							struct hda_codec *codec,
							struct snd_pcm_substream *substream,
							int action);
	enum VIA_HDA_CODEC cocci_id/* sound/pci/hda/patch_via.c 92 */(struct hda_codec *codec);
	hda_nid_t cocci_id/* sound/pci/hda/patch_via.c 817 */;
	hda_nid_t cocci_id/* sound/pci/hda/patch_via.c 816 */[8];
	int cocci_id/* sound/pci/hda/patch_via.c 812 */;
	struct via_spec {
		struct hda_gen_spec gen;
		unsigned int dmic_enabled;
		enum VIA_HDA_CODEC codec_type;
		bool alc_mode;
		int hp_work_active;
		int vt1708_jack_detect;
	} cocci_id/* sound/pci/hda/patch_via.c 77 */;
	const struct hda_verb cocci_id/* sound/pci/hda/patch_via.c 755 */[];
	int cocci_id/* sound/pci/hda/patch_via.c 667 */(struct hda_codec *codec);
	struct hda_pcm *cocci_id/* sound/pci/hda/patch_via.c 577 */;
	enum VIA_HDA_CODEC{UNKNOWN=-1, VT1708, VT1709_10CH, VT1709_6CH, VT1708B_8CH, VT1708B_4CH, VT1708S, VT1708BCE, VT1702, VT1718S, VT1716S, VT2002P, VT1812, VT1802, VT1705CF, VT1808, CODEC_TYPES,} cocci_id/* sound/pci/hda/patch_via.c 52 */;
	const struct badness_table cocci_id/* sound/pci/hda/patch_via.c 501 */;
	unsigned char cocci_id/* sound/pci/hda/patch_via.c 441 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/hda/patch_via.c 368 */;
	struct hda_pcm_stream *cocci_id/* sound/pci/hda/patch_via.c 366 */;
	unsigned int cocci_id/* sound/pci/hda/patch_via.c 316 */;
	struct via_spec *cocci_id/* sound/pci/hda/patch_via.c 314 */;
	bool cocci_id/* sound/pci/hda/patch_via.c 312 */;
	struct hda_codec *cocci_id/* sound/pci/hda/patch_via.c 312 */;
	void cocci_id/* sound/pci/hda/patch_via.c 312 */;
	const struct hda_amp_list *cocci_id/* sound/pci/hda/patch_via.c 294 */;
	struct snd_kcontrol_new *cocci_id/* sound/pci/hda/patch_via.c 261 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_via.c 253 */[];
	const struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_via.c 243 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/hda/patch_via.c 219 */;
	struct snd_kcontrol *cocci_id/* sound/pci/hda/patch_via.c 218 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/hda/patch_via.c 213 */;
	bool cocci_id/* sound/pci/hda/patch_via.c 177 */(struct hda_codec *codec);
	void cocci_id/* sound/pci/hda/patch_via.c 176 */(struct hda_codec *codec);
	u16 cocci_id/* sound/pci/hda/patch_via.c 127 */;
	u32 cocci_id/* sound/pci/hda/patch_via.c 126 */;
	enum VIA_HDA_CODEC cocci_id/* sound/pci/hda/patch_via.c 124 */;
	struct hda_codec_driver cocci_id/* sound/pci/hda/patch_via.c 1230 */;
	const struct hda_device_id cocci_id/* sound/pci/hda/patch_via.c 1174 */[];
	hda_nid_t cocci_id/* sound/pci/hda/patch_via.c 1041 */[];
	const struct snd_pci_quirk cocci_id/* sound/pci/hda/patch_via.c 1030 */[];
	const struct hda_pintbl cocci_id/* sound/pci/hda/patch_via.c 1021 */[];
	const struct hda_fixup cocci_id/* sound/pci/hda/patch_via.c 1014 */[];
	const struct hda_fixup *cocci_id/* sound/pci/hda/patch_via.c 1008 */;
	enum{VIA_FIXUP_INTMIC_BOOST, VIA_FIXUP_ASUS_G75,} cocci_id/* sound/pci/hda/patch_via.c 1002 */;
}
