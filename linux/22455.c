cocci_test_suite() {
	struct hpi_response cocci_id/* sound/pci/asihpi/hpi6205.c 626 */;
	struct hpi_message cocci_id/* sound/pci/asihpi/hpi6205.c 625 */;
	u8 *cocci_id/* sound/pci/asihpi/hpi6205.c 585 */;
	void *cocci_id/* sound/pci/asihpi/hpi6205.c 548 */;
	struct bus_master_interface cocci_id/* sound/pci/asihpi/hpi6205.c 544 */;
	struct hpi_hw_obj cocci_id/* sound/pci/asihpi/hpi6205.c 464 */;
	struct hpi_adapter_obj cocci_id/* sound/pci/asihpi/hpi6205.c 456 */;
	struct hpi_adapter_obj *cocci_id/* sound/pci/asihpi/hpi6205.c 426 */;
	struct hpi_response *cocci_id/* sound/pci/asihpi/hpi6205.c 424 */;
	struct hpi_message *cocci_id/* sound/pci/asihpi/hpi6205.c 424 */;
	void cocci_id/* sound/pci/asihpi/hpi6205.c 424 */;
	struct hpi_response_header cocci_id/* sound/pci/asihpi/hpi6205.c 2191 */;
	unsigned int cocci_id/* sound/pci/asihpi/hpi6205.c 2082 */;
	u16 cocci_id/* sound/pci/asihpi/hpi6205.c 208 */(struct hpi_adapter_obj *pao,
							 int dsp_index,
							 u32 address,
							 u32 length);
	u16 cocci_id/* sound/pci/asihpi/hpi6205.c 205 */(struct hpi_adapter_obj *pao,
							 int dsp_index);
	void cocci_id/* sound/pci/asihpi/hpi6205.c 202 */(struct hpi_adapter_obj *pao,
							  int dsp_index,
							  u32 address,
							  u32 data);
	u32 cocci_id/* sound/pci/asihpi/hpi6205.c 199 */(struct hpi_adapter_obj *pao,
							 int dsp_index,
							 u32 address);
	short cocci_id/* sound/pci/asihpi/hpi6205.c 1986 */;
	int cocci_id/* sound/pci/asihpi/hpi6205.c 155 */(struct hpi_adapter_obj *pao,
							 u32 message);
	void cocci_id/* sound/pci/asihpi/hpi6205.c 153 */(struct hpi_adapter_obj *pao);
	void cocci_id/* sound/pci/asihpi/hpi6205.c 147 */(struct hpi_adapter_obj *pao,
							  struct hpi_message *phm,
							  struct hpi_response *phr);
	struct bus_master_interface *cocci_id/* sound/pci/asihpi/hpi6205.c 1467 */;
	void cocci_id/* sound/pci/asihpi/hpi6205.c 145 */(struct hpi_message *phm,
							  struct hpi_response *phr);
	u16 cocci_id/* sound/pci/asihpi/hpi6205.c 137 */(struct hpi_adapter_obj *pao,
							 struct hpi_message *phm,
							 struct hpi_response *phr);
	u16 cocci_id/* sound/pci/asihpi/hpi6205.c 134 */(struct hpi_adapter_obj *pao,
							 u32 *pos_error_code);
	void cocci_id/* sound/pci/asihpi/hpi6205.c 132 */(struct hpi_hw_obj *phw,
							  int cmd);
	int cocci_id/* sound/pci/asihpi/hpi6205.c 130 */(struct hpi_hw_obj *phw,
							 int state,
							 int timeout_us);
	int cocci_id/* sound/pci/asihpi/hpi6205.c 1263 */;
	u32 cocci_id/* sound/pci/asihpi/hpi6205.c 1262 */;
	u16 cocci_id/* sound/pci/asihpi/hpi6205.c 1261 */[HPI6205_MAX_FILES_TO_LOAD];
	struct dsp_code cocci_id/* sound/pci/asihpi/hpi6205.c 1260 */;
	struct hpi_hw_obj *cocci_id/* sound/pci/asihpi/hpi6205.c 1259 */;
	u32 *cocci_id/* sound/pci/asihpi/hpi6205.c 1257 */;
	u16 cocci_id/* sound/pci/asihpi/hpi6205.c 1256 */;
	struct hpi_hostbuffer_status *cocci_id/* sound/pci/asihpi/hpi6205.c 1171 */;
	struct hpi_hw_obj {
	__iomem
		u32 *prHSR;
	__iomem
		u32 *prHDCR;
	__iomem
		u32 *prDSPP;
		u32 dsp_page;
		struct consistent_dma_area h_locked_mem;
		struct bus_master_interface *p_interface_buffer;
		u16 flag_outstream_just_reset[HPI_MAX_STREAMS];
		struct consistent_dma_area instream_host_buffers[HPI_MAX_STREAMS];
		struct consistent_dma_area outstream_host_buffers[HPI_MAX_STREAMS];
		u32 instream_host_buffer_size[HPI_MAX_STREAMS];
		u32 outstream_host_buffer_size[HPI_MAX_STREAMS];
		struct consistent_dma_area h_control_cache;
		struct hpi_control_cache *p_cache;
	} cocci_id/* sound/pci/asihpi/hpi6205.c 102 */;
}
