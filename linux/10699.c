cocci_test_suite() {
	resource_size_t cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 970 */;
	struct opregion_asle_ext cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 910 */;
	struct opregion_asle cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 909 */;
	struct opregion_swsci cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 908 */;
	struct opregion_acpi cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 907 */;
	struct opregion_header cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 906 */;
	const void *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 903 */;
	void *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 902 */;
	char cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 900 */[sizeof(OPREGION_SIGNATURE)];
	struct pci_dev *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 898 */;
	const char *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 862 */;
	const struct firmware *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 861 */;
	const struct dmi_system_id cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 846 */[];
	const struct dmi_system_id *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 839 */;
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
		u32 did2[7];
		u32 cpd2[7];
		u8 rsvd2[4];
	}__packed cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 76 */;
	int cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 712 */[16];
	int cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 711 */;
	u32 cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 665 */;
	struct intel_connector *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 665 */;
	struct opregion_acpi *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 629 */;
	struct acpi_bus_event *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 628 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 624 */;
	struct notifier_block *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 623 */;
	struct drm_i915_private cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 561 */;
	struct opregion_header {
		u8 signature[16];
		u32 size;
		struct {
			u8 rsvd;
			u8 revision;
			u8 minor;
			u8 major;
		}__packed over;
		u8 bios_ver[32];
		u8 vbios_ver[16];
		u8 driver_ver[16];
		u32 mboxes;
		u32 driver_model;
		u32 pcon;
		u8 dver[32];
		u8 rsvd[124];
	}__packed cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 56 */;
	struct intel_opregion cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 559 */;
	struct intel_opregion *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 558 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 556 */;
	void cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 556 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 550 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 449 */;
	struct opregion_asle *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 448 */;
	struct drm_connector_list_iter cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 447 */;
	pci_power_t cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 428 */;
	const struct {
		pci_power_t pci_power_state;
		u32 parm;
	} cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 416 */[];
	bool cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 365 */;
	struct intel_encoder *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 364 */;
	u16 cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 276 */;
	struct opregion_swsci *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 273 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 271 */;
	struct opregion_asle_ext {
		u32 phed;
		u8 bddc[256];
		u8 rsvd[764];
	}__packed cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 135 */;
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
		u32 cddv;
		u32 pcft;
		u32 srot;
		u32 iuer;
		u64 fdss;
		u32 fdsp;
		u32 stat;
		u64 rvda;
		u32 rvds;
		u8 rsvd[58];
	}__packed cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 108 */;
	struct opregion_swsci {
		u32 scic;
		u32 parm;
		u32 dslp;
		u8 rsvd[244];
	}__packed cocci_id/* drivers/gpu/drm/i915/display/intel_opregion.c 100 */;
}
