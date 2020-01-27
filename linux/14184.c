cocci_test_suite() {
	struct csc_coeffs cocci_id/* drivers/media/platform/ti-vpe/csc.c 46 */;
	struct csc_coeffs {
		struct encoding_direction y2r;
		struct encoding_direction r2y;
	} cocci_id/* drivers/media/platform/ti-vpe/csc.c 40 */;
	struct encoding_direction {
		struct colorspace r601;
		struct colorspace r709;
	} cocci_id/* drivers/media/platform/ti-vpe/csc.c 35 */;
	struct colorspace {
		struct quantization limited;
		struct quantization full;
	} cocci_id/* drivers/media/platform/ti-vpe/csc.c 30 */;
	struct quantization {
		u16 coeff[12];
	} cocci_id/* drivers/media/platform/ti-vpe/csc.c 26 */;
	const char *cocci_id/* drivers/media/platform/ti-vpe/csc.c 255 */;
	struct platform_device *cocci_id/* drivers/media/platform/ti-vpe/csc.c 255 */;
	struct csc_data *cocci_id/* drivers/media/platform/ti-vpe/csc.c 255 */;
	u32 cocci_id/* drivers/media/platform/ti-vpe/csc.c 150 */;
	enum v4l2_quantization cocci_id/* drivers/media/platform/ti-vpe/csc.c 149 */;
	enum v4l2_ycbcr_encoding cocci_id/* drivers/media/platform/ti-vpe/csc.c 148 */;
	const struct v4l2_format_info *cocci_id/* drivers/media/platform/ti-vpe/csc.c 147 */;
	const struct v4l2_pix_format_mplane *cocci_id/* drivers/media/platform/ti-vpe/csc.c 146 */;
	const struct v4l2_pix_format *cocci_id/* drivers/media/platform/ti-vpe/csc.c 145 */;
	u16 *cocci_id/* drivers/media/platform/ti-vpe/csc.c 144 */;
	struct v4l2_format *cocci_id/* drivers/media/platform/ti-vpe/csc.c 140 */;
	u32 *cocci_id/* drivers/media/platform/ti-vpe/csc.c 139 */;
	struct device *cocci_id/* drivers/media/platform/ti-vpe/csc.c 112 */;
	void cocci_id/* drivers/media/platform/ti-vpe/csc.c 110 */;
}
