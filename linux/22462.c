cocci_test_suite() {
	struct hpi_subsys_response {
		struct hpi_response_header h;
		struct hpi_subsys_res s;
	} cocci_id/* sound/pci/asihpi/hpimsgx.c 96 */;
	void cocci_id/* sound/pci/asihpi/hpimsgx.c 90 */(u16 adapter_index,
							 void *h_owner);
	u16 cocci_id/* sound/pci/asihpi/hpimsgx.c 89 */(struct hpi_message *phm,
							struct hpi_response *phr);
	void cocci_id/* sound/pci/asihpi/hpimsgx.c 87 */(u16 adapter_index);
	void cocci_id/* sound/pci/asihpi/hpimsgx.c 84 */(struct hpi_message *phm,
							 struct hpi_response *phr,
							 void *h_owner);
	struct hpi_response cocci_id/* sound/pci/asihpi/hpimsgx.c 751 */;
	struct hpi_message cocci_id/* sound/pci/asihpi/hpimsgx.c 750 */;
	int cocci_id/* sound/pci/asihpi/hpimsgx.c 732 */;
	u16 cocci_id/* sound/pci/asihpi/hpimsgx.c 730 */;
	void *cocci_id/* sound/pci/asihpi/hpimsgx.c 730 */;
	void cocci_id/* sound/pci/asihpi/hpimsgx.c 730 */;
	void cocci_id/* sound/pci/asihpi/hpimsgx.c 73 */(struct hpi_message *phm,
							 struct hpi_response *phr);
	hpi_handler_func *cocci_id/* sound/pci/asihpi/hpimsgx.c 699 */;
	struct hpi_response *cocci_id/* sound/pci/asihpi/hpimsgx.c 695 */;
	struct hpi_message *cocci_id/* sound/pci/asihpi/hpimsgx.c 692 */;
	const struct hpi_pci *cocci_id/* sound/pci/asihpi/hpimsgx.c 29 */;
	hpi_handler_func *cocci_id/* sound/pci/asihpi/hpimsgx.c 26 */[HPI_MAX_ADAPTERS];
	struct hpios_spinlock cocci_id/* sound/pci/asihpi/hpimsgx.c 24 */;
	struct asi_open_state cocci_id/* sound/pci/asihpi/hpimsgx.c 148 */[HPI_MAX_ADAPTERS][HPI_MAX_STREAMS];
	struct adapter_info cocci_id/* sound/pci/asihpi/hpimsgx.c 142 */[HPI_MAX_ADAPTERS];
	struct hpi_mixer_response cocci_id/* sound/pci/asihpi/hpimsgx.c 140 */[HPI_MAX_ADAPTERS];
	struct hpi_stream_response cocci_id/* sound/pci/asihpi/hpimsgx.c 137 */[HPI_MAX_ADAPTERS][HPI_MAX_STREAMS];
	struct hpi_adapter_response cocci_id/* sound/pci/asihpi/hpimsgx.c 132 */[HPI_MAX_ADAPTERS];
	struct asi_open_state {
		int open_flag;
		void *h_owner;
	} cocci_id/* sound/pci/asihpi/hpimsgx.c 122 */;
	struct adapter_info {
		u16 type;
		u16 num_instreams;
		u16 num_outstreams;
	} cocci_id/* sound/pci/asihpi/hpimsgx.c 116 */;
	struct hpi_stream_response {
		struct hpi_response_header h;
		struct hpi_stream_res d;
	} cocci_id/* sound/pci/asihpi/hpimsgx.c 111 */;
	struct hpi_mixer_response {
		struct hpi_response_header h;
		struct hpi_mixer_res m;
	} cocci_id/* sound/pci/asihpi/hpimsgx.c 106 */;
	struct hpi_adapter_response {
		struct hpi_response_header h;
		struct hpi_adapter_res a;
	} cocci_id/* sound/pci/asihpi/hpimsgx.c 101 */;
}
