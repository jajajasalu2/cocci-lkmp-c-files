cocci_test_suite() {
	char *cocci_id/* sound/drivers/vx/vx_mixer.c 964 */[2];
	char cocci_id/* sound/drivers/vx/vx_mixer.c 904 */[32];
	struct snd_card *cocci_id/* sound/drivers/vx/vx_mixer.c 903 */;
	struct snd_kcontrol_new cocci_id/* sound/drivers/vx/vx_mixer.c 902 */;
	unsigned int cocci_id/* sound/drivers/vx/vx_mixer.c 900 */;
	struct vx_core *cocci_id/* sound/drivers/vx/vx_mixer.c 898 */;
	int cocci_id/* sound/drivers/vx/vx_mixer.c 898 */;
	struct vx_vu_meter cocci_id/* sound/drivers/vx/vx_mixer.c 844 */[2];
	union vx_codec_data cocci_id/* sound/drivers/vx/vx_mixer.c 76 */;
	const struct snd_kcontrol_new cocci_id/* sound/drivers/vx/vx_mixer.c 707 */;
	u8 cocci_id/* sound/drivers/vx/vx_mixer.c 63 */;
	unsigned int cocci_id/* sound/drivers/vx/vx_mixer.c 586 */[2];
	struct snd_kcontrol *cocci_id/* sound/drivers/vx/vx_mixer.c 568 */;
	struct snd_ctl_elem_value *cocci_id/* sound/drivers/vx/vx_mixer.c 568 */;
	struct snd_ctl_elem_info *cocci_id/* sound/drivers/vx/vx_mixer.c 559 */;
	const char *const cocci_id/* sound/drivers/vx/vx_mixer.c 464 */[2];
	const char *const cocci_id/* sound/drivers/vx/vx_mixer.c 461 */[3];
	struct vx_vu_meter *cocci_id/* sound/drivers/vx/vx_mixer.c 362 */;
	union vx_codec_data {
		u32 l;
#ifdef SNDRV_BIG_ENDIAN
		struct w {
			u16 h;
			u16 l;
		} w;
		struct b {
			u8 hh;
			u8 mh;
			u8 ml;
			u8 ll;
		} b;
#else
		struct w {
			u16 l;
			u16 h;
		} w;
		struct b {
			u8 ll;
			u8 ml;
			u8 mh;
			u8 hh;
		} b;
#endif
	} cocci_id/* sound/drivers/vx/vx_mixer.c 36 */;
	struct vx_vu_meter {
		int saturated;
		int vu_level;
		int peak_level;
	} cocci_id/* sound/drivers/vx/vx_mixer.c 350 */;
	struct vx_audio_level cocci_id/* sound/drivers/vx/vx_mixer.c 319 */;
	struct vx_rmh cocci_id/* sound/drivers/vx/vx_mixer.c 207 */;
	struct vx_audio_level *cocci_id/* sound/drivers/vx/vx_mixer.c 205 */;
	struct vx_audio_level {
		unsigned int has_level:1;
		unsigned int has_monitor_level:1;
		unsigned int has_mute:1;
		unsigned int has_monitor_mute:1;
		unsigned int mute;
		unsigned int monitor_mute;
		short level;
		short monitor_level;
	} cocci_id/* sound/drivers/vx/vx_mixer.c 193 */;
	void cocci_id/* sound/drivers/vx/vx_mixer.c 164 */;
}
