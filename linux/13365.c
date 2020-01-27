cocci_test_suite() {
	struct v4l2_ext_control *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 970 */;
	struct v4l2_ext_control __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 912 */;
	struct v4l2_ext_control32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 911 */;
	struct v4l2_ext_controls __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 907 */;
	struct v4l2_ext_control cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 902 */;
	struct v4l2_ext_controls32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 892 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 880 */;
	const struct v4l2_ioctl_ops *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 869 */;
	struct v4l2_query_ext_ctrl cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 868 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 867 */;
	struct v4l2_fh *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 866 */;
	struct video_device *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 865 */;
	bool cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 863 */;
	struct file *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 863 */;
	struct v4l2_ext_control32 {
		__u32 id;
		__u32 size;
		__u32 reserved2[1];
		union {
			__s32 value;
			__s64 value64;
			compat_caddr_t string;
		};
	}__attribute__((packed)) cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 851 */;
	struct v4l2_ext_controls32 {
		__u32 which;
		__u32 count;
		__u32 error_idx;
		__s32 request_fd;
		__u32 reserved[1];
		compat_caddr_t controls;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 842 */;
	struct v4l2_input32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 827 */;
	struct v4l2_input __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 826 */;
	struct v4l2_input32 {
		__u32 index;
		__u8 name[32];
		__u32 type;
		__u32 audioset;
		__u32 tuner;
		compat_u64 std;
		__u32 status;
		__u32 capabilities;
		__u32 reserved[3];
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 810 */;
	struct v4l2_framebuffer32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 781 */;
	struct v4l2_framebuffer __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 780 */;
	typeof(*__x)__force *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 77 */;
	struct v4l2_framebuffer32 {
		__u32 capability;
		__u32 flags;
		compat_caddr_t base;
		struct {
			__u32 width;
			__u32 height;
			__u32 pixelformat;
			__u32 field;
			__u32 bytesperline;
			__u32 sizeimage;
			__u32 colorspace;
			__u32 priv;
		} fmt;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 764 */;
	struct v4l2_plane *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 691 */;
	compat_ulong_t cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 666 */;
	typeof(*__ptr)__user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 60 */;
	compat_caddr_t cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 594 */;
	struct v4l2_plane __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 593 */;
	struct v4l2_plane32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 592 */;
	enum v4l2_memory cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 591 */;
	s32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 590 */;
	struct v4l2_buffer __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 584 */;
	struct v4l2_plane cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 577 */;
	struct v4l2_buffer32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 559 */;
	__u32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 500 */;
	struct v4l2_buffer32 {
		__u32 index;
		__u32 type;
		__u32 bytesused;
		__u32 flags;
		__u32 field;
		struct compat_timeval timestamp;
		struct v4l2_timecode timecode;
		__u32 sequence;
		__u32 memory;
		union {
			__u32 offset;
			compat_long_t userptr;
			compat_caddr_t planes;
			__s32 fd;
		} m;
		__u32 length;
		__u32 reserved2;
		__s32 request_fd;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 471 */;
	struct v4l2_plane32 {
		__u32 bytesused;
		__u32 length;
		union {
			__u32 mem_offset;
			compat_long_t userptr;
			__s32 fd;
		} m;
		__u32 data_offset;
		__u32 reserved[11];
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 459 */;
	struct v4l2_standard32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 435 */;
	struct v4l2_standard __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 434 */;
	struct v4l2_standard32 {
		__u32 index;
		compat_u64 id;
		__u8 name[24];
		struct v4l2_fract frameperiod;
		__u32 framelines;
		__u32 reserved[4];
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 425 */;
	typeof(*from) cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 40 */;
	struct v4l2_create_buffers32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 358 */;
	struct v4l2_create_buffers __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 352 */;
	struct v4l2_create_buffers32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 344 */;
	void __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 294 */;
	struct v4l2_format __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 292 */;
	struct v4l2_clip cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 276 */;
	u32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 262 */;
	u32 *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 260 */;
	struct v4l2_format32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 260 */;
	int cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 260 */;
	struct v4l2_create_buffers32 {
		__u32 index;
		__u32 count;
		__u32 memory;
		struct v4l2_format32 format;
		__u32 capabilities;
		__u32 reserved[7];
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 251 */;
	struct v4l2_format32 {
		__u32 type;
		union {
			struct v4l2_pix_format pix;
			struct v4l2_pix_format_mplane pix_mp;
			struct v4l2_window32 win;
			struct v4l2_vbi_format vbi;
			struct v4l2_sliced_vbi_format sliced;
			struct v4l2_sdr_format sdr;
			struct v4l2_meta_format meta;
			__u8 raw_data[200];
		} fmt;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 227 */;
	struct v4l2_clip __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 158 */;
	struct v4l2_clip32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 157 */;
	struct v4l2_window32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 154 */;
	struct v4l2_window __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 153 */;
	struct v4l2_window32 {
		struct v4l2_rect w;
		__u32 field;
		__u32 chromakey;
		compat_caddr_t clips;
		__u32 clipcount;
		compat_caddr_t bitmap;
		__u8 global_alpha;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 143 */;
	struct v4l2_clip32 {
		struct v4l2_rect c;
		compat_caddr_t next;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 138 */;
	struct v4l2_event cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1338 */;
	struct v4l2_ext_controls cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1328 */;
	struct v4l2_input cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1317 */;
	struct v4l2_standard cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1309 */;
	struct v4l2_framebuffer cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1295 */;
	struct v4l2_buffer cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1284 */;
	struct v4l2_create_buffers cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1268 */;
	struct v4l2_format cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1255 */;
	struct v4l2_edid cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1244 */;
	compat_uint_t __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1231 */;
	unsigned int __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1230 */;
	unsigned long cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1178 */;
	long cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1178 */;
	void __user **cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1151 */;
	unsigned int cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1150 */;
	struct v4l2_event32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1123 */;
	struct v4l2_ext_controls32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1120 */;
	struct v4l2_edid32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1117 */;
	struct v4l2_input32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1116 */;
	struct v4l2_standard32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1115 */;
	struct v4l2_framebuffer32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1111 */;
	struct v4l2_buffer32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1110 */;
	struct v4l2_format32 cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1108 */;
	void *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1087 */;
	compat_uptr_t cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1071 */;
	struct v4l2_edid32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1069 */;
	struct v4l2_edid __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1068 */;
	struct v4l2_edid32 {
		__u32 pad;
		__u32 start_block;
		__u32 blocks;
		__u32 reserved[5];
		compat_caddr_t edid;
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1060 */;
	struct v4l2_event32 __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1045 */;
	struct v4l2_event __user *cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1044 */;
	struct v4l2_event32 {
		__u32 type;
		union {
			compat_s64 value64;
			__u8 data[64];
		} u;
		__u32 pending;
		__u32 sequence;
		struct compat_timespec timestamp;
		__u32 id;
		__u32 reserved[8];
	} cocci_id/* drivers/media/v4l2-core/v4l2-compat-ioctl32.c 1031 */;
}
