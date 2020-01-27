cocci_test_suite() {
	struct detailed_mode_closure {
		struct drm_connector *connector;
		struct edid *edid;
		bool preferred;
		u32 quirks;
		int modes;
	} cocci_id/* drivers/gpu/drm/drm_edid.c 89 */;
	const struct minimode cocci_id/* drivers/gpu/drm/drm_edid.c 649 */[];
	struct minimode {
		short w;
		short h;
		short r;
		short rb;
	} cocci_id/* drivers/gpu/drm/drm_edid.c 642 */;
	struct drm_tile_group *cocci_id/* drivers/gpu/drm/drm_edid.c 5505 */;
	struct displayid_tiled_block *cocci_id/* drivers/gpu/drm/drm_edid.c 5501 */;
	struct hdmi_vendor_infoframe *cocci_id/* drivers/gpu/drm/drm_edid.c 5460 */;
	enum hdmi_3d_structure cocci_id/* drivers/gpu/drm/drm_edid.c 5419 */;
	const struct drm_connector_state *cocci_id/* drivers/gpu/drm/drm_edid.c 5410 */;
	struct hdmi_avi_infoframe *cocci_id/* drivers/gpu/drm/drm_edid.c 5409 */;
	const struct drm_display_info *cocci_id/* drivers/gpu/drm/drm_edid.c 5361 */;
	const u32 cocci_id/* drivers/gpu/drm/drm_edid.c 5301 */[];
	struct hdr_output_metadata *cocci_id/* drivers/gpu/drm/drm_edid.c 5113 */;
	struct hdmi_drm_infoframe *cocci_id/* drivers/gpu/drm/drm_edid.c 5109 */;
	struct displayid_hdr cocci_id/* drivers/gpu/drm/drm_edid.c 4922 */;
	struct displayid_detailed_timings_1 *cocci_id/* drivers/gpu/drm/drm_edid.c 4892 */;
	struct displayid_detailed_timing_block *cocci_id/* drivers/gpu/drm/drm_edid.c 4881 */;
	struct displayid_block *cocci_id/* drivers/gpu/drm/drm_edid.c 4879 */;
	struct displayid_hdr *cocci_id/* drivers/gpu/drm/drm_edid.c 4814 */;
	const struct edid *cocci_id/* drivers/gpu/drm/drm_edid.c 4733 */;
	struct drm_scdc *cocci_id/* drivers/gpu/drm/drm_edid.c 4565 */;
	enum hdmi_quantization_range cocci_id/* drivers/gpu/drm/drm_edid.c 4509 */;
	u8 **cocci_id/* drivers/gpu/drm/drm_edid.c 4334 */;
	struct cea_sad **cocci_id/* drivers/gpu/drm/drm_edid.c 4273 */;
	uint8_t *cocci_id/* drivers/gpu/drm/drm_edid.c 4178 */;
	char cocci_id/* drivers/gpu/drm/drm_edid.c 4145 */[13];
	char *cocci_id/* drivers/gpu/drm/drm_edid.c 4142 */;
	uint8_t cocci_id/* drivers/gpu/drm/drm_edid.c 4043 */;
	u64 cocci_id/* drivers/gpu/drm/drm_edid.c 3906 */;
	bool cocci_id/* drivers/gpu/drm/drm_edid.c 3839 */;
	int *cocci_id/* drivers/gpu/drm/drm_edid.c 3787 */;
	struct drm_display_info *cocci_id/* drivers/gpu/drm/drm_edid.c 3629 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/drm_edid.c 3579 */;
	u8 cocci_id/* drivers/gpu/drm/drm_edid.c 3577 */;
	const u8 *cocci_id/* drivers/gpu/drm/drm_edid.c 3577 */;
	u16 cocci_id/* drivers/gpu/drm/drm_edid.c 3576 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/drm_edid.c 3576 */;
	int cocci_id/* drivers/gpu/drm/drm_edid.c 3576 */;
	const struct stereo_mandatory_mode *cocci_id/* drivers/gpu/drm/drm_edid.c 3534 */;
	struct list_head cocci_id/* drivers/gpu/drm/drm_edid.c 3527 */;
	const struct stereo_mandatory_mode cocci_id/* drivers/gpu/drm/drm_edid.c 3498 */[];
	struct stereo_mandatory_mode {
		int width,height,vrefresh;
		unsigned int flags;
	} cocci_id/* drivers/gpu/drm/drm_edid.c 3493 */;
	struct drm_hdmi_info *cocci_id/* drivers/gpu/drm/drm_edid.c 3467 */;
	unsigned int cocci_id/* drivers/gpu/drm/drm_edid.c 3319 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/drm_edid.c 3316 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/drm_edid.c 3302 */;
	struct edid *cocci_id/* drivers/gpu/drm/drm_edid.c 3300 */;
	const u8 cocci_id/* drivers/gpu/drm/drm_edid.c 3212 */;
	enum hdmi_picture_aspect cocci_id/* drivers/gpu/drm/drm_edid.c 3212 */;
	struct drm_display_mode cocci_id/* drivers/gpu/drm/drm_edid.c 3186 */;
	u32 cocci_id/* drivers/gpu/drm/drm_edid.c 2977 */;
	void cocci_id/* drivers/gpu/drm/drm_edid.c 2938 */(struct drm_display_mode *mode);
	u8 *cocci_id/* drivers/gpu/drm/drm_edid.c 2931 */;
	struct detailed_mode_closure cocci_id/* drivers/gpu/drm/drm_edid.c 2925 */;
	struct detailed_non_pixel *cocci_id/* drivers/gpu/drm/drm_edid.c 2916 */;
	struct detailed_mode_closure *cocci_id/* drivers/gpu/drm/drm_edid.c 2915 */;
	const u8 cocci_id/* drivers/gpu/drm/drm_edid.c 2871 */[3];
	const int cocci_id/* drivers/gpu/drm/drm_edid.c 2870 */[];
	struct cvt_timing *cocci_id/* drivers/gpu/drm/drm_edid.c 2869 */;
	struct std_timing *cocci_id/* drivers/gpu/drm/drm_edid.c 2813 */;
	unsigned long cocci_id/* drivers/gpu/drm/drm_edid.c 2775 */;
	struct detailed_data_monitor_range *cocci_id/* drivers/gpu/drm/drm_edid.c 2676 */;
	const struct minimode *cocci_id/* drivers/gpu/drm/drm_edid.c 2652 */;
	const struct drm_connector *cocci_id/* drivers/gpu/drm/drm_edid.c 2561 */;
	unsigned cocci_id/* drivers/gpu/drm/drm_edid.c 2391 */;
	struct detailed_pixel_timing *cocci_id/* drivers/gpu/drm/drm_edid.c 2390 */;
	const struct {
		int w,h;
	} cocci_id/* drivers/gpu/drm/drm_edid.c 2345 */[];
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/drm_edid.c 223 */[];
	struct detailed_timing *cocci_id/* drivers/gpu/drm/drm_edid.c 2070 */;
	detailed_cb *cocci_id/* drivers/gpu/drm/drm_edid.c 2062 */;
	void *cocci_id/* drivers/gpu/drm/drm_edid.c 2062 */;
	void cocci_id/* drivers/gpu/drm/drm_edid.c 2061 */;
	void cocci_id/* drivers/gpu/drm/drm_edid.c 2059 */(struct detailed_timing *timing,
							   void *closure);
	const struct edid_quirk *cocci_id/* drivers/gpu/drm/drm_edid.c 1946 */;
	char cocci_id/* drivers/gpu/drm/drm_edid.c 1928 */[3];
	const char *cocci_id/* drivers/gpu/drm/drm_edid.c 1926 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/drm_edid.c 1894 */;
	int (*cocci_id/* drivers/gpu/drm/drm_edid.c 1745 */)(void *data,
							     u8 *buf,
							     unsigned int block,
							     size_t len);
	char cocci_id/* drivers/gpu/drm/drm_edid.c 1665 */[20];
	struct i2c_msg cocci_id/* drivers/gpu/drm/drm_edid.c 1617 */[];
	unsigned char cocci_id/* drivers/gpu/drm/drm_edid.c 1604 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/drm_edid.c 1603 */;
	size_t cocci_id/* drivers/gpu/drm/drm_edid.c 1601 */;
	bool *cocci_id/* drivers/gpu/drm/drm_edid.c 1481 */;
	int cocci_id/* drivers/gpu/drm/drm_edid.c 1448 */(u8 *displayid,
							  int length, int idx);
	void cocci_id/* drivers/gpu/drm/drm_edid.c 1446 */(struct drm_connector *connector,
							   struct edid *edid);
	const u8 cocci_id/* drivers/gpu/drm/drm_edid.c 1417 */[];
	const struct edid_quirk {
		char vendor[4];
		int product_id;
		u32 quirks;
	} cocci_id/* drivers/gpu/drm/drm_edid.c 102 */[];
}
