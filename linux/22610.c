cocci_test_suite() {
	struct usb_device *cocci_id/* sound/usb/mixer_quirks.c 890 */;
	const char *constcocci_id/* sound/usb/mixer_quirks.c 879 */[8];
	bool cocci_id/* sound/usb/mixer_quirks.c 677 */;
	struct usb_mixer_elem_info *cocci_id/* sound/usb/mixer_quirks.c 62 */;
	unsigned char cocci_id/* sound/usb/mixer_quirks.c 607 */[3];
	unsigned char cocci_id/* sound/usb/mixer_quirks.c 469 */[2];
	const char *constcocci_id/* sound/usb/mixer_quirks.c 452 */[2];
	struct snd_ctl_elem_info *cocci_id/* sound/usb/mixer_quirks.c 450 */;
	u8 cocci_id/* sound/usb/mixer_quirks.c 419 */[3];
	const struct sb_jack *cocci_id/* sound/usb/mixer_quirks.c 416 */;
	const struct sb_jack {
		int unitid;
		const char *name;
	} cocci_id/* sound/usb/mixer_quirks.c 401 */[];
	struct snd_info_buffer *cocci_id/* sound/usb/mixer_quirks.c 399 */;
	struct snd_info_entry *cocci_id/* sound/usb/mixer_quirks.c 398 */;
	struct std_mono_table {
		unsigned int unitid,control,cmask;
		int val_type;
		const char *name;
		snd_kcontrol_tlv_rw_t *tlv_callback;
	} cocci_id/* sound/usb/mixer_quirks.c 39 */;
	struct snd_kcontrol_new cocci_id/* sound/usb/mixer_quirks.c 371 */;
	const char *constcocci_id/* sound/usb/mixer_quirks.c 360 */[];
	const struct snd_kcontrol_new cocci_id/* sound/usb/mixer_quirks.c 353 */;
	unsigned int cocci_id/* sound/usb/mixer_quirks.c 331 */;
	struct snd_ctl_elem_value *cocci_id/* sound/usb/mixer_quirks.c 289 */;
	u8 *cocci_id/* sound/usb/mixer_quirks.c 282 */;
	const  cocci_id/* sound/usb/mixer_quirks.c 2330 */(scale,
							   0,1,
							   TLV_DB_MINMAX_ITEM(-5300,-4970),
							   2,5,
							   TLV_DB_MINMAX_ITEM(-4710,-4160),
							   6,7,
							   TLV_DB_MINMAX_ITEM(-3884,-3710),
							   8,14,
							   TLV_DB_MINMAX_ITEM(-3443,-2560),
							   15,16,
							   TLV_DB_MINMAX_ITEM(-2475,-2324),
							   17,19,
							   TLV_DB_MINMAX_ITEM(-2228,-2031),
							   20,26,
							   TLV_DB_MINMAX_ITEM(-1910,-1393),
							   27,31,
							   TLV_DB_MINMAX_ITEM(-1322,-1032),
							   32,40,
							   TLV_DB_MINMAX_ITEM(-968,-490),
							   41,50,
							   TLV_DB_MINMAX_ITEM(-441,0));
	poll_table *cocci_id/* sound/usb/mixer_quirks.c 231 */;
	__poll_t cocci_id/* sound/usb/mixer_quirks.c 230 */;
	struct snd_hwdep *cocci_id/* sound/usb/mixer_quirks.c 230 */;
	struct file *cocci_id/* sound/usb/mixer_quirks.c 230 */;
	u32 __user *cocci_id/* sound/usb/mixer_quirks.c 225 */;
	loff_t *cocci_id/* sound/usb/mixer_quirks.c 211 */;
	char __user *cocci_id/* sound/usb/mixer_quirks.c 210 */;
	long cocci_id/* sound/usb/mixer_quirks.c 210 */;
	const u64 cocci_id/* sound/usb/mixer_quirks.c 2009 */;
	u32 cocci_id/* sound/usb/mixer_quirks.c 2008 */;
	const struct rc_config *cocci_id/* sound/usb/mixer_quirks.c 192 */;
	struct urb *cocci_id/* sound/usb/mixer_quirks.c 189 */;
	u32 *cocci_id/* sound/usb/mixer_quirks.c 1886 */;
	enum snd_rme_clock_status{SND_RME_CLOCK_NOLOCK, SND_RME_CLOCK_LOCK, SND_RME_CLOCK_SYNC,} cocci_id/* sound/usb/mixer_quirks.c 1860 */;
	enum snd_rme_domain{SND_RME_DOMAIN_SYSTEM, SND_RME_DOMAIN_AES, SND_RME_DOMAIN_SPDIF,} cocci_id/* sound/usb/mixer_quirks.c 1854 */;
	const u32 cocci_id/* sound/usb/mixer_quirks.c 1844 */[];
	u16 cocci_id/* sound/usb/mixer_quirks.c 1791 */;
	struct snd_usb_audio *cocci_id/* sound/usb/mixer_quirks.c 1789 */;
	void cocci_id/* sound/usb/mixer_quirks.c 1789 */;
	const struct rc_config {
		u32 usb_id;
		u8 offset;
		u8 length;
		u8 packet_length;
		u8 min_packet_length;
		u8 mute_mixer_id;
		u32 mute_code;
	} cocci_id/* sound/usb/mixer_quirks.c 171 */[];
	usb_mixer_elem_resume_func_t cocci_id/* sound/usb/mixer_quirks.c 1694 */[];
	struct snd_kcontrol_new cocci_id/* sound/usb/mixer_quirks.c 1665 */[];
	u8 cocci_id/* sound/usb/mixer_quirks.c 1543 */;
	struct usb_host_interface *cocci_id/* sound/usb/mixer_quirks.c 1496 */;
	struct usb_interface *cocci_id/* sound/usb/mixer_quirks.c 1495 */;
	struct snd_kcontrol *cocci_id/* sound/usb/mixer_quirks.c 144 */;
	struct usb_mixer_elem_list *cocci_id/* sound/usb/mixer_quirks.c 143 */;
	struct usb_mixer_elem_list **cocci_id/* sound/usb/mixer_quirks.c 141 */;
	const struct snd_kcontrol_new *cocci_id/* sound/usb/mixer_quirks.c 140 */;
	usb_mixer_elem_resume_func_t cocci_id/* sound/usb/mixer_quirks.c 139 */;
	struct std_mono_table cocci_id/* sound/usb/mixer_quirks.c 1389 */[];
	struct usb_mixer_interface *cocci_id/* sound/usb/mixer_quirks.c 137 */;
	int cocci_id/* sound/usb/mixer_quirks.c 137 */;
	char cocci_id/* sound/usb/mixer_quirks.c 1309 */[64];
	const int cocci_id/* sound/usb/mixer_quirks.c 1241 */;
	const unsigned int cocci_id/* sound/usb/mixer_quirks.c 1240 */;
	const char cocci_id/* sound/usb/mixer_quirks.c 1239 */[];
	struct std_mono_table *cocci_id/* sound/usb/mixer_quirks.c 122 */;
	unsigned char cocci_id/* sound/usb/mixer_quirks.c 1155 */;
	snd_kcontrol_tlv_rw_t *cocci_id/* sound/usb/mixer_quirks.c 112 */;
	const char *cocci_id/* sound/usb/mixer_quirks.c 111 */;
	char cocci_id/* sound/usb/mixer_quirks.c 1066 */[48];
}
