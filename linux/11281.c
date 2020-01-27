cocci_test_suite() {
	struct opregion_asle {
		u32 ardy;
		u32 aslc;
		u32 tche;
		u32 alsi;
		u32 bclp;
		u32 pfit;
		u32 cblv;
		u16 bclm[20];
		u32 cpfm;
		u32 epfm;
		u8 plut[74];
		u32 pfmb;
		u8 rsvd[102];
	}__packed cocci_id/* drivers/gpu/drm/gma500/opregion.c 83 */;
	struct opregion_swsci {
	}__packed cocci_id/* drivers/gpu/drm/gma500/opregion.c 78 */;
	struct opregion_acpi {
		u32 drdy;
		u32 csts;
		u32 cevt;
		u8 rsvd1[20];
		u32 didl[8];
		u32 cpdl[8];
		u32 cadl[8];
		u32 nadl[8];
		u32 aslp;
		u32 tidx;
		u32 chpd;
		u32 clid;
		u32 cdck;
		u32 sxsw;
		u32 evts;
		u32 cnot;
		u32 nrdy;
		u8 rsvd2[60];
	}__packed cocci_id/* drivers/gpu/drm/gma500/opregion.c 56 */;
	struct opregion_header {
		u8 signature[16];
		u32 size;
		u32 opregion_ver;
		u8 bios_ver[32];
		u8 vbios_ver[16];
		u8 driver_ver[16];
		u32 mboxes;
		u8 reserved[164];
	}__packed cocci_id/* drivers/gpu/drm/gma500/opregion.c 44 */;
	void __iomem *cocci_id/* drivers/gpu/drm/gma500/opregion.c 310 */;
	int cocci_id/* drivers/gpu/drm/gma500/opregion.c 305 */;
	struct notifier_block cocci_id/* drivers/gpu/drm/gma500/opregion.c 255 */;
	struct opregion_acpi *cocci_id/* drivers/gpu/drm/gma500/opregion.c 244 */;
	void *cocci_id/* drivers/gpu/drm/gma500/opregion.c 235 */;
	unsigned long cocci_id/* drivers/gpu/drm/gma500/opregion.c 235 */;
	struct notifier_block *cocci_id/* drivers/gpu/drm/gma500/opregion.c 234 */;
	void cocci_id/* drivers/gpu/drm/gma500/opregion.c 199 */;
	struct drm_psb_private cocci_id/* drivers/gpu/drm/gma500/opregion.c 178 */;
	struct psb_intel_opregion cocci_id/* drivers/gpu/drm/gma500/opregion.c 176 */;
	struct psb_intel_opregion *cocci_id/* drivers/gpu/drm/gma500/opregion.c 175 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/gma500/opregion.c 173 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/gma500/opregion.c 152 */;
	struct opregion_asle *cocci_id/* drivers/gpu/drm/gma500/opregion.c 151 */;
	struct drm_psb_private *cocci_id/* drivers/gpu/drm/gma500/opregion.c 150 */;
	u32 cocci_id/* drivers/gpu/drm/gma500/opregion.c 148 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/gma500/opregion.c 148 */;
}
