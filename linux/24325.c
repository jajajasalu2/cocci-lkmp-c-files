cocci_test_suite() {
	struct rxrpc_connection cocci_id/* net/rxrpc/conn_event.c 458 */;
	struct work_struct *cocci_id/* net/rxrpc/conn_event.c 455 */;
	bool cocci_id/* net/rxrpc/conn_event.c 417 */;
	unsigned long cocci_id/* net/rxrpc/conn_event.c 415 */;
	struct rxrpc_ackinfo cocci_id/* net/rxrpc/conn_event.c 37 */;
	struct {
		struct rxrpc_wire_header whdr;
		union {
			__be32 abort_code;
			struct rxrpc_ackpacket ack;
		};
	}__attribute__((packed)) cocci_id/* net/rxrpc/conn_event.c 30 */;
	struct kvec cocci_id/* net/rxrpc/conn_event.c 29 */[3];
	u32 *cocci_id/* net/rxrpc/conn_event.c 285 */;
	struct rxrpc_channel *cocci_id/* net/rxrpc/conn_event.c 27 */;
	struct rxrpc_skb_priv *cocci_id/* net/rxrpc/conn_event.c 26 */;
	unsigned int cocci_id/* net/rxrpc/conn_event.c 24 */;
	struct sk_buff *cocci_id/* net/rxrpc/conn_event.c 23 */;
	size_t cocci_id/* net/rxrpc/conn_event.c 197 */;
	__be32 cocci_id/* net/rxrpc/conn_event.c 196 */;
	struct kvec cocci_id/* net/rxrpc/conn_event.c 195 */[2];
	struct msghdr cocci_id/* net/rxrpc/conn_event.c 194 */;
	struct rxrpc_wire_header cocci_id/* net/rxrpc/conn_event.c 193 */;
	u32 cocci_id/* net/rxrpc/conn_event.c 191 */;
	int cocci_id/* net/rxrpc/conn_event.c 156 */;
	struct rxrpc_call *cocci_id/* net/rxrpc/conn_event.c 155 */;
	rxrpc_serial_t cocci_id/* net/rxrpc/conn_event.c 153 */;
	enum rxrpc_call_completion cocci_id/* net/rxrpc/conn_event.c 152 */;
	struct rxrpc_connection *cocci_id/* net/rxrpc/conn_event.c 151 */;
	void cocci_id/* net/rxrpc/conn_event.c 151 */;
}
