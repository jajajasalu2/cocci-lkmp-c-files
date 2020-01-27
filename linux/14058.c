cocci_test_suite() {
	struct vdec_h264_dec_info {
		uint32_t dpb_sz;
		uint32_t resolution_changed;
		uint32_t realloc_mv_buf;
		uint32_t reserved;
		uint64_t bs_dma;
		uint64_t y_fb_dma;
		uint64_t c_fb_dma;
		uint64_t vdec_fb_va;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 78 */;
	struct h264_ring_fb_list {
		struct h264_fb fb_list[H264_MAX_FB_NUM];
		unsigned int read_idx;
		unsigned int write_idx;
		unsigned int count;
		unsigned int reserved;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 59 */;
	const struct vdec_common_if cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 499 */;
	enum vdec_get_param_type cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 465 */;
	struct vdec_fb **cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 436 */;
	struct h264_fb {
		uint64_t vdec_fb_va;
		uint64_t y_fb_dma;
		uint64_t c_fb_dma;
		int32_t poc;
		uint32_t reserved;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 43 */;
	struct vdec_pic_info cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 401 */;
	uint64_t cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 348 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 347 */[2];
	struct vdec_vpu_inst *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 340 */;
	bool *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 337 */;
	void *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 336 */;
	unsigned char *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 324 */;
	struct vdec_h264_vsi *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 293 */;
	struct mtk_vcodec_ctx *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 272 */;
	unsigned int *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 266 */;
	struct v4l2_rect *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 255 */;
	uintptr_t cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 238 */;
	u64 cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 236 */;
	struct vdec_fb *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 221 */;
	struct h264_ring_fb_list *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 205 */;
	bool cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 203 */;
	void cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 190 */;
	unsigned int cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 172 */;
	struct mtk_vcodec_mem *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 171 */;
	struct vdec_pic_info *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 167 */;
	struct vdec_h264_inst *cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 167 */;
	int cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 167 */;
	struct vdec_h264_inst {
		unsigned int num_nalu;
		struct mtk_vcodec_ctx *ctx;
		struct mtk_vcodec_mem pred_buf;
		struct mtk_vcodec_mem mv_buf[H264_MAX_FB_NUM];
		struct vdec_vpu_inst vpu;
		struct vdec_h264_vsi *vsi;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 126 */;
	struct vdec_h264_vsi {
		unsigned char hdr_buf[HDR_PARSING_BUF_SZ];
		uint64_t pred_buf_dma;
		uint64_t mv_buf_dma[H264_MAX_FB_NUM];
		struct h264_ring_fb_list list_free;
		struct h264_ring_fb_list list_disp;
		struct vdec_h264_dec_info dec;
		struct vdec_pic_info pic;
		struct v4l2_rect crop;
	} cocci_id/* drivers/media/platform/mtk-vcodec/vdec/vdec_h264_if.c 106 */;
}
