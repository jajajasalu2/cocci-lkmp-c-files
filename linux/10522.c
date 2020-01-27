cocci_test_suite() {
	struct acpi_buffer cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 96 */;
	struct acpi_object_list cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 95 */;
	union acpi_object cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 94 */[2];
	acpi_status cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 93 */;
	struct acpi_buffer *cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 91 */;
	acpi_handle cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 90 */;
	union acpi_object *cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 90 */;
	int cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 90 */;
	enum vga_switcheroo_handler_flags_t cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 597 */;
	struct atpx_mux {
		u16 size;
		u16 mux;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 59 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 552 */;
	char cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 550 */[255];
	bool cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 548 */;
	void cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 548 */;
	struct atpx_power_control {
		u16 size;
		u8 dgpu_state;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 54 */;
	const struct vga_switcheroo_handler cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 536 */;
	enum vga_switcheroo_client_id cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 528 */;
	struct atpx_px_params {
		u16 size;
		u32 valid_flags;
		u32 flags;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 48 */;
	enum vga_switcheroo_state cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 461 */;
	struct atpx_verify_interface {
		u16 size;
		u16 version;
		u32 function_bits;
	}__packed cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 42 */;
	struct radeon_atpx_priv {
		bool atpx_detected;
		bool bridge_pm_usable;
		acpi_handle dhandle;
		struct radeon_atpx atpx;
	} cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 34 */;
	struct atpx_mux cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 311 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 307 */;
	struct atpx_power_control cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 275 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 271 */;
	struct radeon_atpx *cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 271 */;
	struct radeon_atpx {
		acpi_handle handle;
		struct radeon_atpx_functions functions;
		bool is_hybrid;
		bool dgpu_req_power_for_displays;
	} cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 27 */;
	struct atpx_verify_interface cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 230 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 172 */;
	size_t cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 164 */;
	struct atpx_px_params cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 163 */;
	struct radeon_atpx_functions {
		bool px_params;
		bool power_cntl;
		bool disp_mux_cntl;
		bool i2c_mux_cntl;
		bool switch_start;
		bool switch_end;
		bool disp_connectors_mapping;
		bool disp_detetion_ports;
	} cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 16 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 137 */;
	struct radeon_atpx_functions *cocci_id/* drivers/gpu/drm/radeon/radeon_atpx_handler.c 137 */;
}
