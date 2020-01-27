cocci_test_suite() {
	struct snd_rawmidi_status_x32 {
		s32 stream;
		u32 rsvd;
		struct timespec tstamp;
		u32 avail;
		u32 xruns;
		unsigned char reserved[16];
	}__attribute__((packed)) cocci_id/* sound/core/rawmidi_compat.c 88 */;
	struct snd_rawmidi_status cocci_id/* sound/core/rawmidi_compat.c 56 */;
	struct snd_rawmidi_status32 __user *cocci_id/* sound/core/rawmidi_compat.c 53 */;
	struct snd_rawmidi_status32 {
		s32 stream;
		struct compat_timespec tstamp;
		u32 avail;
		u32 xruns;
		unsigned char reserved[16];
	}__attribute__((packed)) cocci_id/* sound/core/rawmidi_compat.c 44 */;
	struct snd_rawmidi_params cocci_id/* sound/core/rawmidi_compat.c 22 */;
	struct snd_rawmidi_params32 __user *cocci_id/* sound/core/rawmidi_compat.c 20 */;
	int cocci_id/* sound/core/rawmidi_compat.c 19 */;
	void __user *cocci_id/* sound/core/rawmidi_compat.c 145 */;
	struct snd_rawmidi_file *cocci_id/* sound/core/rawmidi_compat.c 144 */;
	struct file *cocci_id/* sound/core/rawmidi_compat.c 142 */;
	unsigned long cocci_id/* sound/core/rawmidi_compat.c 142 */;
	unsigned int cocci_id/* sound/core/rawmidi_compat.c 142 */;
	long cocci_id/* sound/core/rawmidi_compat.c 142 */;
	enum{SNDRV_RAWMIDI_IOCTL_PARAMS32=_IOWR('W', 0x10,
						struct snd_rawmidi_params32), SNDRV_RAWMIDI_IOCTL_STATUS32=_IOWR('W',
														 0x20,
														 struct snd_rawmidi_status32),

#ifdef CONFIG_X86_X32
 SNDRV_RAWMIDI_IOCTL_STATUS_X32=_IOWR('W', 0x20,
				      struct snd_rawmidi_status_x32),

#endif
} cocci_id/* sound/core/rawmidi_compat.c 134 */;
	struct snd_rawmidi_params32 {
		s32 stream;
		u32 buffer_size;
		u32 avail_min;
		unsigned int no_active_sensing;
		unsigned char reserved[16];
	}__attribute__((packed)) cocci_id/* sound/core/rawmidi_compat.c 11 */;
	struct snd_rawmidi_status_x32 __user *cocci_id/* sound/core/rawmidi_compat.c 100 */;
}
