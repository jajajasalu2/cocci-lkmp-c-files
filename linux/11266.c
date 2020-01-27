cocci_test_suite() {
	struct drm_psb_private *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 325 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 323 */;
	int cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 323 */;
	struct mid_vbt_header cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 274 */;
	u8 __iomem *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 273 */;
	u32 cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 272 */;
	uint32_t cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 25 */;
	struct gct_r10_timing_info *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 223 */;
	struct oaktrail_timing_info *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 222 */;
	struct gct_r10 *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 221 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 22 */;
	struct vbt_r10 cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 219 */;
	struct gct_r1 cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 193 */;
	void cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 19 */;
	u8 cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 166 */;
	struct gct_r0 cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 165 */;
	void __iomem *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 164 */;
	struct vbt_r0 cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 163 */;
	struct vbt_r10 *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 147 */;
	struct vbt_r0 *cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 133 */;
	struct vbt_r10 {
		struct mid_vbt_header vbt_header;
		u8 checksum;
		u16 size;
		u8 panel_count;
		u8 primary_panel_idx;
		u8 secondary_panel_idx;
		u8 __reserved[5];
	}__packed cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 123 */;
	struct vbt_r0 {
		struct mid_vbt_header vbt_header;
		u8 size;
		u8 checksum;
	}__packed cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 117 */;
	struct mid_vbt_header {
		u32 signature;
		u8 revision;
	}__packed cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 111 */;
	uint8_t cocci_id/* drivers/gpu/drm/gma500/mid_bios.c 105 */;
}
