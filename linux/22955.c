cocci_test_suite() {
	struct snd_seq_port_info cocci_id/* sound/core/seq/seq_ports.c 651 */;
	char *cocci_id/* sound/core/seq/seq_ports.c 649 */;
	struct snd_seq_port_callback *cocci_id/* sound/core/seq/seq_ports.c 647 */;
	struct list_head *cocci_id/* sound/core/seq/seq_ports.c 474 */;
	struct snd_seq_port_subs_info *cocci_id/* sound/core/seq/seq_ports.c 473 */;
	bool cocci_id/* sound/core/seq/seq_ports.c 471 */;
	struct snd_seq_subscribers *cocci_id/* sound/core/seq/seq_ports.c 470 */;
	struct snd_seq_client_port *cocci_id/* sound/core/seq/seq_ports.c 469 */;
	struct snd_seq_client *cocci_id/* sound/core/seq/seq_ports.c 468 */;
	struct snd_seq_port_subscribe *cocci_id/* sound/core/seq/seq_ports.c 455 */;
	struct snd_seq_addr *cocci_id/* sound/core/seq/seq_ports.c 448 */;
	int cocci_id/* sound/core/seq/seq_ports.c 448 */;
	struct snd_seq_port_info *cocci_id/* sound/core/seq/seq_ports.c 353 */;
	struct list_head cocci_id/* sound/core/seq/seq_ports.c 294 */;
	void cocci_id/* sound/core/seq/seq_ports.c 207 */;
	struct snd_seq_subscribers cocci_id/* sound/core/seq/seq_ports.c 198 */;
	void cocci_id/* sound/core/seq/seq_ports.c 189 */(struct snd_seq_client *client,
							  struct snd_seq_client_port *port,
							  struct snd_seq_subscribers *subs,
							  bool is_src,
							  bool ack);
	struct snd_seq_client **cocci_id/* sound/core/seq/seq_ports.c 174 */;
	int cocci_id/* sound/core/seq/seq_ports.c 163 */(struct snd_seq_client *client,
							 struct snd_seq_client_port *port,
							 struct snd_seq_port_subs_info *grp,
							 struct snd_seq_port_subscribe *info,
							 int send_ack);
}
