cocci_test_suite() {
	struct vmw_escape_video_flush *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 80 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 73 */;
	struct vmw_escape_header *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 72 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 72 */;
	struct vmw_escape_video_flush {
		struct vmw_escape_header escape;
		SVGAEscapeVideoFlush flush;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 67 */;
	struct vmw_escape_header {
		uint32_t cmd;
		SVGAFifoCmdEscape body;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 62 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 58 */;
	struct vmw_overlay *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 56 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 56 */;
	uint32_t *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 527 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 527 */;
	struct vmw_overlay {
		struct mutex mutex;
		struct vmw_stream stream[VMW_MAX_NUM_STREAMS];
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 48 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 468 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 467 */;
	struct drm_vmw_control_stream_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 465 */;
	struct ttm_object_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 462 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 460 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 459 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 452 */;
	const struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 452 */;
	struct vmw_stream *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 405 */;
	struct vmw_stream {
		struct vmw_buffer_object *buf;
		bool claimed;
		bool paused;
		struct drm_vmw_control_stream_arg saved;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 38 */;
	struct {
		struct vmw_escape_header escape;
		SVGAEscapeVideoSetRegs body;
		struct vmw_escape_video_flush flush;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 187 */;
	typeof(items) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 130 */;
	struct {
		uint32_t registerId;
		uint32_t value;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 112 */;
	struct {
		struct vmw_escape_header escape;
		struct {
			uint32_t cmdType;
			uint32_t streamId;
		} header;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 105 */;
	SVGAGuestPtr cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 103 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_overlay.c 100 */;
}
