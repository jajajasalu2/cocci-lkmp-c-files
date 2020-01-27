cocci_test_suite() {
	const struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_cirrus.c 974 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/hda/patch_cirrus.c 935 */;
	const struct hda_pintbl cocci_id/* sound/pci/hda/patch_cirrus.c 826 */[];
	unsigned int cocci_id/* sound/pci/hda/patch_cirrus.c 758 */;
	hda_nid_t cocci_id/* sound/pci/hda/patch_cirrus.c 756 */;
	struct hda_codec *cocci_id/* sound/pci/hda/patch_cirrus.c 756 */;
	void cocci_id/* sound/pci/hda/patch_cirrus.c 756 */;
	struct snd_kcontrol *cocci_id/* sound/pci/hda/patch_cirrus.c 714 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/hda/patch_cirrus.c 697 */;
	const struct hda_fixup cocci_id/* sound/pci/hda/patch_cirrus.c 662 */[];
	struct cs_spec *cocci_id/* sound/pci/hda/patch_cirrus.c 654 */;
	const struct hda_fixup *cocci_id/* sound/pci/hda/patch_cirrus.c 651 */;
	int cocci_id/* sound/pci/hda/patch_cirrus.c 651 */;
	const struct snd_pci_quirk cocci_id/* sound/pci/hda/patch_cirrus.c 635 */[];
	const struct hda_model_fixup cocci_id/* sound/pci/hda/patch_cirrus.c 627 */[];
	enum{CS4208_MAC_AUTO, CS4208_MBA6, CS4208_MBP11, CS4208_MACMINI, CS4208_GPIO0,} cocci_id/* sound/pci/hda/patch_cirrus.c 619 */;
	enum{CS421X_CDB4210, CS421X_SENSE_B, CS421X_STUMPY,} cocci_id/* sound/pci/hda/patch_cirrus.c 59 */;
	enum{CS420X_MBP53, CS420X_MBP55, CS420X_IMAC27, CS420X_GPIO_13, CS420X_GPIO_23, CS420X_MBP101, CS420X_MBP81, CS420X_MBA42, CS420X_AUTO, CS420X_IMAC27_122=CS420X_GPIO_23, CS420X_APPLE=CS420X_GPIO_13,} cocci_id/* sound/pci/hda/patch_cirrus.c 43 */;
	const struct hda_verb cocci_id/* sound/pci/hda/patch_cirrus.c 221 */[];
	struct cs_spec {
		struct hda_gen_spec gen;
		unsigned int gpio_mask;
		unsigned int gpio_dir;
		unsigned int gpio_data;
		unsigned int gpio_eapd_hp;
		unsigned int gpio_eapd_speaker;
		unsigned int spdif_detect:1;
		unsigned int spdif_present:1;
		unsigned int sense_b:1;
		hda_nid_t vendor_nid;
		int (*spdif_sw_put)(struct snd_kcontrol *kcontrol,
				    struct snd_ctl_elem_value *ucontrol);
	} cocci_id/* sound/pci/hda/patch_cirrus.c 22 */;
	struct hda_codec_driver cocci_id/* sound/pci/hda/patch_cirrus.c 1239 */;
	const struct hda_device_id cocci_id/* sound/pci/hda/patch_cirrus.c 1226 */[];
	const struct hda_codec_ops cocci_id/* sound/pci/hda/patch_cirrus.c 1153 */;
	struct auto_pin_cfg *cocci_id/* sound/pci/hda/patch_cirrus.c 1045 */;
	bool cocci_id/* sound/pci/hda/patch_cirrus.c 1023 */;
	struct hda_jack_callback *cocci_id/* sound/pci/hda/patch_cirrus.c 1020 */;
}
