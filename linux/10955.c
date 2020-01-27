cocci_test_suite() {
	void *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 93 */;
	struct atpx_mux {
		u16 size;
		u16 mux;
	}__packed cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 71 */;
	struct atpx_power_control {
		u16 size;
		u8 dgpu_state;
	}__packed cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 66 */;
	enum vga_switcheroo_handler_flags_t cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 646 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 610 */;
	char cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 608 */[255];
	bool cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 606 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 606 */;
	struct atpx_px_params {
		u16 size;
		u32 valid_flags;
		u32 flags;
	}__packed cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 60 */;
	const struct amdgpu_px_quirk *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 585 */;
	const struct amdgpu_px_quirk cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 572 */[];
	const struct vga_switcheroo_handler cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 566 */;
	enum vga_switcheroo_client_id cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 558 */;
	struct atpx_verify_interface {
		u16 size;
		u16 version;
		u32 function_bits;
	}__packed cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 54 */;
	enum vga_switcheroo_state cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 490 */;
	struct amdgpu_atpx_priv {
		bool atpx_detected;
		bool bridge_pm_usable;
		unsigned int quirks;
		acpi_handle dhandle;
		acpi_handle other_handle;
		struct amdgpu_atpx atpx;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 44 */;
	struct amdgpu_atpx {
		acpi_handle handle;
		struct amdgpu_atpx_functions functions;
		bool is_hybrid;
		bool dgpu_req_power_for_displays;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 37 */;
	struct atpx_mux cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 340 */;
	u16 cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 336 */;
	struct atpx_power_control cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 304 */;
	u8 cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 300 */;
	struct amdgpu_atpx *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 300 */;
	struct amdgpu_atpx_functions {
		bool px_params;
		bool power_cntl;
		bool disp_mux_cntl;
		bool i2c_mux_cntl;
		bool switch_start;
		bool switch_end;
		bool disp_connectors_mapping;
		bool disp_detection_ports;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 26 */;
	struct atpx_verify_interface cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 259 */;
	u16 *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 190 */;
	size_t cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 182 */;
	struct atpx_px_params cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 181 */;
	struct amdgpu_px_quirk {
		u32 chip_vendor;
		u32 chip_device;
		u32 subsys_vendor;
		u32 subsys_device;
		u32 px_quirk_flags;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 18 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 155 */;
	struct amdgpu_atpx_functions *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 155 */;
	struct acpi_buffer cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 114 */;
	struct acpi_object_list cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 113 */;
	union acpi_object cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 112 */[2];
	acpi_status cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 111 */;
	struct acpi_buffer *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 109 */;
	acpi_handle cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 108 */;
	union acpi_object *cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 108 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/amdgpu_atpx_handler.c 108 */;
}
