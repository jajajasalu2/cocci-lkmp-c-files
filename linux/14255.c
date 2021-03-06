cocci_test_suite() {
	struct device *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 986 */;
	struct hva_h264_ctx *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 985 */;
	struct hva_ctx *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 983 */;
	int cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 983 */;
	void *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 966 */;
	enum hva_h264_sampling_mode{SAMPLING_MODE_NV12=0, SAMPLING_MODE_UYVY=1, SAMPLING_MODE_RGB3=3, SAMPLING_MODE_XRGB4=4, SAMPLING_MODE_NV21=8, SAMPLING_MODE_VYUY=9, SAMPLING_MODE_BGR3=11, SAMPLING_MODE_XBGR4=12, SAMPLING_MODE_RGBX4=20, SAMPLING_MODE_BGRX4=28,} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 96 */;
	struct hva_h264_task cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 956 */;
	enum hva_picture_coding_type{PICTURE_CODING_TYPE_I=0, PICTURE_CODING_TYPE_P=1, PICTURE_CODING_TYPE_B=2,} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 90 */;
	struct hva_dev *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 891 */;
	struct hva_h264_po *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 875 */;
	enum hva_entropy_coding_mode{CAVLC=0, CABAC=1,} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 85 */;
	enum hva_brc_type{BRC_TYPE_NONE=0, BRC_TYPE_CBR=1, BRC_TYPE_VBR=2, BRC_TYPE_VBR_LOW_DELAY=3,} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 78 */;
	struct hva_h264_td cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 624 */;
	dma_addr_t cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 603 */;
	enum v4l2_mpeg_video_h264_level cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 602 */;
	struct v4l2_fract *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 598 */;
	struct hva_h264_td *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 596 */;
	struct hva_buffer *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 593 */;
	const struct h264_profile cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 59 */[];
	u8 cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 526 */;
	struct hva_h264_stereo_video_sei cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 525 */;
	u32 *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 521 */;
	enum hva_h264_sei_payload_type cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 520 */;
	struct h264_profile {
		enum v4l2_mpeg_video_h264_level level;
		u32 max_mb_per_seconds;
		u32 max_frame_size;
		u32 max_bitrate;
		u32 max_cpb_size;
		u32 min_comp_ratio;
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 50 */;
	const u8 cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 491 */[];
	unsigned int *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 488 */;
	unsigned int cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 487 */;
	enum hva_picture_coding_type cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 434 */;
	const unsigned char cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 431 */[];
	u16 *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 419 */;
	struct hva_controls *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 417 */;
	struct hva_h264_ctx {
		struct hva_buffer *seq_info;
		struct hva_buffer *ref_frame;
		struct hva_buffer *rec_frame;
		struct hva_buffer *task;
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 408 */;
	struct hva_h264_task {
		struct hva_h264_td td;
		struct hva_h264_po po;
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 395 */;
	struct hva_h264_po {
		u32 bitstream_size;
		u32 dct_bitstream_size;
		u32 stuffing_bits;
		u32 removal_time;
		u32 hvc_start_time;
		u32 hvc_stop_time;
		u32 slice_count;
		u32 reserved0;
		struct hva_h264_slice_po slice_params[16];
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 383 */;
	struct hva_h264_slice_po {
		u32 slice_size;
		u32 slice_start_time;
		u32 slice_end_time;
		u32 slice_num;
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 365 */;
	struct hva_h264_td {
		u16 frame_width;
		u16 frame_height;
		u32 frame_num;
		u16 picture_coding_type;
		u16 reserved1;
		u16 pic_order_cnt_type;
		u16 first_picture_in_sequence;
		u16 slice_size_type;
		u16 reserved2;
		u32 slice_mb_size;
		u16 ir_param_option;
		u16 intra_refresh_type;
		u16 use_constrained_intra_flag;
		u16 transform_mode;
		u16 disable_deblocking_filter_idc;
		s16 slice_alpha_c0_offset_div2;
		s16 slice_beta_offset_div2;
		u16 encoder_complexity;
		s16 chroma_qp_index_offset;
		u16 entropy_coding_mode;
		u16 brc_type;
		u16 quant;
		u32 non_vcl_nalu_size;
		u32 cpb_buffer_size;
		u32 bit_rate;
		u16 qp_min;
		u16 qp_max;
		u16 framerate_num;
		u16 framerate_den;
		u16 delay;
		u16 strict_hrd_compliancy;
		u32 addr_source_buffer;
		u32 addr_fwd_ref_buffer;
		u32 addr_rec_buffer;
		u32 addr_output_bitstream_start;
		u32 addr_output_bitstream_end;
		u32 addr_external_sw;
		u32 addr_lctx;
		u32 addr_local_rec_buffer;
		u32 addr_spatial_context;
		u16 bitstream_offset;
		u16 sampling_mode;
		u32 addr_param_out;
		u32 addr_scaling_matrix;
		u32 addr_scaling_matrix_dir;
		u32 addr_cabac_context_buffer;
		u32 reserved3;
		u32 reserved4;
		s16 gmv_x;
		s16 gmv_y;
		u16 window_width;
		u16 window_height;
		u16 window_horizontal_offset;
		u16 window_vertical_offset;
		u32 addr_roi;
		u32 addr_slice_header;
		u16 slice_header_size_in_bits;
		u16 slice_header_offset0;
		u16 slice_header_offset1;
		u16 slice_header_offset2;
		u32 reserved5;
		u32 reserved6;
		u16 reserved7;
		u16 reserved8;
		u16 slice_synchro_enable;
		u16 max_slice_number;
		u32 rgb2_yuv_y_coeff;
		u32 rgb2_yuv_u_coeff;
		u32 rgb2_yuv_v_coeff;
		u32 slice_byte_size;
		u16 max_air_intra_mb_nb;
		u16 brc_no_skip;
		u32 addr_temporal_context;
		u32 addr_brc_in_out_parameter;
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 280 */;
	struct hva_h264_stereo_video_sei {
		u8 field_views_flag;
		u8 top_field_is_left_view_flag;
		u8 current_frame_is_left_view_flag;
		u8 next_frame_is_second_view_flag;
		u8 left_view_self_contained_flag;
		u8 right_view_self_contained_flag;
	} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 140 */;
	enum hva_h264_sei_payload_type{SEI_BUFFERING_PERIOD=0, SEI_PICTURE_TIMING=1, SEI_STEREO_VIDEO_INFO=21, SEI_FRAME_PACKING_ARRANGEMENT=45,} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 130 */;
	enum hva_h264_nalu_type{NALU_TYPE_UNKNOWN=0, NALU_TYPE_SLICE=1, NALU_TYPE_SLICE_DPA=2, NALU_TYPE_SLICE_DPB=3, NALU_TYPE_SLICE_DPC=4, NALU_TYPE_SLICE_IDR=5, NALU_TYPE_SEI=6, NALU_TYPE_SPS=7, NALU_TYPE_PPS=8, NALU_TYPE_AU_DELIMITER=9, NALU_TYPE_SEQ_END=10, NALU_TYPE_STREAM_END=11, NALU_TYPE_FILLER_DATA=12, NALU_TYPE_SPS_EXT=13, NALU_TYPE_PREFIX_UNIT=14, NALU_TYPE_SUBSET_SPS=15, NALU_TYPE_SLICE_AUX=19, NALU_TYPE_SLICE_EXT=20,} cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 109 */;
	const struct hva_enc cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 1041 */;
	u8 *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 1028 */;
	u32 cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 1010 */;
	struct hva_h264_task *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 1009 */;
	struct hva_stream *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 1006 */;
	struct hva_frame *cocci_id/* drivers/media/platform/sti/hva/hva-h264.c 1005 */;
}
