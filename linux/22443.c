cocci_test_suite() {
	struct snd_ice1712_card_info cocci_id/* sound/pci/ice1712/psc724.c 438 */[];
	unsigned char cocci_id/* sound/pci/ice1712/psc724.c 423 */[];
	void cocci_id/* sound/pci/ice1712/psc724.c 415 */;
	struct psc724_spec *cocci_id/* sound/pci/ice1712/psc724.c 310 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ice1712/psc724.c 308 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/ice1712/psc724.c 307 */;
	struct snd_ice1712 *cocci_id/* sound/pci/ice1712/psc724.c 305 */;
	int cocci_id/* sound/pci/ice1712/psc724.c 305 */;
	const char *cocci_id/* sound/pci/ice1712/psc724.c 289 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ice1712/psc724.c 262 */;
	const struct psc724_control cocci_id/* sound/pci/ice1712/psc724.c 248 */[];
	struct psc724_control {
		const char *name;
		void (*set)(struct snd_ice1712 *ice, bool on);
		bool (*get)(struct snd_ice1712 *ice);
	} cocci_id/* sound/pci/ice1712/psc724.c 242 */;
	bool cocci_id/* sound/pci/ice1712/psc724.c 233 */;
	struct psc724_spec {
		struct snd_wm8766 wm8766;
		struct snd_wm8776 wm8776;
		bool mute_all,jack_detect;
		struct snd_ice1712 *ice;
		struct delayed_work hp_work;
		bool hp_connected;
	} cocci_id/* sound/pci/ice1712/psc724.c 21 */;
	struct psc724_spec cocci_id/* sound/pci/ice1712/psc724.c 205 */;
	struct work_struct *cocci_id/* sound/pci/ice1712/psc724.c 203 */;
	u16 cocci_id/* sound/pci/ice1712/psc724.c 182 */;
	struct snd_ctl_elem_id cocci_id/* sound/pci/ice1712/psc724.c 180 */;
	unsigned int cocci_id/* sound/pci/ice1712/psc724.c 157 */;
	u8 cocci_id/* sound/pci/ice1712/psc724.c 146 */;
	struct snd_wm8776 *cocci_id/* sound/pci/ice1712/psc724.c 146 */;
	u32 cocci_id/* sound/pci/ice1712/psc724.c 108 */;
	struct snd_wm8766 *cocci_id/* sound/pci/ice1712/psc724.c 104 */;
}
