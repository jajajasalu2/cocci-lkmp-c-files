cocci_test_suite() {
	snd_pcm_uframes_t cocci_id/* sound/core/pcm_compat.c 87 */;
	struct snd_pcm_runtime *cocci_id/* sound/core/pcm_compat.c 87 */;
	struct snd_pcm_sw_params32 {
		s32 tstamp_mode;
		u32 period_step;
		u32 sleep_min;
		u32 avail_min;
		u32 xfer_align;
		u32 start_threshold;
		u32 stop_threshold;
		u32 silence_threshold;
		u32 silence_size;
		u32 boundary;
		u32 proto;
		u32 tstamp_type;
		unsigned char reserved[56];
	} cocci_id/* sound/core/pcm_compat.c 70 */;
	void __user *cocci_id/* sound/core/pcm_compat.c 642 */;
	struct snd_pcm_file *cocci_id/* sound/core/pcm_compat.c 640 */;
	struct file *cocci_id/* sound/core/pcm_compat.c 638 */;
	unsigned long cocci_id/* sound/core/pcm_compat.c 638 */;
	unsigned int cocci_id/* sound/core/pcm_compat.c 638 */;
	long cocci_id/* sound/core/pcm_compat.c 638 */;
	enum{SNDRV_PCM_IOCTL_HW_REFINE32=_IOWR('A', 0x10,
					       struct snd_pcm_hw_params32), SNDRV_PCM_IOCTL_HW_PARAMS32=_IOWR('A',
													      0x11,
													      struct snd_pcm_hw_params32), SNDRV_PCM_IOCTL_SW_PARAMS32=_IOWR('A',
																					     0x13,
																					     struct snd_pcm_sw_params32), SNDRV_PCM_IOCTL_STATUS32=_IOR('A',
																													0x20,
																													struct snd_pcm_status32), SNDRV_PCM_IOCTL_STATUS_EXT32=_IOWR('A',
																																				     0x24,
																																				     struct snd_pcm_status32), SNDRV_PCM_IOCTL_DELAY32=_IOR('A',
																																											    0x21,
																																											    s32), SNDRV_PCM_IOCTL_CHANNEL_INFO32=_IOR('A',
																																																      0x32,
																																																      struct snd_pcm_channel_info32), SNDRV_PCM_IOCTL_REWIND32=_IOW('A',
																																																								    0x46,
																																																								    u32), SNDRV_PCM_IOCTL_FORWARD32=_IOW('A',
																																																													 0x49,
																																																													 u32), SNDRV_PCM_IOCTL_WRITEI_FRAMES32=_IOW('A',
																																																																		    0x50,
																																																																		    struct snd_xferi32), SNDRV_PCM_IOCTL_READI_FRAMES32=_IOR('A',
																																																																									     0x51,
																																																																									     struct snd_xferi32), SNDRV_PCM_IOCTL_WRITEN_FRAMES32=_IOW('A',
																																																																																       0x52,
																																																																																       struct snd_xfern32), SNDRV_PCM_IOCTL_READN_FRAMES32=_IOR('A',
																																																																																								0x53,
																																																																																								struct snd_xfern32), SNDRV_PCM_IOCTL_SYNC_PTR32=_IOWR('A',
																																																																																														      0x23,
																																																																																														      struct snd_pcm_sync_ptr32),

#ifdef CONFIG_X86_X32
 SNDRV_PCM_IOCTL_CHANNEL_INFO_X32=_IOR('A', 0x32, struct snd_pcm_channel_info), SNDRV_PCM_IOCTL_STATUS_X32=_IOR('A',
														0x20,
														struct snd_pcm_status_x32), SNDRV_PCM_IOCTL_STATUS_EXT_X32=_IOWR('A',
																						 0x24,
																						 struct snd_pcm_status_x32), SNDRV_PCM_IOCTL_SYNC_PTR_X32=_IOWR('A',
																														0x23,
																														struct snd_pcm_sync_ptr_x32),

#endif
} cocci_id/* sound/core/pcm_compat.c 615 */;
	struct snd_pcm_sync_ptr_x32 __user *cocci_id/* sound/core/pcm_compat.c 556 */;
	struct snd_pcm_sync_ptr_x32 {
		u32 flags;
		u32 rsvd;
		union {
			struct snd_pcm_mmap_status_x32 status;
			unsigned char reserved[64];
		} s;
		union {
			struct snd_pcm_mmap_control_x32 control;
			unsigned char reserved[64];
		} c;
	}__packed cocci_id/* sound/core/pcm_compat.c 542 */;
	struct snd_pcm_hw_params32 {
		u32 flags;
		struct snd_mask masks[SNDRV_PCM_HW_PARAM_LAST_MASK - SNDRV_PCM_HW_PARAM_FIRST_MASK + 1];
		struct snd_mask mres[5];
		struct snd_interval intervals[SNDRV_PCM_HW_PARAM_LAST_INTERVAL - SNDRV_PCM_HW_PARAM_FIRST_INTERVAL + 1];
		struct snd_interval ires[9];
		u32 rmask;
		u32 cmask;
		u32 info;
		u32 msbits;
		u32 rate_num;
		u32 rate_den;
		u32 fifo_size;
		unsigned char reserved[64];
	} cocci_id/* sound/core/pcm_compat.c 54 */;
	struct snd_pcm_mmap_control_x32 {
		u32 appl_ptr;
		u32 avail_min;
	} cocci_id/* sound/core/pcm_compat.c 537 */;
	struct snd_pcm_mmap_status_x32 {
		s32 state;
		s32 pad1;
		u32 hw_ptr;
		u32 pad2;
		struct timespec tstamp;
		s32 suspended_state;
		s32 pad3;
		struct timespec audio_tstamp;
	}__packed cocci_id/* sound/core/pcm_compat.c 526 */;
	struct snd_pcm_mmap_status cocci_id/* sound/core/pcm_compat.c 474 */;
	struct snd_pcm_mmap_control cocci_id/* sound/core/pcm_compat.c 473 */;
	u32 cocci_id/* sound/core/pcm_compat.c 472 */;
	volatile struct snd_pcm_mmap_control *cocci_id/* sound/core/pcm_compat.c 471 */;
	volatile struct snd_pcm_mmap_status *cocci_id/* sound/core/pcm_compat.c 470 */;
	struct snd_pcm_sync_ptr32 __user *cocci_id/* sound/core/pcm_compat.c 467 */;
	struct snd_pcm_sync_ptr32 {
		u32 flags;
		union {
			struct snd_pcm_mmap_status32 status;
			unsigned char reserved[64];
		} s;
		union {
			struct snd_pcm_mmap_control32 control;
			unsigned char reserved[64];
		} c;
	}__attribute__((packed)) cocci_id/* sound/core/pcm_compat.c 454 */;
	struct snd_pcm_mmap_control32 {
		u32 appl_ptr;
		u32 avail_min;
	} cocci_id/* sound/core/pcm_compat.c 449 */;
	struct snd_pcm_mmap_status32 {
		s32 state;
		s32 pad1;
		u32 hw_ptr;
		struct compat_timespec tstamp;
		s32 suspended_state;
		struct compat_timespec audio_tstamp;
	}__attribute__((packed)) cocci_id/* sound/core/pcm_compat.c 440 */;
	u32 __user *cocci_id/* sound/core/pcm_compat.c 41 */;
	void __user **cocci_id/* sound/core/pcm_compat.c 399 */;
	compat_caddr_t __user *cocci_id/* sound/core/pcm_compat.c 397 */;
	struct snd_xfern32 __user *cocci_id/* sound/core/pcm_compat.c 394 */;
	struct snd_xfern32 {
		s32 result;
		u32 bufs;
		u32 frames;
	} cocci_id/* sound/core/pcm_compat.c 381 */;
	compat_caddr_t cocci_id/* sound/core/pcm_compat.c 352 */;
	struct snd_xferi32 __user *cocci_id/* sound/core/pcm_compat.c 350 */;
	struct snd_xferi32 {
		s32 result;
		u32 buf;
		u32 frames;
	} cocci_id/* sound/core/pcm_compat.c 343 */;
	struct snd_pcm_hw_params *cocci_id/* sound/core/pcm_compat.c 301 */;
	struct snd_pcm_hw_params32 __user *cocci_id/* sound/core/pcm_compat.c 299 */;
	struct snd_pcm_status_x32 __user *cocci_id/* sound/core/pcm_compat.c 255 */;
	struct snd_pcm_status_x32 {
		s32 state;
		u32 rsvd;
		struct timespec trigger_tstamp;
		struct timespec tstamp;
		u32 appl_ptr;
		u32 hw_ptr;
		s32 delay;
		u32 avail;
		u32 avail_max;
		u32 overrange;
		s32 suspended_state;
		u32 audio_tstamp_data;
		struct timespec audio_tstamp;
		struct timespec driver_tstamp;
		u32 audio_tstamp_accuracy;
		unsigned char reserved[52 - 2 * sizeof(struct timespec)];
	}__packed cocci_id/* sound/core/pcm_compat.c 233 */;
	struct snd_pcm_status cocci_id/* sound/core/pcm_compat.c 194 */;
	bool cocci_id/* sound/core/pcm_compat.c 192 */;
	struct snd_pcm_status32 __user *cocci_id/* sound/core/pcm_compat.c 191 */;
	struct snd_pcm_status32 {
		s32 state;
		struct compat_timespec trigger_tstamp;
		struct compat_timespec tstamp;
		u32 appl_ptr;
		u32 hw_ptr;
		s32 delay;
		u32 avail;
		u32 avail_max;
		u32 overrange;
		s32 suspended_state;
		u32 audio_tstamp_data;
		struct compat_timespec audio_tstamp;
		struct compat_timespec driver_tstamp;
		u32 audio_tstamp_accuracy;
		unsigned char reserved[52 - 2 * sizeof(struct compat_timespec)];
	}__attribute__((packed)) cocci_id/* sound/core/pcm_compat.c 171 */;
	int cocci_id/* sound/core/pcm_compat.c 165 */(struct snd_pcm_substream *substream,
						      struct snd_pcm_channel_info __user *src);
	snd_pcm_sframes_t cocci_id/* sound/core/pcm_compat.c 15 */;
	struct snd_pcm_channel_info cocci_id/* sound/core/pcm_compat.c 144 */;
	struct snd_pcm_channel_info32 __user *cocci_id/* sound/core/pcm_compat.c 142 */;
	struct snd_pcm_substream *cocci_id/* sound/core/pcm_compat.c 141 */;
	int cocci_id/* sound/core/pcm_compat.c 141 */;
	struct snd_pcm_channel_info32 {
		u32 channel;
		u32 offset;
		u32 first;
		u32 step;
	} cocci_id/* sound/core/pcm_compat.c 134 */;
	s32 __user *cocci_id/* sound/core/pcm_compat.c 13 */;
	struct snd_pcm_sw_params cocci_id/* sound/core/pcm_compat.c 102 */;
	struct snd_pcm_sw_params32 __user *cocci_id/* sound/core/pcm_compat.c 100 */;
}
