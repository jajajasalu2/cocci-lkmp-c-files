cocci_test_suite() {
	struct hantro_h264_dec_priv_tbl *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 620 */;
	struct hantro_aux_buf *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 610 */;
	struct hantro_h264_dec_hw_ctx *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 609 */;
	struct hantro_dev *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 608 */;
	struct hantro_ctx *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 606 */;
	struct hantro_h264_reflist_builder cocci_id/* drivers/staging/media/hantro/hantro_h264.c 563 */;
	struct hantro_h264_dec_ctrls *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 562 */;
	struct vb2_buffer *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 545 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 544 */;
	struct v4l2_h264_dpb_entry *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 537 */;
	unsigned int cocci_id/* drivers/staging/media/hantro/hantro_h264.c 535 */;
	dma_addr_t cocci_id/* drivers/staging/media/hantro/hantro_h264.c 534 */;
	bool cocci_id/* drivers/staging/media/hantro/hantro_h264.c 466 */;
	void cocci_id/* drivers/staging/media/hantro/hantro_h264.c 447 */;
	const u32 cocci_id/* drivers/staging/media/hantro/hantro_h264.c 40 */[];
	u8 *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 362 */;
	u8 cocci_id/* drivers/staging/media/hantro/hantro_h264.c 360 */;
	s32 cocci_id/* drivers/staging/media/hantro/hantro_h264.c 359 */;
	const struct v4l2_h264_dpb_entry *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 358 */;
	const struct hantro_h264_reflist_builder *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 357 */;
	const void *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 355 */;
	int cocci_id/* drivers/staging/media/hantro/hantro_h264.c 355 */;
	struct hantro_h264_dec_priv_tbl {
		u32 cabac_table[CABAC_INIT_BUFFER_SIZE];
		u32 poc[POC_BUFFER_SIZE];
		u8 scaling_list[SCALING_LIST_SIZE];
	} cocci_id/* drivers/staging/media/hantro/hantro_h264.c 28 */;
	struct vb2_queue *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 276 */;
	const struct v4l2_ctrl_h264_sps *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 273 */;
	const struct v4l2_ctrl_h264_decode_params *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 272 */;
	const struct v4l2_ctrl_h264_slice_params *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 271 */;
	struct hantro_h264_reflist_builder *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 269 */;
	enum v4l2_field cocci_id/* drivers/staging/media/hantro/hantro_h264.c 252 */;
	struct hantro_h264_reflist_builder {
		const struct v4l2_h264_dpb_entry *dpb;
		s32 pocs[HANTRO_H264_DPB_SIZE];
		u8 unordered_reflist[HANTRO_H264_DPB_SIZE];
		int frame_nums[HANTRO_H264_DPB_SIZE];
		s32 curpoc;
		u8 num_valid;
	} cocci_id/* drivers/staging/media/hantro/hantro_h264.c 243 */;
	const struct hantro_h264_dec_ctrls *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 226 */;
	const u32 *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 207 */;
	u32 *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 206 */;
	const size_t cocci_id/* drivers/staging/media/hantro/hantro_h264.c 202 */;
	const struct v4l2_ctrl_h264_scaling_matrix *cocci_id/* drivers/staging/media/hantro/hantro_h264.c 201 */;
}
