cocci_test_suite() {
	struct venc_vp8_vpu_buf {
		u32 iova;
		u32 vpua;
		u32 size;
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 86 */;
	struct venc_vp8_vpu_config {
		u32 input_fourcc;
		u32 bitrate;
		u32 pic_w;
		u32 pic_h;
		u32 buf_w;
		u32 buf_h;
		u32 gop_size;
		u32 framerate;
		u32 ts_mode;
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 66 */;
	const struct venc_common_if cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 463 */;
	struct venc_enc_param *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 396 */;
	enum venc_set_param_type cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 395 */;
	struct mtk_vcodec_ctx *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 365 */;
	struct venc_done_result *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 361 */;
	struct venc_frm_buf *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 359 */;
	enum venc_start_opt cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 358 */;
	struct venc_vp8_vsi *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 345 */;
	enum venc_vp8_vpu_work_buf{VENC_VP8_VPU_WORK_BUF_LUMA, VENC_VP8_VPU_WORK_BUF_LUMA2, VENC_VP8_VPU_WORK_BUF_LUMA3, VENC_VP8_VPU_WORK_BUF_CHROMA, VENC_VP8_VPU_WORK_BUF_CHROMA2, VENC_VP8_VPU_WORK_BUF_CHROMA3, VENC_VP8_VPU_WORK_BUF_MV_INFO, VENC_VP8_VPU_WORK_BUF_BS_HEADER, VENC_VP8_VPU_WORK_BUF_PROB_BUF, VENC_VP8_VPU_WORK_BUF_RC_INFO, VENC_VP8_VPU_WORK_BUF_RC_CODE, VENC_VP8_VPU_WORK_BUF_RC_CODE2, VENC_VP8_VPU_WORK_BUF_RC_CODE3, VENC_VP8_VPU_WORK_BUF_MAX,} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 31 */;
	u8 cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 243 */[MAX_AC_TAG_SIZE];
	u32 cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 240 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 239 */;
	unsigned int *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 237 */;
	struct mtk_vcodec_mem *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 236 */;
	void *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 193 */;
	struct venc_vp8_vpu_buf *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 161 */;
	struct venc_vp8_inst *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 157 */;
	int cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 157 */;
	void cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 141 */;
	struct venc_vp8_inst {
		void __iomem *hw_base;
		struct mtk_vcodec_mem work_bufs[VENC_VP8_VPU_WORK_BUF_MAX];
		bool work_buf_allocated;
		unsigned int frm_cnt;
		unsigned int ts_mode;
		struct venc_vpu_inst vpu_inst;
		struct venc_vp8_vsi *vsi;
		struct mtk_vcodec_ctx *ctx;
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 125 */;
	struct venc_vp8_vsi {
		struct venc_vp8_vpu_config config;
		struct venc_vp8_vpu_buf work_bufs[VENC_VP8_VPU_WORK_BUF_MAX];
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_vp8_if.c 106 */;
}
