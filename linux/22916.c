cocci_test_suite() {
	struct transaction_queue cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 74 */;
	const void *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 63 */;
	struct transaction_queue {
		struct list_head list;
		struct fw_unit *unit;
		void *buf;
		unsigned int size;
		u32 seqnum;
		enum transaction_queue_state state;
		wait_queue_head_t wait;
	} cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 52 */;
	enum transaction_queue_state{STATE_PENDING, STATE_BUS_RESET, STATE_COMPLETE,} cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 46 */;
	struct snd_efw *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 41 */[SNDRV_CARDS];
	const struct fw_address_region cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 311 */;
	struct fw_address_handler cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 304 */;
	struct fw_unit *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 289 */;
	struct snd_efw_transaction cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 235 */;
	unsigned long long cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 228 */;
	int cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 227 */;
	struct fw_request *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 226 */;
	struct fw_card *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 226 */;
	unsigned long cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 202 */;
	struct transaction_queue *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 201 */;
	struct fw_device *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 200 */;
	unsigned int cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 129 */;
	u32 cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 124 */;
	struct snd_efw_transaction *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 121 */;
	struct snd_efw *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 118 */;
	int *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 118 */;
	void *cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 118 */;
	size_t cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 118 */;
	void cocci_id/* sound/firewire/fireworks/fireworks_transaction.c 117 */;
}
