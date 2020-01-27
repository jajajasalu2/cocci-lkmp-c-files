cocci_test_suite() {
	drm_ioctl_compat_t *cocci_id/* drivers/gpu/drm/drm_ioc32.c 974 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/drm_ioc32.c 973 */;
	long cocci_id/* drivers/gpu/drm/drm_ioc32.c 970 */;
	struct drm_version cocci_id/* drivers/gpu/drm/drm_ioc32.c 96 */;
	drm_version32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 95 */;
	struct {
		drm_ioctl_compat_t *fn;
		char *name;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 909 */[];
	drm_mode_fb_cmd232_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 891 */;
	struct drm_mode_fb_cmd2 cocci_id/* drivers/gpu/drm/drm_ioc32.c 887 */;
	struct drm_mode_fb_cmd232 __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 886 */;
	struct drm_mode_fb_cmd232 {
		u32 fb_id;
		u32 width;
		u32 height;
		u32 pixel_format;
		u32 flags;
		u32 handles[4];
		u32 pitches[4];
		u32 offsets[4];
		u64 modifier[4];
	}__attribute__((packed)) cocci_id/* drivers/gpu/drm/drm_ioc32.c 871 */;
	union drm_wait_vblank cocci_id/* drivers/gpu/drm/drm_ioc32.c 847 */;
	drm_wait_vblank32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 846 */;
	drm_wait_vblank32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 845 */;
	union drm_wait_vblank32 {
		struct drm_wait_vblank_request32 request;
		struct drm_wait_vblank_reply32 reply;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 837 */;
	struct drm_wait_vblank_reply32 {
		enum drm_vblank_seq_type type;
		unsigned int sequence;
		s32 tval_sec;
		s32 tval_usec;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 830 */;
	struct drm_wait_vblank_request32 {
		enum drm_vblank_seq_type type;
		unsigned int sequence;
		u32 signal;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 824 */;
	drm_update_draw32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 815 */;
	struct drm_update_draw32 {
		drm_drawable_t handle;
		unsigned int type;
		unsigned int num;
		u64 data;
	}__attribute__((packed)) cocci_id/* drivers/gpu/drm/drm_ioc32.c 804 */;
	struct drm_version_32 {
		int version_major;
		int version_minor;
		int version_patchlevel;
		u32 name_len;
		u32 name;
		u32 date_len;
		u32 date;
		u32 desc_len;
		u32 desc;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 80 */;
	struct drm_scatter_gather cocci_id/* drivers/gpu/drm/drm_ioc32.c 771 */;
	drm_scatter_gather32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 770 */;
	struct drm_scatter_gather32 {
		u32 size;
		u32 handle;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 762 */;
	struct drm_agp_binding cocci_id/* drivers/gpu/drm/drm_ioc32.c 736 */;
	drm_agp_binding32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 735 */;
	drm_agp_binding32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 734 */;
	struct drm_agp_binding32 {
		u32 handle;
		u32 offset;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 726 */;
	struct drm_agp_buffer cocci_id/* drivers/gpu/drm/drm_ioc32.c 689 */;
	drm_agp_buffer32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 688 */;
	drm_agp_buffer32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 687 */;
	struct drm_agp_buffer32 {
		u32 size;
		u32 handle;
		u32 type;
		u32 physical;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 677 */;
	struct drm_agp_info cocci_id/* drivers/gpu/drm/drm_ioc32.c 655 */;
	drm_agp_info32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 654 */;
	drm_agp_info32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 653 */;
	struct drm_agp_info32 {
		int agp_version_major;
		int agp_version_minor;
		u32 mode;
		u32 aperture_base;
		u32 aperture_size;
		u32 memory_allowed;
		u32 memory_used;
		unsigned short id_vendor;
		unsigned short id_device;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 636 */;
	struct drm_agp_mode cocci_id/* drivers/gpu/drm/drm_ioc32.c 627 */;
	drm_agp_mode32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 626 */;
	struct drm_agp_mode32 {
		u32 mode;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 619 */;
	struct drm_dma cocci_id/* drivers/gpu/drm/drm_ioc32.c 592 */;
	drm_dma32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 591 */;
	drm_dma32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 590 */;
	struct drm_dma32 {
		int context;
		int send_count;
		u32 send_indices;
		u32 send_sizes;
		enum drm_dma_flags flags;
		int request_count;
		int request_size;
		u32 request_indices;
		u32 request_sizes;
		int granted_count;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 574 */;
	struct drm_ctx_res cocci_id/* drivers/gpu/drm/drm_ioc32.c 555 */;
	drm_ctx_res32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 554 */;
	drm_ctx_res32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 553 */;
	struct drm_ctx_res32 {
		int count;
		u32 contexts;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 545 */;
	drm_ctx_priv_map32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 527 */;
	drm_ctx_priv_map32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 526 */;
	struct drm_ctx_priv_map cocci_id/* drivers/gpu/drm/drm_ioc32.c 525 */;
	struct drm_ctx_priv_map32 {
		unsigned int ctx_id;
		u32 handle;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 501 */;
	drm_buf_free32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 491 */;
	struct drm_buf_free cocci_id/* drivers/gpu/drm/drm_ioc32.c 490 */;
	drm_buf_free32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 489 */;
	struct drm_buf_free32 {
		int count;
		u32 list;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 481 */;
	drm_buf_map32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 462 */;
	drm_buf_map32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 461 */;
	drm_buf_map32_t *cocci_id/* drivers/gpu/drm/drm_ioc32.c 449 */;
	drm_buf_pub32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 435 */;
	drm_buf_pub32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 434 */;
	struct drm_buf *cocci_id/* drivers/gpu/drm/drm_ioc32.c 431 */;
	struct drm_buf_map32 {
		int count;
		u32 virtual;
		u32 list;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 424 */;
	struct drm_buf_pub32 {
		int idx;
		int total;
		int used;
		u32 address;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 417 */;
	drm_buf_info32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 398 */;
	drm_buf_info32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 397 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/drm_ioc32.c 387 */;
	drm_buf_info32_t *cocci_id/* drivers/gpu/drm/drm_ioc32.c 375 */;
	struct drm_buf_entry *cocci_id/* drivers/gpu/drm/drm_ioc32.c 373 */;
	void *cocci_id/* drivers/gpu/drm/drm_ioc32.c 373 */;
	struct drm_buf_info32 {
		int count;
		u32 list;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 368 */;
	struct drm_buf_desc cocci_id/* drivers/gpu/drm/drm_ioc32.c 324 */;
	drm_buf_desc32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 323 */;
	drm_buf_desc32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 322 */;
	void __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 322 */;
	unsigned long cocci_id/* drivers/gpu/drm/drm_ioc32.c 320 */;
	struct file *cocci_id/* drivers/gpu/drm/drm_ioc32.c 319 */;
	unsigned int cocci_id/* drivers/gpu/drm/drm_ioc32.c 319 */;
	int cocci_id/* drivers/gpu/drm/drm_ioc32.c 319 */;
	struct drm_buf_desc32 {
		int count;
		int size;
		int low_mark;
		int high_mark;
		int flags;
		u32 agp_start;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 310 */;
	drm_stats32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 304 */;
	drm_stats32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 297 */;
	struct drm_stats32 {
		u32 count;
		struct {
			u32 value;
			enum drm_stat_type type;
		} data[15];
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 286 */;
	struct drm_client cocci_id/* drivers/gpu/drm/drm_ioc32.c 262 */;
	drm_client32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 261 */;
	drm_client32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 260 */;
	struct drm_client32 {
		int idx;
		int auth;
		u32 pid;
		u32 uid;
		u32 magic;
		u32 iocs;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 248 */;
	u32 cocci_id/* drivers/gpu/drm/drm_ioc32.c 239 */;
	struct drm_map cocci_id/* drivers/gpu/drm/drm_ioc32.c 205 */;
	drm_map32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 204 */;
	drm_map32_t __user *cocci_id/* drivers/gpu/drm/drm_ioc32.c 203 */;
	struct drm_map32 {
		u32 offset;
		u32 size;
		enum drm_map_type type;
		enum drm_map_flags flags;
		u32 handle;
		int mtrr;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 163 */;
	struct drm_unique cocci_id/* drivers/gpu/drm/drm_ioc32.c 135 */;
	drm_unique32_t cocci_id/* drivers/gpu/drm/drm_ioc32.c 134 */;
	struct drm_unique32 {
		u32 unique_len;
		u32 unique;
	} cocci_id/* drivers/gpu/drm/drm_ioc32.c 126 */;
}
