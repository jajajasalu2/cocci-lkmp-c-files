cocci_test_suite() {
	enum control_attribute cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 86 */;
	unsigned int cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 85 */;
	s16 *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 84 */;
	u8 *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 31 */;
	enum control_action cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 29 */;
	u8 cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 28 */;
	bool *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 28 */;
	struct fw_unit *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 28 */;
	int cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 28 */;
	struct fw_spkr cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 273 */;
	struct fw_spkr *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 269 */;
	const struct snd_kcontrol_new cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 253 */[];
	bool cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 251 */;
	struct snd_oxfw *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 251 */;
	enum control_attribute{CTL_MIN=0x02, CTL_MAX=0x03, CTL_CURRENT=0x10,} cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 22 */;
	s16 cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 214 */;
	enum control_action{CTL_READ, CTL_WRITE,} cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 21 */;
	const u8 cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 192 */[6];
	struct snd_ctl_elem_info *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 179 */;
	struct snd_ctl_elem_value *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 146 */;
	struct snd_kcontrol *cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 145 */;
	struct fw_spkr {
		bool mute;
		s16 volume[6];
		s16 volume_min;
		s16 volume_max;
		unsigned int mixer_channels;
		u8 mute_fb_id;
		u8 volume_fb_id;
	} cocci_id/* sound/firewire/oxfw/oxfw-spkr.c 10 */;
}
