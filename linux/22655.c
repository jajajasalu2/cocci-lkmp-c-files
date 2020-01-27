cocci_test_suite() {
	char cocci_id/* sound/usb/mixer_scarlett.c 920 */[4];
	const struct scarlett_mixer_control *cocci_id/* sound/usb/mixer_scarlett.c 850 */;
	struct scarlett_device_info *cocci_id/* sound/usb/mixer_scarlett.c 846 */;
	struct scarlett_device_info cocci_id/* sound/usb/mixer_scarlett.c 796 */;
	char cocci_id/* sound/usb/mixer_scarlett.c 589 */[SNDRV_CTL_ELEM_ID_NAME_MAXLEN];
	const struct scarlett_device_info *cocci_id/* sound/usb/mixer_scarlett.c 586 */;
	void *cocci_id/* sound/usb/mixer_scarlett.c 563 */;
	struct usb_mixer_elem_info *cocci_id/* sound/usb/mixer_scarlett.c 546 */;
	struct snd_kcontrol *cocci_id/* sound/usb/mixer_scarlett.c 545 */;
	struct usb_mixer_elem_info **cocci_id/* sound/usb/mixer_scarlett.c 542 */;
	const struct scarlett_mixer_elem_enum_info *cocci_id/* sound/usb/mixer_scarlett.c 541 */;
	const char *cocci_id/* sound/usb/mixer_scarlett.c 540 */;
	usb_mixer_elem_resume_func_t cocci_id/* sound/usb/mixer_scarlett.c 538 */;
	const struct snd_kcontrol_new *cocci_id/* sound/usb/mixer_scarlett.c 537 */;
	struct usb_mixer_interface *cocci_id/* sound/usb/mixer_scarlett.c 536 */;
	int cocci_id/* sound/usb/mixer_scarlett.c 536 */;
	const struct snd_kcontrol_new cocci_id/* sound/usb/mixer_scarlett.c 488 */;
	unsigned char cocci_id/* sound/usb/mixer_scarlett.c 461 */[2 * MAX_CHANNELS];
	struct snd_usb_audio *cocci_id/* sound/usb/mixer_scarlett.c 460 */;
	struct usb_mixer_elem_list *cocci_id/* sound/usb/mixer_scarlett.c 447 */;
	struct snd_ctl_elem_value *cocci_id/* sound/usb/mixer_scarlett.c 410 */;
	const char *const *cocci_id/* sound/usb/mixer_scarlett.c 406 */;
	unsigned int cocci_id/* sound/usb/mixer_scarlett.c 382 */;
	struct scarlett_mixer_elem_enum_info *cocci_id/* sound/usb/mixer_scarlett.c 381 */;
	struct snd_ctl_elem_info *cocci_id/* sound/usb/mixer_scarlett.c 378 */;
	int cocci_id/* sound/usb/mixer_scarlett.c 360 */[];
	char *cocci_id/* sound/usb/mixer_scarlett.c 360 */;
	void cocci_id/* sound/usb/mixer_scarlett.c 360 */;
	const char *const cocci_id/* sound/usb/mixer_scarlett.c 218 */[];
	const struct scarlett_mixer_elem_enum_info cocci_id/* sound/usb/mixer_scarlett.c 214 */;
	struct scarlett_device_info {
		int matrix_in;
		int matrix_out;
		int input_len;
		int output_len;
		struct scarlett_mixer_elem_enum_info opt_master;
		struct scarlett_mixer_elem_enum_info opt_matrix;
		int matrix_mux_init[SND_SCARLETT_MATRIX_IN_MAX];
		int num_controls;
		const struct scarlett_mixer_control controls[SND_SCARLETT_CONTROLS_MAX];
	} cocci_id/* sound/usb/mixer_scarlett.c 169 */;
	struct scarlett_mixer_control {
		unsigned char num;
		unsigned char type;
		const char *name;
	} cocci_id/* sound/usb/mixer_scarlett.c 163 */;
	struct scarlett_mixer_elem_enum_info {
		int start;
		int len;
		int offsets[SND_SCARLETT_OFFSETS_MAX];
		const char *const *names;
	} cocci_id/* sound/usb/mixer_scarlett.c 156 */;
	enum{SCARLETT_OFFSET_PCM=0, SCARLETT_OFFSET_ANALOG=1, SCARLETT_OFFSET_SPDIF=2, SCARLETT_OFFSET_ADAT=3, SCARLETT_OFFSET_MIX=4,} cocci_id/* sound/usb/mixer_scarlett.c 148 */;
	enum{SCARLETT_OUTPUTS, SCARLETT_SWITCH_IMPEDANCE, SCARLETT_SWITCH_PAD, SCARLETT_SWITCH_GAIN,} cocci_id/* sound/usb/mixer_scarlett.c 141 */;
}
