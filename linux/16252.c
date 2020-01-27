cocci_test_suite() {
	enum v4l2_mpeg_video_bitrate_mode cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 993 */;
	u32 cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 992 */;
	struct allegro_buffer {
		void *vaddr;
		dma_addr_t paddr;
		size_t size;
		struct list_head head;
	} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 96 */;
	u16 cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 955 */;
	u8 cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 946 */;
	enum v4l2_mpeg_video_h264_profile cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 946 */;
	s8 cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 937 */;
	enum v4l2_colorspace cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 920 */;
	struct mcu_msg_init_request cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 890 */;
	struct mcu_msg_header *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 825 */;
	struct allegro_mbox *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 753 */;
	struct allegro_buffer *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 726 */;
	size_t cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 726 */;
	struct allegro_dev *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 725 */;
	int cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 725 */;
	unsigned int cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 558 */;
	union mcu_msg_response {
		struct mcu_msg_header header;
		struct mcu_msg_init_response init;
		struct mcu_msg_create_channel_response create_channel;
		struct mcu_msg_destroy_channel_response destroy_channel;
		struct mcu_msg_encode_frame_response encode_frame;
	} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 524 */;
	struct mcu_msg_encode_frame_response {
		struct mcu_msg_header header;
		u32 channel_id;
		u64 stream_id;
		u64 user_param;
		u64 src_handle;
		u16 skip;
		u16 is_ref;
		u32 initial_removal_delay;
		u32 dpb_output_delay;
		u32 size;
		u32 frame_tag_size;
		s32 stuffing;
		s32 filler;
		u16 num_column;
		u16 num_row;
		u16 qp;
		u8 num_ref_idx_l0;
		u8 num_ref_idx_l1;
		u32 partition_table_offset;
		s32 partition_table_size;
		u32 sum_complex;
		s32 tile_width[4];
		s32 tile_height[22];
		u32 error_code;
		u32 slice_type;
#define AL_ENC_SLICE_TYPE_B 0
#define AL_ENC_SLICE_TYPE_P 1
#define AL_ENC_SLICE_TYPE_I 2
		u32 pic_struct;
		u8 is_idr;
		u8 is_first_slice;
		u8 is_last_slice;
		u8 reserved;
		u16 pps_qp;
		u16 reserved1;
		u32 reserved2;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 483 */;
	struct mcu_msg_encode_frame {
		struct mcu_msg_header header;
		u32 channel_id;
		u32 reserved;
		u32 encoding_options;
#define AL_OPT_USE_QP_TABLE BIT(0)
#define AL_OPT_FORCE_LOAD BIT(1)
#define AL_OPT_USE_L2 BIT(2)
#define AL_OPT_DISABLE_INTRA BIT(3)
#define AL_OPT_DEPENDENT_SLICES BIT(4)
							s16 pps_qp;
		u16 padding;
		u64 user_param;
		u64 src_handle;
		u32 request_options;
#define AL_OPT_SCENE_CHANGE BIT(0)
#define AL_OPT_RESTART_GOP BIT(1)
#define AL_OPT_USE_LONG_TERM BIT(2)
#define AL_OPT_UPDATE_PARAMS BIT(3)
						u32 src_y;
		u32 src_uv;
		u32 stride;
		u32 ep2;
		u64 ep2_v;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 450 */;
	struct mcu_msg_put_stream_buffer {
		struct mcu_msg_header header;
		u32 channel_id;
		u32 dma_addr;
		u32 mcu_addr;
		u32 size;
		u32 offset;
		u64 stream_id;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 440 */;
	struct mcu_msg_push_buffers_internal {
		struct mcu_msg_header header;
		u32 channel_id;
		struct mcu_msg_push_buffers_internal_buffer buffer[0];
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 434 */;
	struct mcu_msg_push_buffers_internal_buffer {
		u32 dma_addr;
		u32 mcu_addr;
		u32 size;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 428 */;
	struct mcu_msg_destroy_channel_response {
		struct mcu_msg_header header;
		u32 channel_id;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 423 */;
	struct mcu_msg_destroy_channel {
		struct mcu_msg_header header;
		u32 channel_id;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 418 */;
	struct mcu_msg_create_channel_response {
		struct mcu_msg_header header;
		u32 channel_id;
		u32 user_id;
		u32 options;
		u32 num_core;
		u32 pps_param;
		u32 int_buffers_count;
		u32 int_buffers_size;
		u32 rec_buffers_count;
		u32 rec_buffers_size;
		u32 reserved;
		u32 error_code;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 403 */;
	struct mcu_msg_create_channel {
		struct mcu_msg_header header;
		u32 user_id;
		u16 width;
		u16 height;
		u32 format;
		u32 colorspace;
		u32 src_mode;
		u8 profile;
		u16 constraint_set_flags;
		s8 codec;
		u16 level;
		u16 tier;
		u32 sps_param;
		u32 pps_param;
		u32 enc_option;
#define AL_OPT_WPP BIT(0)
#define AL_OPT_TILE BIT(1)
#define AL_OPT_LF BIT(2)
#define AL_OPT_LF_X_SLICE BIT(3)
#define AL_OPT_LF_X_TILE BIT(4)
#define AL_OPT_SCL_LST BIT(5)
#define AL_OPT_CONST_INTRA_PRED BIT(6)
#define AL_OPT_QP_TAB_RELATIVE BIT(7)
#define AL_OPT_FIX_PREDICTOR BIT(8)
#define AL_OPT_CUSTOM_LDA BIT(9)
#define AL_OPT_ENABLE_AUTO_QP BIT(10)
#define AL_OPT_ADAPT_AUTO_QP BIT(11)
#define AL_OPT_TRANSFO_SKIP BIT(13)
#define AL_OPT_FORCE_REC BIT(15)
#define AL_OPT_FORCE_MV_OUT BIT(16)
#define AL_OPT_FORCE_MV_CLIP BIT(17)
#define AL_OPT_LOWLAT_SYNC BIT(18)
#define AL_OPT_LOWLAT_INT BIT(19)
#define AL_OPT_RDO_COST_MODE BIT(20)
																					s8 beta_offset;
		s8 tc_offset;
		u16 reserved10;
		u32 unknown11;
		u32 unknown12;
		u16 num_slices;
		u16 prefetch_auto;
		u32 prefetch_mem_offset;
		u32 prefetch_mem_size;
		u16 clip_hrz_range;
		u16 clip_vrt_range;
		u16 me_range[4];
		u8 max_cu_size;
		u8 min_cu_size;
		u8 max_tu_size;
		u8 min_tu_size;
		u8 max_transfo_depth_inter;
		u8 max_transfo_depth_intra;
		u16 reserved20;
		u32 entropy_mode;
		u32 wp_mode;
		u32 rate_control_mode;
		u32 initial_rem_delay;
		u32 cpb_size;
		u16 framerate;
		u16 clk_ratio;
		u32 target_bitrate;
		u32 max_bitrate;
		u16 initial_qp;
		u16 min_qp;
		u16 max_qp;
		s16 ip_delta;
		s16 pb_delta;
		u16 golden_ref;
		u16 golden_delta;
		u16 golden_ref_frequency;
		u32 rate_control_option;
		u32 gop_ctrl_mode;
		u32 freq_ird;
		u32 freq_lt;
		u32 gdr_mode;
		u32 gop_length;
		u32 unknown39;
		u32 subframe_latency;
		u32 lda_control_mode;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 314 */;
	struct mcu_msg_init_response {
		struct mcu_msg_header header;
		u32 reserved0;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 309 */;
	struct mcu_msg_init_request {
		struct mcu_msg_header header;
		u32 reserved0;
		u32 suballoc_dma;
		u32 suballoc_size;
		s32 l2_cache[3];
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 301 */;
	struct platform_driver cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2999 */;
	const struct of_device_id cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2992 */[];
	struct mcu_msg_header {
		u16 length;
		u16 type;
	}__attribute__((__packed__)) cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 296 */;
	void __iomem *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2900 */;
	struct resource *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2897 */;
	struct platform_device *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2894 */;
	const char *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2885 */;
	const struct fw_info *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2813 */;
	const struct firmware *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2807 */;
	const struct v4l2_m2m_ops cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2731 */;
	char cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 273 */[9];
	void *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2707 */;
	const struct v4l2_file_operations cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2681 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2650 */;
	const struct v4l2_event_subscription *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2640 */;
	struct v4l2_fh *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2626 */;
	enum v4l2_buf_type cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2624 */;
	enum mcu_msg_type{MCU_MSG_TYPE_INIT=0x0000, MCU_MSG_TYPE_CREATE_CHANNEL=0x0005, MCU_MSG_TYPE_DESTROY_CHANNEL=0x0006, MCU_MSG_TYPE_ENCODE_FRAME=0x0007, MCU_MSG_TYPE_PUT_STREAM_BUFFER=0x0012, MCU_MSG_TYPE_PUSH_BUFFER_INTERMEDIATE=0x000e, MCU_MSG_TYPE_PUSH_BUFFER_REFERENCE=0x000f,} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 261 */;
	struct v4l2_frmsizeenum *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2599 */;
	struct v4l2_encoder_cmd *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2574 */;
	struct file *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2573 */;
	const struct fw_info cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 249 */[];
	struct v4l2_format *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2398 */;
	struct fw_info {
		unsigned int id;
		unsigned int id_codec;
		char *version;
		unsigned int mailbox_cmd;
		unsigned int mailbox_status;
		size_t mailbox_size;
		size_t suballocator_size;
	} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 239 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2380 */;
	struct v4l2_capability *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2366 */;
	enum allegro_state cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 233 */;
	u64 cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2272 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2271 */;
	struct video_device *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2268 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2262 */;
	struct allegro_channel cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2231 */;
	struct v4l2_ctrl *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2228 */;
	struct v4l2_m2m_buffer cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2206 */;
	struct vb2_queue *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2193 */;
	const struct vb2_ops cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2182 */;
	void cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2128 */;
	struct allegro_channel *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2107 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2106 */;
	struct vb2_buffer *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2104 */;
	struct device *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2075 */[];
	unsigned int cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2074 */[];
	unsigned int *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 2073 */;
	enum v4l2_mpeg_video_h264_level cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1984 */;
	unsigned long cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1983 */;
	dma_addr_t cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1816 */;
	const u8 *const cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1800 */;
	irqreturn_t cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1776 */;
	union mcu_msg_response *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1731 */;
	struct allegro_channel {
		struct allegro_dev *dev;
		struct v4l2_fh fh;
		struct v4l2_ctrl_handler ctrl_handler;
		unsigned int width;
		unsigned int height;
		unsigned int stride;
		enum v4l2_colorspace colorspace;
		enum v4l2_ycbcr_encoding ycbcr_enc;
		enum v4l2_quantization quantization;
		enum v4l2_xfer_func xfer_func;
		u32 pixelformat;
		unsigned int sizeimage_raw;
		unsigned int osequence;
		u32 codec;
		enum v4l2_mpeg_video_h264_profile profile;
		enum v4l2_mpeg_video_h264_level level;
		unsigned int sizeimage_encoded;
		unsigned int csequence;
		enum v4l2_mpeg_video_bitrate_mode bitrate_mode;
		unsigned int bitrate;
		unsigned int bitrate_peak;
		unsigned int cpb_size;
		unsigned int gop_size;
		struct v4l2_ctrl *mpeg_video_h264_profile;
		struct v4l2_ctrl *mpeg_video_h264_level;
		struct v4l2_ctrl *mpeg_video_bitrate_mode;
		struct v4l2_ctrl *mpeg_video_bitrate;
		struct v4l2_ctrl *mpeg_video_bitrate_peak;
		struct v4l2_ctrl *mpeg_video_cpb_size;
		struct v4l2_ctrl *mpeg_video_gop_size;
		int user_id;
		int mcu_channel_id;
		struct list_head buffers_reference;
		struct list_head buffers_intermediate;
		struct list_head list;
		struct completion completion;
		unsigned int error;
		enum allegro_state state;
	} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 171 */;
	struct mcu_msg_destroy_channel_response *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1688 */;
	enum allegro_state{ALLEGRO_STATE_ENCODING, ALLEGRO_STATE_DRAIN, ALLEGRO_STATE_WAIT_FOR_BUFFER, ALLEGRO_STATE_STOPPED,} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 162 */;
	struct mcu_msg_create_channel_response *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1619 */;
	struct mcu_msg_init_response *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1610 */;
	ssize_t cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1481 */;
	char *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1480 */;
	struct {
		u32 offset;
		u32 size;
	} *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1475 */;
	struct mcu_msg_encode_frame_response *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1470 */;
	const struct v4l2_event cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1455 */;
	enum vb2_buffer_state cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1453 */;
	struct regmap_config cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 144 */;
	bool cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1431 */;
	struct nal_h264_pps *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1398 */;
	struct nal_h264_sps *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1310 */;
	enum mcu_msg_type cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1220 */;
	struct list_head *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1173 */;
	struct mcu_msg_push_buffers_internal_buffer *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1169 */;
	struct mcu_msg_push_buffers_internal *cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1168 */;
	struct allegro_dev {
		struct v4l2_device v4l2_dev;
		struct video_device video_dev;
		struct v4l2_m2m_dev *m2m_dev;
		struct platform_device *plat_dev;
		struct mutex lock;
		struct regmap *regmap;
		struct regmap *sram;
		struct allegro_buffer firmware;
		struct allegro_buffer suballocator;
		struct completion init_complete;
		struct allegro_mbox mbox_command;
		struct allegro_mbox mbox_status;
		unsigned long channel_user_ids;
		struct list_head channels;
	} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 114 */;
	struct mcu_msg_encode_frame cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1126 */;
	struct mcu_msg_put_stream_buffer cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1102 */;
	struct mcu_msg_destroy_channel cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1082 */;
	struct allegro_mbox {
		unsigned int head;
		unsigned int tail;
		unsigned int data;
		size_t size;
		struct mutex lock;
	} cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 105 */;
	struct mcu_msg_create_channel cocci_id/* drivers/staging/media/allegro-dvt/allegro-core.c 1007 */;
}
