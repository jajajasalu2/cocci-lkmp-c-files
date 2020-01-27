cocci_test_suite() {
	struct pollfd cocci_id/* tools/firewire/nosy-dump.c 904 */[2];
	char cocci_id/* tools/firewire/nosy-dump.c 903 */;
	poptContext cocci_id/* tools/firewire/nosy-dump.c 902 */;
	FILE *cocci_id/* tools/firewire/nosy-dump.c 901 */;
	uint32_t cocci_id/* tools/firewire/nosy-dump.c 897 */[128 * 1024];
	const char *cocci_id/* tools/firewire/nosy-dump.c 895 */[];
	struct termios cocci_id/* tools/firewire/nosy-dump.c 864 */;
	struct timeval cocci_id/* tools/firewire/nosy-dump.c 831 */;
	int cocci_id/* tools/firewire/nosy-dump.c 830 */[16];
	struct phy_packet *cocci_id/* tools/firewire/nosy-dump.c 759 */;
	unsigned long long cocci_id/* tools/firewire/nosy-dump.c 717 */;
	unsigned char *cocci_id/* tools/firewire/nosy-dump.c 714 */;
	uint32_t cocci_id/* tools/firewire/nosy-dump.c 708 */;
	const struct packet_field *cocci_id/* tools/firewire/nosy-dump.c 694 */;
	const struct packet_info *cocci_id/* tools/firewire/nosy-dump.c 687 */;
	int cocci_id/* tools/firewire/nosy-dump.c 685 */;
	struct link_packet *cocci_id/* tools/firewire/nosy-dump.c 684 */;
	size_t cocci_id/* tools/firewire/nosy-dump.c 684 */;
	uint32_t *cocci_id/* tools/firewire/nosy-dump.c 646 */;
	unsigned int cocci_id/* tools/firewire/nosy-dump.c 643 */;
	struct phy_packet cocci_id/* tools/firewire/nosy-dump.c 624 */;
	struct subaction cocci_id/* tools/firewire/nosy-dump.c 495 */;
	enum{VIEW_TRANSACTION, VIEW_PACKET, VIEW_STATS,} cocci_id/* tools/firewire/nosy-dump.c 49 */;
	struct subaction *cocci_id/* tools/firewire/nosy-dump.c 485 */;
	char *cocci_id/* tools/firewire/nosy-dump.c 42 */;
	const struct packet_info cocci_id/* tools/firewire/nosy-dump.c 404 */[];
	const struct packet_field cocci_id/* tools/firewire/nosy-dump.c 376 */[];
	sig_t cocci_id/* tools/firewire/nosy-dump.c 37 */;
	void cocci_id/* tools/firewire/nosy-dump.c 34 */(struct link_packet *packet,
							 size_t length,
							 int include_flags,
							 int exclude_flags);
	void cocci_id/* tools/firewire/nosy-dump.c 33 */(uint32_t *data,
							 size_t length);
	struct packet_field {
		const char *name;
		int offset;
		int width;
		int flags;
		const char *const *value_names;
	} cocci_id/* tools/firewire/nosy-dump.c 312 */;
	struct packet_info {
		const char *name;
		int type;
		int response_tcode;
		const struct packet_field *fields;
		int field_count;
	} cocci_id/* tools/firewire/nosy-dump.c 304 */;
	enum{PACKET_RESERVED, PACKET_REQUEST, PACKET_RESPONSE, PACKET_OTHER,} cocci_id/* tools/firewire/nosy-dump.c 297 */;
	const char *const cocci_id/* tools/firewire/nosy-dump.c 272 */[];
	enum{PACKET_FIELD_DETAIL=0x01, PACKET_FIELD_DATA_LENGTH=0x02, PACKET_FIELD_TRANSACTION=0x04,} cocci_id/* tools/firewire/nosy-dump.c 26 */;
	struct link_transaction cocci_id/* tools/firewire/nosy-dump.c 256 */;
	struct link_transaction *cocci_id/* tools/firewire/nosy-dump.c 252 */;
	void cocci_id/* tools/firewire/nosy-dump.c 249 */;
	const struct protocol_decoder cocci_id/* tools/firewire/nosy-dump.c 208 */[];
	struct protocol_decoder {
		const char *name;
		int (*decode)(struct link_transaction *t);
	} cocci_id/* tools/firewire/nosy-dump.c 203 */;
	struct list cocci_id/* tools/firewire/nosy-dump.c 155 */;
}
