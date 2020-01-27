cocci_test_suite() {
	unsigned int cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 93 */;
	struct cedrus_ctx *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 92 */;
	dma_addr_t cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 91 */;
	void *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 80 */;
	struct cedrus_dec_ops cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 608 */;
	enum cedrus_irq_status cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 43 */;
	struct cedrus_h265_sram_pred_weight {
		__s8 delta_weight;
		__s8 offset;
	}__packed cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 38 */;
	struct cedrus_h265_sram_frame_info {
		__le32 top_pic_order_cnt;
		__le32 bottom_pic_order_cnt;
		__le32 top_mv_col_buf_addr;
		__le32 bottom_mv_col_buf_addr;
		__le32 luma_addr;
		__le32 chroma_addr;
	}__packed cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 29 */;
	const struct v4l2_hevc_pred_weight_table *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 230 */;
	const struct v4l2_ctrl_hevc_slice_params *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 229 */;
	const struct v4l2_ctrl_hevc_pps *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 228 */;
	const struct v4l2_ctrl_hevc_sps *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 227 */;
	struct cedrus_run *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 224 */;
	u32 *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 206 */;
	struct cedrus_h265_sram_pred_weight cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 194 */[2];
	const s8 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 188 */[][2];
	const s8 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 186 */[];
	const u8 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 157 */[];
	u32 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 144 */[2];
	int cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 143 */;
	struct vb2_queue *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 138 */;
	u8 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 136 */;
	const struct v4l2_hevc_dpb_entry *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 135 */;
	void cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 134 */;
	struct cedrus_h265_sram_frame_info cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 116 */;
	u32 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 114 */;
	dma_addr_t cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 109 */[2];
	struct cedrus_dev *cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 106 */;
	u32 cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 103 */[];
	bool cocci_id/* drivers/staging/media/sunxi/cedrus/cedrus_h265.c 102 */;
}
