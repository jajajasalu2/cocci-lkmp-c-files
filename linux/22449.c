cocci_test_suite() {
	struct snd_ice1712_card_info cocci_id/* sound/pci/ice1712/se.c 732 */[];
	struct snd_kcontrol_new cocci_id/* sound/pci/ice1712/se.c 584 */;
	struct se_spec *cocci_id/* sound/pci/ice1712/se.c 459 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ice1712/se.c 456 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ice1712/se.c 455 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/ice1712/se.c 433 */;
	const char *const*cocci_id/* sound/pci/ice1712/se.c 409 */;
	const struct se200pci_control cocci_id/* sound/pci/ice1712/se.c 355 */[];
	struct se200pci_control {
		const char *name;
		enum{WM8766, WM8776in, WM8776out, WM8776sel, WM8776agc, WM8776afl,} target;
		enum{VOLUME1, VOLUME2, BOOLEAN, ENUM,} type;
		int ch;
		const char *const*member;
		const char *comment;
	} cocci_id/* sound/pci/ice1712/se.c 339 */;
	unsigned short cocci_id/* sound/pci/ice1712/se.c 291 */[];
	const char *constcocci_id/* sound/pci/ice1712/se.c 266 */[];
	unsigned char cocci_id/* sound/pci/ice1712/se.c 248 */[];
	struct se_spec {
		struct {
			unsigned char ch1,ch2;
		} vol[8];
	} cocci_id/* sound/pci/ice1712/se.c 22 */;
	int cocci_id/* sound/pci/ice1712/se.c 165 */;
	const unsigned int cocci_id/* sound/pci/ice1712/se.c 125 */;
	unsigned int cocci_id/* sound/pci/ice1712/se.c 109 */;
	struct snd_ice1712 *cocci_id/* sound/pci/ice1712/se.c 102 */;
	void cocci_id/* sound/pci/ice1712/se.c 102 */;
}
