cocci_test_suite() {
	u8 *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 54 */;
	u32 cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 53 */;
	const struct v4l2_vp8_entropy_header *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 52 */;
	const struct v4l2_ctrl_vp8_frame_header *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 50 */;
	const u32 cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 38 */[8][6];
	struct hantro_dev *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 195 */;
	struct hantro_vp8_dec_hw_ctx *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 194 */;
	struct hantro_ctx *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 192 */;
	void cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 192 */;
	struct vp8_prob_tbl_packed cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 174 */;
	size_t cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 150 */;
	unsigned int cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 149 */;
	struct hantro_aux_buf *cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 148 */;
	int cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 145 */;
	struct vp8_prob_tbl_packed {
		u8 prob_mb_skip_false;
		u8 prob_intra;
		u8 prob_ref_last;
		u8 prob_ref_golden;
		u8 prob_segment[3];
		u8 padding0;
		u8 prob_luma_16x16_pred_mode[4];
		u8 prob_chroma_pred_mode[3];
		u8 padding1;
		u8 prob_mv_context[2][19];
		u8 padding2[2];
		u8 prob_coeffs[4][8][3][11];
		u8 padding3[96];
	} cocci_id/* drivers/staging/media/hantro/hantro_vp8.c 13 */;
}
