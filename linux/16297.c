cocci_test_suite() {
	struct cedrus_h264_sram_ref_pic cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 96 */[CEDRUS_H264_FRAME_NUM];
	struct vb2_buffer *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 78 */;
	struct cedrus_h264_sram_ref_pic *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 76 */;
	struct cedrus_buffer *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 73 */;
	struct cedrus_dec_ops cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 681 */;
	dma_addr_t cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 57 */;
	u32 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 491 */;
	const u32 *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 48 */;
	enum cedrus_irq_status cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 464 */;
	const void *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 46 */;
	bool cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 331 */;
	const struct v4l2_ctrl_h264_sps *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 325 */;
	const struct v4l2_ctrl_h264_pps *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 324 */;
	const struct v4l2_ctrl_h264_slice_params *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 323 */;
	struct cedrus_h264_sram_ref_pic {
		__le32 top_field_order_cnt;
		__le32 bottom_field_order_cnt;
		__le32 frame_info;
		__le32 luma_ptr;
		__le32 chroma_ptr;
		__le32 mv_col_top_ptr;
		__le32 mv_col_bot_ptr;
		__le32 reserved;
	}__packed cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 28 */;
	const struct v4l2_h264_weight_factors *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 274 */;
	const struct v4l2_h264_pred_weight_table *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 261 */;
	const struct v4l2_ctrl_h264_scaling_matrix *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 239 */;
	int cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 188 */;
	const struct vb2_v4l2_buffer *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 186 */;
	const struct cedrus_buffer *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 185 */;
	const struct v4l2_h264_dpb_entry *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 184 */;
	enum cedrus_h264_sram_off{CEDRUS_SRAM_H264_PRED_WEIGHT_TABLE=0x000, CEDRUS_SRAM_H264_FRAMEBUFFER_LIST=0x100, CEDRUS_SRAM_H264_REF_LIST_0=0x190, CEDRUS_SRAM_H264_REF_LIST_1=0x199, CEDRUS_SRAM_H264_SCALING_LIST_8x8_0=0x200, CEDRUS_SRAM_H264_SCALING_LIST_8x8_1=0x210, CEDRUS_SRAM_H264_SCALING_LIST_4x4=0x220,} cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 18 */;
	size_t cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 177 */;
	unsigned int cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 176 */;
	u8 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 175 */[CEDRUS_MAX_REF_IDX];
	struct cedrus_dev *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 174 */;
	struct vb2_queue *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 173 */;
	const struct v4l2_ctrl_h264_decode_params *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 172 */;
	enum cedrus_h264_sram_off cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 170 */;
	u8 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 169 */;
	const u8 *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 169 */;
	struct cedrus_run *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 168 */;
	struct cedrus_ctx *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 167 */;
	void cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 167 */;
	unsigned long cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h264.c 103 */;
}
