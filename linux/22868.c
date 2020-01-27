cocci_test_suite() {
	unsigned short cocci_id/* sound/firewire/fcp.c 86 */;
	enum avc_general_plug_dir cocci_id/* sound/firewire/fcp.c 85 */;
	unsigned int *cocci_id/* sound/firewire/fcp.c 84 */;
	void __exit cocci_id/* sound/firewire/fcp.c 396 */;
	const struct fw_address_region cocci_id/* sound/firewire/fcp.c 385 */;
	int __init cocci_id/* sound/firewire/fcp.c 383 */;
	struct fw_address_handler cocci_id/* sound/firewire/fcp.c 378 */;
	struct fw_device *cocci_id/* sound/firewire/fcp.c 353 */;
	unsigned long cocci_id/* sound/firewire/fcp.c 346 */;
	size_t cocci_id/* sound/firewire/fcp.c 343 */;
	unsigned long long cocci_id/* sound/firewire/fcp.c 342 */;
	struct fw_request *cocci_id/* sound/firewire/fcp.c 340 */;
	struct fw_card *cocci_id/* sound/firewire/fcp.c 340 */;
	bool cocci_id/* sound/firewire/fcp.c 34 */;
	struct fcp_transaction *cocci_id/* sound/firewire/fcp.c 303 */;
	void cocci_id/* sound/firewire/fcp.c 301 */;
	const u8 *cocci_id/* sound/firewire/fcp.c 244 */;
	struct fcp_transaction cocci_id/* sound/firewire/fcp.c 234 */;
	void *cocci_id/* sound/firewire/fcp.c 231 */;
	const void *cocci_id/* sound/firewire/fcp.c 230 */;
	struct fcp_transaction {
		struct list_head list;
		struct fw_unit *unit;
		void *response_buffer;
		unsigned int response_size;
		unsigned int response_match_bytes;
		enum fcp_state state;
		wait_queue_head_t wait;
		bool deferrable;
	} cocci_id/* sound/firewire/fcp.c 196 */;
	enum fcp_state{STATE_PENDING, STATE_BUS_RESET, STATE_COMPLETE, STATE_DEFERRED,} cocci_id/* sound/firewire/fcp.c 189 */;
	u8 *cocci_id/* sound/firewire/fcp.c 143 */;
	u8 cocci_id/* sound/firewire/fcp.c 141 */[AVC_PLUG_INFO_BUF_BYTES];
	struct fw_unit *cocci_id/* sound/firewire/fcp.c 139 */;
	unsigned int cocci_id/* sound/firewire/fcp.c 139 */;
	int cocci_id/* sound/firewire/fcp.c 139 */;
}
