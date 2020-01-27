cocci_test_suite() {
	char *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 51 */;
	const struct delta_dec cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 444 */;
	struct delta_frame **cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 430 */;
	struct mjpeg_header *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 379 */;
	unsigned int cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 378 */;
	struct delta_au cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 377 */;
	struct delta_au *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 372 */;
	struct delta_streaminfo *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 350 */;
	struct delta_mjpeg_ctx *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 337 */;
	int cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 335 */;
	struct jpeg_display_buffer_address_t cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 276 */;
	u32 cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 259 */;
	struct delta_ipc_param cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 251 */;
	struct delta_frame *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 250 */;
	struct jpeg_decode_params_t *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 247 */;
	struct jpeg_decode_return_params_t cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 226 */;
	struct jpeg_decode_params_t cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 225 */;
	void *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 213 */;
	struct delta_buf *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 210 */;
	struct jpeg_video_decode_init_params_t *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 209 */;
	struct jpeg_video_decode_init_params_t cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 208 */;
	struct delta_dev *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 174 */;
	struct jpeg_decode_return_params_t *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 172 */;
	bool cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 171 */;
	struct delta_ctx *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 171 */;
	struct delta_mjpeg_ctx {
		struct mjpeg_header header_struct;
		struct mjpeg_header *header;
		void *ipc_hdl;
		struct delta_buf *ipc_buf;
		struct delta_frame *out_frame;
		unsigned char str[3000];
	} cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 16 */;
	enum jpeg_decoding_error_t cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 103 */;
	const char *cocci_id/* drivers/media/platform/sti/delta/delta-mjpeg-dec.c 103 */;
}
