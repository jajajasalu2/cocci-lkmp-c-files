cocci_test_suite() {
	resource_size_t cocci_id/* drivers/video/fbdev/hyperv_fb.c 951 */;
	void __iomem *cocci_id/* drivers/video/fbdev/hyperv_fb.c 949 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/hyperv_fb.c 948 */;
	struct hv_device *cocci_id/* drivers/video/fbdev/hyperv_fb.c 945 */;
	char *cocci_id/* drivers/video/fbdev/hyperv_fb.c 914 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/hyperv_fb.c 898 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/hyperv_fb.c 886 */;
	struct hvfb_par *cocci_id/* drivers/video/fbdev/hyperv_fb.c 875 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/hyperv_fb.c 873 */;
	void cocci_id/* drivers/video/fbdev/hyperv_fb.c 872 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/hyperv_fb.c 860 */;
	enum synthvid_msg_type{SYNTHVID_ERROR=0, SYNTHVID_VERSION_REQUEST=1, SYNTHVID_VERSION_RESPONSE=2, SYNTHVID_VRAM_LOCATION=3, SYNTHVID_VRAM_LOCATION_ACK=4, SYNTHVID_SITUATION_UPDATE=5, SYNTHVID_SITUATION_UPDATE_ACK=6, SYNTHVID_POINTER_POSITION=7, SYNTHVID_POINTER_SHAPE=8, SYNTHVID_FEATURE_CHANGE=9, SYNTHVID_DIRT=10, SYNTHVID_RESOLUTION_REQUEST=13, SYNTHVID_RESOLUTION_RESPONSE=14, SYNTHVID_MAX=15,} cocci_id/* drivers/video/fbdev/hyperv_fb.c 86 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/hyperv_fb.c 854 */;
	int cocci_id/* drivers/video/fbdev/hyperv_fb.c 854 */;
	u32 *cocci_id/* drivers/video/fbdev/hyperv_fb.c 841 */;
	unsigned cocci_id/* drivers/video/fbdev/hyperv_fb.c 838 */;
	u32 cocci_id/* drivers/video/fbdev/hyperv_fb.c 833 */;
	struct fb_bitfield *cocci_id/* drivers/video/fbdev/hyperv_fb.c 833 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/hyperv_fb.c 812 */;
	struct hvfb_par cocci_id/* drivers/video/fbdev/hyperv_fb.c 801 */;
	struct pipe_msg_hdr {
		u32 type;
		u32 size;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 80 */;
	void *cocci_id/* drivers/video/fbdev/hyperv_fb.c 796 */;
	struct notifier_block *cocci_id/* drivers/video/fbdev/hyperv_fb.c 795 */;
	enum pipe_msg_type{PIPE_MSG_INVALID, PIPE_MSG_DATA, PIPE_MSG_MAX,} cocci_id/* drivers/video/fbdev/hyperv_fb.c 74 */;
	struct work_struct *cocci_id/* drivers/video/fbdev/hyperv_fb.c 725 */;
	struct synthvid_vram_location cocci_id/* drivers/video/fbdev/hyperv_fb.c 694 */;
	unsigned int cocci_id/* drivers/video/fbdev/hyperv_fb.c 603 */;
	struct synthvid_supported_resolution_req cocci_id/* drivers/video/fbdev/hyperv_fb.c 576 */;
	struct synthvid_msg_hdr cocci_id/* drivers/video/fbdev/hyperv_fb.c 575 */;
	struct synthvid_msg cocci_id/* drivers/video/fbdev/hyperv_fb.c 573 */;
	u8 cocci_id/* drivers/video/fbdev/hyperv_fb.c 570 */;
	struct synthvid_msg *cocci_id/* drivers/video/fbdev/hyperv_fb.c 567 */;
	struct synthvid_version_req cocci_id/* drivers/video/fbdev/hyperv_fb.c 539 */;
	bool cocci_id/* drivers/video/fbdev/hyperv_fb.c 517 */;
	u64 cocci_id/* drivers/video/fbdev/hyperv_fb.c 497 */;
	struct fb_deferred_io cocci_id/* drivers/video/fbdev/hyperv_fb.c 445 */;
	struct page *cocci_id/* drivers/video/fbdev/hyperv_fb.c 415 */;
	struct list_head *cocci_id/* drivers/video/fbdev/hyperv_fb.c 412 */;
	unsigned long cocci_id/* drivers/video/fbdev/hyperv_fb.c 397 */;
	struct synthvid_dirt cocci_id/* drivers/video/fbdev/hyperv_fb.c 381 */;
	struct synthvid_pointer_shape cocci_id/* drivers/video/fbdev/hyperv_fb.c 350 */;
	struct synthvid_pointer_position cocci_id/* drivers/video/fbdev/hyperv_fb.c 340 */;
	struct synthvid_situation_update cocci_id/* drivers/video/fbdev/hyperv_fb.c 317 */;
	struct pipe_msg_hdr cocci_id/* drivers/video/fbdev/hyperv_fb.c 293 */;
	atomic64_t cocci_id/* drivers/video/fbdev/hyperv_fb.c 286 */;
	uint cocci_id/* drivers/video/fbdev/hyperv_fb.c 280 */;
	struct hvfb_par {
		struct fb_info *info;
		struct resource *mem;
		bool fb_ready;
		struct completion wait;
		u32 synthvid_version;
		struct delayed_work dwork;
		bool update;
		bool update_saved;
		u32 pseudo_palette[16];
		u8 init_buf[MAX_VMBUS_PKT_SIZE];
		u8 recv_buf[MAX_VMBUS_PKT_SIZE];
		bool synchronous_fb;
		struct notifier_block hvfb_panic_nb;
		unsigned char *dio_vp;
		unsigned char *mmio_vp;
		unsigned long mmio_pp;
		int x1,y1,x2,y2;
		bool delayed_refresh;
		spinlock_t delayed_refresh_lock;
	} cocci_id/* drivers/video/fbdev/hyperv_fb.c 243 */;
	struct synthvid_msg {
		struct pipe_msg_hdr pipe_hdr;
		struct synthvid_msg_hdr vid_hdr;
		union {
			struct synthvid_version_req ver_req;
			struct synthvid_version_resp ver_resp;
			struct synthvid_vram_location vram;
			struct synthvid_vram_location_ack vram_ack;
			struct synthvid_situation_update situ;
			struct synthvid_situation_update_ack situ_ack;
			struct synthvid_pointer_position ptr_pos;
			struct synthvid_pointer_shape ptr_shape;
			struct synthvid_feature_change feature_chg;
			struct synthvid_dirt dirt;
			struct synthvid_supported_resolution_req resolution_req;
			struct synthvid_supported_resolution_resp resolution_resp;
		};
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 211 */;
	struct synthvid_dirt {
		u8 video_output;
		u8 dirt_count;
		struct rect rect[1];
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 205 */;
	struct rect {
		s32 x1,y1;
		s32 x2,y2;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 200 */;
	struct synthvid_feature_change {
		u8 is_dirt_needed;
		u8 is_ptr_pos_needed;
		u8 is_ptr_shape_needed;
		u8 is_situ_needed;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 193 */;
	struct synthvid_pointer_shape {
		u8 part_idx;
		u8 is_argb;
		u32 width;
		u32 height;
		u32 hot_x;
		u32 hot_y;
		u8 data[4];
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 183 */;
	struct synthvid_pointer_position {
		u8 is_visible;
		u8 video_output;
		s32 image_x;
		s32 image_y;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 169 */;
	struct synthvid_situation_update_ack {
		u64 user_ctx;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 165 */;
	struct synthvid_situation_update {
		u64 user_ctx;
		u8 video_output_count;
		struct video_output_situation video_output[1];
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 159 */;
	struct video_output_situation {
		u8 active;
		u32 vram_offset;
		u8 depth_bits;
		u32 width_pixels;
		u32 height_pixels;
		u32 pitch_bytes;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 150 */;
	struct synthvid_vram_location_ack {
		u64 user_ctx;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 146 */;
	struct synthvid_vram_location {
		u64 user_ctx;
		u8 is_vram_gpa_specified;
		u64 vram_gpa;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 140 */;
	struct synthvid_supported_resolution_resp {
		u8 edid_block[SYNTHVID_EDID_BLOCK_SIZE];
		u8 resolution_count;
		u8 default_resolution_index;
		u8 is_standard;
		struct hvd_screen_info supported_resolution[SYNTHVID_MAX_RESOLUTION_COUNT];
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 131 */;
	void __exit cocci_id/* drivers/video/fbdev/hyperv_fb.c 1308 */;
	int __init cocci_id/* drivers/video/fbdev/hyperv_fb.c 1291 */;
	struct pci_driver cocci_id/* drivers/video/fbdev/hyperv_fb.c 1281 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/hyperv_fb.c 1272 */;
	struct synthvid_supported_resolution_req {
		u8 maximum_resolution_count;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 127 */;
	struct hv_driver cocci_id/* drivers/video/fbdev/hyperv_fb.c 1259 */;
	const struct hv_vmbus_device_id cocci_id/* drivers/video/fbdev/hyperv_fb.c 1250 */[];
	const struct pci_device_id cocci_id/* drivers/video/fbdev/hyperv_fb.c 1242 */[];
	struct synthvid_version_resp {
		u32 version;
		u8 is_accepted;
		u8 max_video_outputs;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 121 */;
	struct synthvid_version_req {
		u32 version;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 117 */;
	struct synthvid_msg_hdr {
		u32 type;
		u32 size;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 112 */;
	struct fb_bitfield cocci_id/* drivers/video/fbdev/hyperv_fb.c 1099 */;
	struct hvd_screen_info {
		u16 width;
		u16 height;
	}__packed cocci_id/* drivers/video/fbdev/hyperv_fb.c 107 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/video/fbdev/hyperv_fb.c 1052 */;
	unsigned char *cocci_id/* drivers/video/fbdev/hyperv_fb.c 1013 */;
}
