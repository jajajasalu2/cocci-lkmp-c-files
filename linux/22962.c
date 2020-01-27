cocci_test_suite() {
	void __user *cocci_id/* sound/core/seq/seq_compat.c 77 */;
	struct file *cocci_id/* sound/core/seq/seq_compat.c 74 */;
	unsigned long cocci_id/* sound/core/seq/seq_compat.c 74 */;
	long cocci_id/* sound/core/seq/seq_compat.c 74 */;
	enum{SNDRV_SEQ_IOCTL_CREATE_PORT32=_IOWR('S', 0x20,
						 struct snd_seq_port_info32), SNDRV_SEQ_IOCTL_DELETE_PORT32=_IOW('S',
														 0x21,
														 struct snd_seq_port_info32), SNDRV_SEQ_IOCTL_GET_PORT_INFO32=_IOWR('S',
																						    0x22,
																						    struct snd_seq_port_info32), SNDRV_SEQ_IOCTL_SET_PORT_INFO32=_IOW('S',
																														      0x23,
																														      struct snd_seq_port_info32), SNDRV_SEQ_IOCTL_QUERY_NEXT_PORT32=_IOWR('S',
																																							   0x52,
																																							   struct snd_seq_port_info32),} cocci_id/* sound/core/seq/seq_compat.c 66 */;
	struct snd_seq_port_info *cocci_id/* sound/core/seq/seq_compat.c 35 */;
	struct snd_seq_port_info32 __user *cocci_id/* sound/core/seq/seq_compat.c 32 */;
	struct snd_seq_client *cocci_id/* sound/core/seq/seq_compat.c 31 */;
	unsigned int cocci_id/* sound/core/seq/seq_compat.c 31 */;
	int cocci_id/* sound/core/seq/seq_compat.c 31 */;
	struct snd_seq_port_info32 {
		struct snd_seq_addr addr;
		char name[64];
		u32 capability;
		u32 type;
		s32 midi_channels;
		s32 midi_voices;
		s32 synth_voices;
		s32 read_use;
		s32 write_use;
		u32 kernel;
		u32 flags;
		unsigned char time_queue;
		char reserved[59];
	} cocci_id/* sound/core/seq/seq_compat.c 12 */;
}
