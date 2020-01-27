cocci_test_suite() {
	struct cw1200_queue_item *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 93 */;
	struct cw1200_queue_stats *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 92 */;
	bool cocci_id/* drivers/net/wireless/st/cw1200/queue.c 90 */;
	struct list_head *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 89 */;
	struct cw1200_queue *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 88 */;
	void cocci_id/* drivers/net/wireless/st/cw1200/queue.c 88 */;
	unsigned long *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 534 */;
	unsigned cocci_id/* drivers/net/wireless/st/cw1200/queue.c 505 */;
	u8 cocci_id/* drivers/net/wireless/st/cw1200/queue.c 494 */;
	struct sk_buff **cocci_id/* drivers/net/wireless/st/cw1200/queue.c 490 */;
	u8 *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 47 */;
	struct cw1200_txpriv cocci_id/* drivers/net/wireless/st/cw1200/queue.c 445 */;
	struct wsm_tx *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 348 */;
	const struct cw1200_txpriv **cocci_id/* drivers/net/wireless/st/cw1200/queue.c 332 */;
	struct ieee80211_tx_info **cocci_id/* drivers/net/wireless/st/cw1200/queue.c 331 */;
	struct wsm_tx **cocci_id/* drivers/net/wireless/st/cw1200/queue.c 330 */;
	u32 cocci_id/* drivers/net/wireless/st/cw1200/queue.c 329 */;
	struct cw1200_txpriv *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 279 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 278 */;
	size_t cocci_id/* drivers/net/wireless/st/cw1200/queue.c 253 */;
	int cocci_id/* drivers/net/wireless/st/cw1200/queue.c 199 */;
	struct cw1200_queue_item cocci_id/* drivers/net/wireless/st/cw1200/queue.c 180 */;
	struct cw1200_queue_item {
		struct list_head head;
		struct sk_buff *skb;
		u32 packet_id;
		unsigned long queue_timestamp;
		unsigned long xmit_timestamp;
		struct cw1200_txpriv txpriv;
		u8 generation;
	} cocci_id/* drivers/net/wireless/st/cw1200/queue.c 15 */;
	struct cw1200_common *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 144 */;
	cw1200_queue_skb_dtor_t cocci_id/* drivers/net/wireless/st/cw1200/queue.c 143 */;
	struct timer_list *cocci_id/* drivers/net/wireless/st/cw1200/queue.c 129 */;
	unsigned long cocci_id/* drivers/net/wireless/st/cw1200/queue.c 121 */;
}
