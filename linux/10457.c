cocci_test_suite() {
	struct atcs_pref_req_output {
		u16 size;
		u8 ret_val;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 98 */;
	struct atcs_pref_req_input {
		u16 size;
		u16 client_id;
		u16 valid_flags_mask;
		u16 flags;
		u8 req_type;
		u8 perf_req;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 89 */;
	struct atcs_verify_interface {
		u16 size;
		u16 version;
		u32 function_bits;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 81 */;
	void cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 800 */;
	struct radeon_encoder_lvds *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 755 */;
	struct radeon_encoder_atom_dig *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 749 */;
	struct radeon_encoder *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 739 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 738 */;
	struct radeon_atcs *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 714 */;
	struct radeon_atif *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 713 */;
	acpi_handle cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 712 */;
	struct acpi_bus_event *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 685 */;
	struct radeon_device cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 684 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 684 */;
	void *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 682 */;
	unsigned long cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 681 */;
	struct notifier_block *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 680 */;
	int cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 680 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 642 */;
	struct atif_sbios_requests {
		u16 size;
		u32 pending;
		u8 panel_exp_mode;
		u8 thermal_gfx;
		u8 thermal_state;
		u8 forced_power_gfx;
		u8 forced_power_state;
		u8 system_power_src;
		u8 backlight_level;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 64 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 612 */;
	size_t cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 611 */;
	struct acpi_buffer cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 610 */;
	struct atcs_pref_req_output cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 609 */;
	struct atcs_pref_req_input cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 608 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 603 */;
	union acpi_object *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 571 */;
	struct atif_system_params {
		u16 size;
		u32 valid_mask;
		u32 flags;
		u8 command_code;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 57 */;
	bool cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 549 */;
	struct atcs_verify_interface cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 510 */;
	struct atif_verify_interface {
		u16 size;
		u16 version;
		u32 notification_mask;
		u32 function_bits;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 50 */;
	struct radeon_atcs_functions *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 487 */;
	void cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 48 */(struct radeon_device *rdev);
	struct acpi_object_list cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 445 */;
	union acpi_object cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 444 */[2];
	acpi_status cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 443 */;
	struct acpi_buffer *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 441 */;
	bool cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 41 */(void);
	struct atif_sbios_requests cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 362 */;
	struct atif_sbios_requests *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 320 */;
	struct atif_system_params cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 261 */;
	struct radeon_atif_notification_cfg *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 258 */;
	struct atif_verify_interface cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 214 */;
	struct radeon_atif_functions *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 185 */;
	struct radeon_atif_notifications *cocci_id/* drivers/gpu/drm/radeon/radeon_acpi.c 162 */;
}
