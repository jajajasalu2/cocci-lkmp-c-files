cocci_test_suite() {
	struct snd_timer_status32 cocci_id/* sound/core/timer_compat.c 85 */;
	struct snd_timer_status32 __user *cocci_id/* sound/core/timer_compat.c 82 */;
	struct snd_timer_status32 {
		struct compat_timespec tstamp;
		u32 resolution;
		u32 lost;
		u32 overrun;
		u32 queue;
		unsigned char reserved[64];
	} cocci_id/* sound/core/timer_compat.c 72 */;
	struct snd_timer *cocci_id/* sound/core/timer_compat.c 52 */;
	struct snd_timer_info32 cocci_id/* sound/core/timer_compat.c 51 */;
	struct snd_timer_user *cocci_id/* sound/core/timer_compat.c 50 */;
	struct snd_timer_info32 __user *cocci_id/* sound/core/timer_compat.c 48 */;
	struct snd_timer_gparams cocci_id/* sound/core/timer_compat.c 37 */;
	struct snd_timer_gparams32 __user *cocci_id/* sound/core/timer_compat.c 35 */;
	int cocci_id/* sound/core/timer_compat.c 34 */;
	struct snd_timer_info32 {
		u32 flags;
		s32 card;
		unsigned char id[64];
		unsigned char name[80];
		u32 reserved0;
		u32 resolution;
		unsigned char reserved[64];
	} cocci_id/* sound/core/timer_compat.c 24 */;
	struct snd_timer_gparams32 {
		struct snd_timer_id tid;
		u32 period_num;
		u32 period_den;
		unsigned char reserved[32];
	}__packed cocci_id/* sound/core/timer_compat.c 17 */;
	void __user *cocci_id/* sound/core/timer_compat.c 125 */;
	unsigned long cocci_id/* sound/core/timer_compat.c 123 */;
	struct file *cocci_id/* sound/core/timer_compat.c 122 */;
	unsigned int cocci_id/* sound/core/timer_compat.c 122 */;
	long cocci_id/* sound/core/timer_compat.c 122 */;
	enum{SNDRV_TIMER_IOCTL_GPARAMS32=_IOW('T', 0x04,
					      struct snd_timer_gparams32), SNDRV_TIMER_IOCTL_INFO32=_IOR('T',
													 0x11,
													 struct snd_timer_info32), SNDRV_TIMER_IOCTL_STATUS32=_IOW('T',
																				   0x14,
																				   struct snd_timer_status32),

#ifdef CONFIG_X86_X32
 SNDRV_TIMER_IOCTL_STATUS_X32=_IOW('T', 0x14, struct snd_timer_status),

#endif
} cocci_id/* sound/core/timer_compat.c 113 */;
}
