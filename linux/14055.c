cocci_test_suite() {
	struct venc_h264_vpu_buf {
		u32 iova;
		u32 vpua;
		u32 size;
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 96 */;
	struct venc_h264_vpu_config {
		u32 input_fourcc;
		u32 bitrate;
		u32 pic_w;
		u32 pic_h;
		u32 buf_w;
		u32 buf_h;
		u32 gop_size;
		u32 intra_period;
		u32 framerate;
		u32 profile;
		u32 level;
		u32 wfd;
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 73 */;
	const struct venc_common_if cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 658 */;
	struct venc_enc_param *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 589 */;
	enum venc_set_param_type cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 588 */;
	struct mtk_vcodec_mem cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 524 */;
	const int cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 523 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 508 */;
	struct mtk_vcodec_ctx *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 500 */;
	struct venc_done_result *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 496 */;
	struct mtk_vcodec_mem *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 495 */;
	struct venc_frm_buf *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 494 */;
	enum venc_start_opt cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 493 */;
	struct venc_h264_vsi *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 480 */;
	enum venc_h264_bs_mode{H264_BS_MODE_SPS, H264_BS_MODE_PPS, H264_BS_MODE_FRAME,} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 47 */;
	unsigned char *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 448 */;
	unsigned int *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 405 */;
	enum venc_h264_vpu_work_buf{VENC_H264_VPU_WORK_BUF_RC_INFO, VENC_H264_VPU_WORK_BUF_RC_CODE, VENC_H264_VPU_WORK_BUF_REC_LUMA, VENC_H264_VPU_WORK_BUF_REC_CHROMA, VENC_H264_VPU_WORK_BUF_REF_LUMA, VENC_H264_VPU_WORK_BUF_REF_CHROMA, VENC_H264_VPU_WORK_BUF_MV_INFO_1, VENC_H264_VPU_WORK_BUF_MV_INFO_2, VENC_H264_VPU_WORK_BUF_SKIP_FRAME, VENC_H264_VPU_WORK_BUF_MAX,} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 31 */;
	void *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 278 */;
	struct venc_h264_vpu_buf *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 237 */;
	struct venc_h264_inst *cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 233 */;
	int cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 233 */;
	const char cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 23 */[];
	void cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 214 */;
	u32 cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 148 */;
	struct venc_h264_inst {
		void __iomem *hw_base;
		struct mtk_vcodec_mem work_bufs[VENC_H264_VPU_WORK_BUF_MAX];
		struct mtk_vcodec_mem pps_buf;
		bool work_buf_allocated;
		unsigned int frm_cnt;
		unsigned int prepend_hdr;
		struct venc_vpu_inst vpu_inst;
		struct venc_h264_vsi *vsi;
		struct mtk_vcodec_ctx *ctx;
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 136 */;
	struct venc_h264_vsi {
		struct venc_h264_vpu_config config;
		struct venc_h264_vpu_buf work_bufs[VENC_H264_VPU_WORK_BUF_MAX];
	} cocci_id/* drivers/media/platform/mtk-vcodec/venc/venc_h264_if.c 116 */;
}
