cocci_test_suite() {
	struct snd_ctl_elem_info32 {
		struct snd_ctl_elem_id id;
		s32 type;
		u32 access;
		u32 count;
		s32 owner;
		union {
			struct {
				s32 min;
				s32 max;
				s32 step;
			} integer;
			struct {
				u64 min;
				u64 max;
				u64 step;
			} integer64;
			struct {
				u32 items;
				u32 item;
				char name[64];
				u64 names_ptr;
				u32 names_length;
			} enumerated;
			unsigned char reserved[128];
		} value;
		unsigned char reserved[64];
	}__attribute__((packed)) cocci_id/* sound/core/control_compat.c 52 */;
	struct snd_kctl_ioctl *cocci_id/* sound/core/control_compat.c 435 */;
	struct file *cocci_id/* sound/core/control_compat.c 432 */;
	unsigned long cocci_id/* sound/core/control_compat.c 432 */;
	long cocci_id/* sound/core/control_compat.c 432 */;
	enum{SNDRV_CTL_IOCTL_ELEM_LIST32=_IOWR('U', 0x10,
					       struct snd_ctl_elem_list32), SNDRV_CTL_IOCTL_ELEM_INFO32=_IOWR('U',
													      0x11,
													      struct snd_ctl_elem_info32), SNDRV_CTL_IOCTL_ELEM_READ32=_IOWR('U',
																					     0x12,
																					     struct snd_ctl_elem_value32), SNDRV_CTL_IOCTL_ELEM_WRITE32=_IOWR('U',
																													      0x13,
																													      struct snd_ctl_elem_value32), SNDRV_CTL_IOCTL_ELEM_ADD32=_IOWR('U',
																																					     0x17,
																																					     struct snd_ctl_elem_info32), SNDRV_CTL_IOCTL_ELEM_REPLACE32=_IOWR('U',
																																													       0x18,
																																													       struct snd_ctl_elem_info32),

#ifdef CONFIG_X86_X32
 SNDRV_CTL_IOCTL_ELEM_READ_X32=_IOWR('U', 0x12, struct snd_ctl_elem_value_x32), SNDRV_CTL_IOCTL_ELEM_WRITE_X32=_IOWR('U',
														     0x13,
														     struct snd_ctl_elem_value_x32),

#endif
} cocci_id/* sound/core/control_compat.c 419 */;
	uintptr_t cocci_id/* sound/core/control_compat.c 408 */;
	u32 cocci_id/* sound/core/control_compat.c 384 */;
	struct snd_ctl_elem_info32 __user *cocci_id/* sound/core/control_compat.c 371 */;
	struct snd_ctl_elem_value_x32 __user *cocci_id/* sound/core/control_compat.c 357 */;
	struct snd_ctl_file *cocci_id/* sound/core/control_compat.c 315 */;
	compat_caddr_t cocci_id/* sound/core/control_compat.c 26 */;
	struct snd_ctl_elem_list __user *cocci_id/* sound/core/control_compat.c 25 */;
	s32 __user *cocci_id/* sound/core/control_compat.c 242 */;
	struct snd_ctl_elem_list32 __user *cocci_id/* sound/core/control_compat.c 23 */;
	unsigned int cocci_id/* sound/core/control_compat.c 227 */;
	struct snd_ctl_elem_value32 __user *cocci_id/* sound/core/control_compat.c 224 */;
	int *cocci_id/* sound/core/control_compat.c 222 */;
	void __user *cocci_id/* sound/core/control_compat.c 220 */;
	struct snd_ctl_elem_value *cocci_id/* sound/core/control_compat.c 219 */;
	struct snd_card *cocci_id/* sound/core/control_compat.c 218 */;
	int cocci_id/* sound/core/control_compat.c 218 */;
	struct snd_aes_iec958 cocci_id/* sound/core/control_compat.c 212 */;
	s64 cocci_id/* sound/core/control_compat.c 206 */;
	struct snd_ctl_elem_info *cocci_id/* sound/core/control_compat.c 177 */;
	struct snd_kcontrol *cocci_id/* sound/core/control_compat.c 176 */;
	struct snd_ctl_elem_id *cocci_id/* sound/core/control_compat.c 173 */;
	struct snd_ctl_elem_value_x32 {
		struct snd_ctl_elem_id id;
		unsigned int indirect;
		union {
			s32 integer[128];
			unsigned char data[512];
			s64 integer64[64];
		} value;
		unsigned char reserved[128];
	} cocci_id/* sound/core/control_compat.c 160 */;
	struct snd_ctl_elem_value32 {
		struct snd_ctl_elem_id id;
		unsigned int indirect;
		union {
			s32 integer[128];
			unsigned char data[512];
#ifndef CONFIG_X86_64
			s64 integer64[64];
#endif
		} value;
		unsigned char reserved[128];
	} cocci_id/* sound/core/control_compat.c 145 */;
	struct snd_ctl_elem_list32 {
		u32 offset;
		u32 space;
		u32 used;
		u32 count;
		u32 pids;
		unsigned char reserved[50];
	} cocci_id/* sound/core/control_compat.c 13 */;
}
