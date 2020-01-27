cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/gpu/drm/tiny/repaper.c 998 */;
	const struct spi_device_id *cocci_id/* drivers/gpu/drm/tiny/repaper.c 997 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/tiny/repaper.c 996 */;
	const struct spi_device_id cocci_id/* drivers/gpu/drm/tiny/repaper.c 985 */[];
	void *cocci_id/* drivers/gpu/drm/tiny/repaper.c 977 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tiny/repaper.c 976 */[];
	struct repaper_epd cocci_id/* drivers/gpu/drm/tiny/repaper.c 97 */;
	struct drm_driver cocci_id/* drivers/gpu/drm/tiny/repaper.c 964 */;
	struct repaper_epd *cocci_id/* drivers/gpu/drm/tiny/repaper.c 95 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tiny/repaper.c 95 */;
	const u8 cocci_id/* drivers/gpu/drm/tiny/repaper.c 938 */[];
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/tiny/repaper.c 934 */;
	const uint32_t cocci_id/* drivers/gpu/drm/tiny/repaper.c 930 */[];
	const struct drm_mode_config_funcs cocci_id/* drivers/gpu/drm/tiny/repaper.c 913 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/tiny/repaper.c 905 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/tiny/repaper.c 901 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tiny/repaper.c 883 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/tiny/repaper.c 880 */;
	int cocci_id/* drivers/gpu/drm/tiny/repaper.c 880 */;
	const struct drm_simple_display_pipe_funcs cocci_id/* drivers/gpu/drm/tiny/repaper.c 873 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/tiny/repaper.c 859 */;
	struct spi_device *cocci_id/* drivers/gpu/drm/tiny/repaper.c 797 */;
	struct drm_simple_display_pipe *cocci_id/* drivers/gpu/drm/tiny/repaper.c 794 */;
	bool cocci_id/* drivers/gpu/drm/tiny/repaper.c 660 */;
	struct device *cocci_id/* drivers/gpu/drm/tiny/repaper.c 659 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/tiny/repaper.c 655 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/tiny/repaper.c 654 */;
	void cocci_id/* drivers/gpu/drm/tiny/repaper.c 636 */;
	struct repaper_epd {
		struct drm_device drm;
		struct drm_simple_display_pipe pipe;
		const struct drm_display_mode *mode;
		struct drm_connector connector;
		struct spi_device *spi;
		struct gpio_desc *panel_on;
		struct gpio_desc *border;
		struct gpio_desc *discharge;
		struct gpio_desc *reset;
		struct gpio_desc *busy;
		struct thermal_zone_device *thermal;
		unsigned int height;
		unsigned int width;
		unsigned int bytes_per_scan;
		const u8 *channel_select;
		unsigned int stage_time;
		unsigned int factored_stage_time;
		bool middle_scan;
		bool pre_border_byte;
		enum repaper_epd_border_byte border_byte;
		u8 *line_buffer;
		void *current_frame;
		bool enabled;
		bool cleared;
		bool partial;
	} cocci_id/* drivers/gpu/drm/tiny/repaper.c 62 */;
	enum repaper_epd_border_byte{REPAPER_BORDER_BYTE_NONE, REPAPER_BORDER_BYTE_ZERO, REPAPER_BORDER_BYTE_SET,} cocci_id/* drivers/gpu/drm/tiny/repaper.c 56 */;
	u8 *cocci_id/* drivers/gpu/drm/tiny/repaper.c 538 */;
	struct drm_rect cocci_id/* drivers/gpu/drm/tiny/repaper.c 536 */;
	struct dma_buf_attachment *cocci_id/* drivers/gpu/drm/tiny/repaper.c 534 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/tiny/repaper.c 533 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/tiny/repaper.c 531 */;
	u32 cocci_id/* drivers/gpu/drm/tiny/repaper.c 511 */;
	enum repaper_stage{REPAPER_COMPENSATE, REPAPER_WHITE, REPAPER_INVERSE, REPAPER_NORMAL,} cocci_id/* drivers/gpu/drm/tiny/repaper.c 49 */;
	u64 cocci_id/* drivers/gpu/drm/tiny/repaper.c 467 */;
	size_t cocci_id/* drivers/gpu/drm/tiny/repaper.c 445 */;
	enum repaper_model{E1144CS021=1, E1190CS021, E2200CS021, E2271CS021,} cocci_id/* drivers/gpu/drm/tiny/repaper.c 42 */;
	u16 cocci_id/* drivers/gpu/drm/tiny/repaper.c 303 */;
	unsigned int cocci_id/* drivers/gpu/drm/tiny/repaper.c 299 */;
	enum repaper_stage cocci_id/* drivers/gpu/drm/tiny/repaper.c 297 */;
	u8 cocci_id/* drivers/gpu/drm/tiny/repaper.c 296 */;
	const u8 *cocci_id/* drivers/gpu/drm/tiny/repaper.c 296 */;
	u8 **cocci_id/* drivers/gpu/drm/tiny/repaper.c 295 */;
	const u8 cocci_id/* drivers/gpu/drm/tiny/repaper.c 193 */[1];
	struct spi_driver cocci_id/* drivers/gpu/drm/tiny/repaper.c 1197 */;
	struct spi_transfer cocci_id/* drivers/gpu/drm/tiny/repaper.c 104 */[2];
	const void *cocci_id/* drivers/gpu/drm/tiny/repaper.c 101 */;
	const char *cocci_id/* drivers/gpu/drm/tiny/repaper.c 1001 */;
	enum repaper_model cocci_id/* drivers/gpu/drm/tiny/repaper.c 1000 */;
}