cocci_test_suite() {
	struct dsp_obj *cocci_id/* sound/pci/asihpi/hpi6000.c 711 */;
	struct dsp_code cocci_id/* sound/pci/asihpi/hpi6000.c 644 */;
	unsigned char *cocci_id/* sound/pci/asihpi/hpi6000.c 568 */;
	struct hpi_control_cache_single cocci_id/* sound/pci/asihpi/hpi6000.c 555 */;
	struct hpi_response cocci_id/* sound/pci/asihpi/hpi6000.c 523 */;
	struct hpi_message cocci_id/* sound/pci/asihpi/hpi6000.c 522 */;
	u32 cocci_id/* sound/pci/asihpi/hpi6000.c 464 */;
	u32 *cocci_id/* sound/pci/asihpi/hpi6000.c 461 */;
	short cocci_id/* sound/pci/asihpi/hpi6000.c 460 */;
	struct hpi_hw_obj cocci_id/* sound/pci/asihpi/hpi6000.c 409 */;
	struct hpi_adapter_obj cocci_id/* sound/pci/asihpi/hpi6000.c 399 */;
	struct hpi_adapter_res cocci_id/* sound/pci/asihpi/hpi6000.c 359 */;
	struct hpi_response_header cocci_id/* sound/pci/asihpi/hpi6000.c 358 */;
	struct hpi_adapter_obj *cocci_id/* sound/pci/asihpi/hpi6000.c 323 */;
	struct hpi_response *cocci_id/* sound/pci/asihpi/hpi6000.c 321 */;
	struct hpi_message *cocci_id/* sound/pci/asihpi/hpi6000.c 321 */;
	void cocci_id/* sound/pci/asihpi/hpi6000.c 321 */;
	struct hpi_hif_6000 cocci_id/* sound/pci/asihpi/hpi6000.c 31 */;
	u16 cocci_id/* sound/pci/asihpi/hpi6000.c 228 */;
	struct hpi_hw_obj *cocci_id/* sound/pci/asihpi/hpi6000.c 223 */;
	void cocci_id/* sound/pci/asihpi/hpi6000.c 201 */(struct hpi_adapter_obj *pao);
	short cocci_id/* sound/pci/asihpi/hpi6000.c 198 */(struct hpi_adapter_obj *pao,
							   u32 *pos_error_code);
	void cocci_id/* sound/pci/asihpi/hpi6000.c 192 */(struct hpi_adapter_obj *pao,
							  struct hpi_message *phm,
							  struct hpi_response *phr);
	void cocci_id/* sound/pci/asihpi/hpi6000.c 189 */(struct hpi_message *phm,
							  struct hpi_response *phr);
	void cocci_id/* sound/pci/asihpi/hpi6000.c 186 */(struct dsp_obj *pdo,
							  u32 address,
							  u32 *pdata,
							  u32 length);
	u32 cocci_id/* sound/pci/asihpi/hpi6000.c 181 */(struct dsp_obj *pdo,
							 u32 address);
	void cocci_id/* sound/pci/asihpi/hpi6000.c 179 */(struct dsp_obj *pdo,
							  u32 address,
							  u32 data);
	short cocci_id/* sound/pci/asihpi/hpi6000.c 176 */(struct hpi_adapter_obj *pao,
							   u16 dsp_index,
							   struct hpi_message *phm,
							   struct hpi_response *phr);
	void cocci_id/* sound/pci/asihpi/hpi6000.c 171 */(struct dsp_obj *pdo);
	short cocci_id/* sound/pci/asihpi/hpi6000.c 168 */(struct hpi_adapter_obj *pao,
							   u16 dsp_index,
							   u32 host_cmd);
	short cocci_id/* sound/pci/asihpi/hpi6000.c 165 */(struct hpi_adapter_obj *pao,
							   u16 dsp_index,
							   u32 ack_value);
	const u16 cocci_id/* sound/pci/asihpi/hpi6000.c 1632 */;
	short cocci_id/* sound/pci/asihpi/hpi6000.c 157 */(struct hpi_adapter_obj *pao,
							   struct hpi_message *phm);
	short cocci_id/* sound/pci/asihpi/hpi6000.c 152 */(struct hpi_adapter_obj *pao,
							   u16 read_or_write);
	u16 cocci_id/* sound/pci/asihpi/hpi6000.c 147 */(struct hpi_adapter_obj *pao,
							 u16 dsp_index,
							 u32 hpi_address,
							 u32 *dest, u32 count);
	u16 cocci_id/* sound/pci/asihpi/hpi6000.c 145 */(struct hpi_adapter_obj *pao,
							 u16 dsp_index,
							 u32 hpi_address,
							 u32 *source,
							 u32 count);
	struct hpi_hw_obj {
	__iomem
		u32 *dw2040_HPICSR;
	__iomem
		u32 *dw2040_HPIDSP;
		u16 num_dsp;
		struct dsp_obj ado[MAX_DSPS];
		u32 message_buffer_address_on_dsp;
		u32 response_buffer_address_on_dsp;
		u32 pCI2040HPI_error_count;
		struct hpi_control_cache_single control_cache[HPI_NMIXER_CONTROLS];
		struct hpi_control_cache *p_cache;
	} cocci_id/* sound/pci/asihpi/hpi6000.c 130 */;
	int cocci_id/* sound/pci/asihpi/hpi6000.c 1251 */;
	struct dsp_obj {
	__iomem
		u32 *prHPI_control;
	__iomem
		u32 *prHPI_address;
	__iomem
		u32 *prHPI_data;
	__iomem
		u32 *prHPI_data_auto_inc;
		char c_dsp_rev;
		u32 control_cache_address_on_dsp;
		u32 control_cache_length_on_dsp;
		struct hpi_adapter_obj *pa_parent_adapter;
	} cocci_id/* sound/pci/asihpi/hpi6000.c 119 */;
}
