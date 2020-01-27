cocci_test_suite() {
	struct gsm_msg {
		struct list_head list;
		u8 addr;
		u8 ctrl;
		unsigned int len;
		unsigned char *data;
		unsigned char buffer[0];
	} cocci_id/* drivers/tty/n_gsm.c 94 */;
	struct gsm_mux_net {
		struct kref ref;
		struct gsm_dlci *dlci;
	} cocci_id/* drivers/tty/n_gsm.c 83 */;
	u8 *cocci_id/* drivers/tty/n_gsm.c 722 */;
	struct gsm_mux *cocci_id/* drivers/tty/n_gsm.c 721 */;
	struct gsm_msg *cocci_id/* drivers/tty/n_gsm.c 719 */;
	struct gsm_dlci *cocci_id/* drivers/tty/n_gsm.c 719 */;
	void cocci_id/* drivers/tty/n_gsm.c 719 */;
	struct gsm_msg cocci_id/* drivers/tty/n_gsm.c 644 */;
	u8 cocci_id/* drivers/tty/n_gsm.c 563 */[3];
	u8 cocci_id/* drivers/tty/n_gsm.c 562 */[10];
	int cocci_id/* drivers/tty/n_gsm.c 54 */;
	const char *cocci_id/* drivers/tty/n_gsm.c 448 */;
	const struct gsm_dlci *cocci_id/* drivers/tty/n_gsm.c 418 */;
	unsigned int *cocci_id/* drivers/tty/n_gsm.c 401 */;
	void __exit cocci_id/* drivers/tty/n_gsm.c 3265 */;
	const u8 cocci_id/* drivers/tty/n_gsm.c 323 */[256];
	int __init cocci_id/* drivers/tty/n_gsm.c 3223 */;
	const struct tty_operations cocci_id/* drivers/tty/n_gsm.c 3201 */;
	const struct tty_port_operations cocci_id/* drivers/tty/n_gsm.c 317 */;
	struct ktermios *cocci_id/* drivers/tty/n_gsm.c 3135 */;
	void __user *cocci_id/* drivers/tty/n_gsm.c 3113 */;
	struct gsm_netconfig cocci_id/* drivers/tty/n_gsm.c 3106 */;
	bool cocci_id/* drivers/tty/n_gsm.c 2927 */;
	struct gsm_dlci cocci_id/* drivers/tty/n_gsm.c 2881 */;
	struct tty_port *cocci_id/* drivers/tty/n_gsm.c 2879 */;
	u8 cocci_id/* drivers/tty/n_gsm.c 2861 */[5];
	struct tty_ldisc_ops cocci_id/* drivers/tty/n_gsm.c 2838 */;
	struct gsm_mux_net cocci_id/* drivers/tty/n_gsm.c 2806 */;
	struct gsm_mux_net *cocci_id/* drivers/tty/n_gsm.c 2786 */;
	struct net_device *cocci_id/* drivers/tty/n_gsm.c 2785 */;
	char *cocci_id/* drivers/tty/n_gsm.c 2783 */;
	struct gsm_netconfig *cocci_id/* drivers/tty/n_gsm.c 2781 */;
	const struct net_device_ops cocci_id/* drivers/tty/n_gsm.c 2750 */;
	const unsigned char *cocci_id/* drivers/tty/n_gsm.c 2717 */;
	netdev_tx_t cocci_id/* drivers/tty/n_gsm.c 2689 */;
	struct sk_buff *cocci_id/* drivers/tty/n_gsm.c 2689 */;
	struct tty_driver *cocci_id/* drivers/tty/n_gsm.c 267 */;
	spinlock_t cocci_id/* drivers/tty/n_gsm.c 265 */;
	struct gsm_mux *cocci_id/* drivers/tty/n_gsm.c 264 */[MAX_MUX];
	__u32 __user *cocci_id/* drivers/tty/n_gsm.c 2630 */;
	void *cocci_id/* drivers/tty/n_gsm.c 2621 */;
	struct gsm_config cocci_id/* drivers/tty/n_gsm.c 2614 */;
	struct file *cocci_id/* drivers/tty/n_gsm.c 2611 */;
	poll_table *cocci_id/* drivers/tty/n_gsm.c 2595 */;
	__poll_t cocci_id/* drivers/tty/n_gsm.c 2594 */;
	unsigned char __user *cocci_id/* drivers/tty/n_gsm.c 2551 */;
	size_t cocci_id/* drivers/tty/n_gsm.c 2551 */;
	ssize_t cocci_id/* drivers/tty/n_gsm.c 2550 */;
	char cocci_id/* drivers/tty/n_gsm.c 2411 */;
	struct gsm_config *cocci_id/* drivers/tty/n_gsm.c 2245 */;
	struct gsm_mux cocci_id/* drivers/tty/n_gsm.c 2192 */;
	struct kref *cocci_id/* drivers/tty/n_gsm.c 2158 */;
	unsigned int cocci_id/* drivers/tty/n_gsm.c 1857 */;
	unsigned char cocci_id/* drivers/tty/n_gsm.c 1855 */;
	struct gsm_mux {
		struct tty_struct *tty;
		spinlock_t lock;
		struct mutex mutex;
		unsigned int num;
		struct kref ref;
		wait_queue_head_t event;
		unsigned char *buf;
		int state;
#define GSM_SEARCH 0
#define GSM_START 1
#define GSM_ADDRESS 2
#define GSM_CONTROL 3
#define GSM_LEN 4
#define GSM_DATA 5
#define GSM_FCS 6
#define GSM_OVERRUN 7
#define GSM_LEN0 8
#define GSM_LEN1 9
#define GSM_SSOF 10
		unsigned int len;
		unsigned int address;
		unsigned int count;
		int escape;
		int encoding;
		u8 control;
		u8 fcs;
		u8 received_fcs;
		u8 *txframe;
		void (*receive)(struct gsm_mux *gsm, u8 ch);
		void (*error)(struct gsm_mux *gsm, u8 ch, u8 flag);
		int (*output)(struct gsm_mux *mux, u8 *data, int len);
		unsigned int mru;
		unsigned int mtu;
		int initiator;
		int dead;
		struct gsm_dlci *dlci[NUM_DLCI];
		int constipated;
		spinlock_t tx_lock;
		unsigned int tx_bytes;
#define TX_THRESH_HI 8192
#define TX_THRESH_LO 2048
		struct list_head tx_list;
		struct timer_list t2_timer;
		int cretries;
		struct gsm_control *pending_cmd;
		spinlock_t control_lock;
		int adaption;
		u8 ftype;
		int t1,t2;
		int n2;
		unsigned long bad_fcs;
		unsigned long malformed;
		unsigned long io_error;
		unsigned long bad_size;
		unsigned long unsupported;
	} cocci_id/* drivers/tty/n_gsm.c 181 */;
	void cocci_id/* drivers/tty/n_gsm.c 1700 */(struct gsm_dlci *dlci);
	struct gsm_control {
		u8 cmd;
		u8 *data;
		int len;
		int done;
		int error;
	} cocci_id/* drivers/tty/n_gsm.c 163 */;
	struct gsm_control cocci_id/* drivers/tty/n_gsm.c 1354 */;
	struct timer_list *cocci_id/* drivers/tty/n_gsm.c 1316 */;
	struct gsm_control *cocci_id/* drivers/tty/n_gsm.c 1266 */;
	unsigned long cocci_id/* drivers/tty/n_gsm.c 1195 */;
	u8 cocci_id/* drivers/tty/n_gsm.c 1194 */[1];
	const u8 *cocci_id/* drivers/tty/n_gsm.c 1192 */;
	u8 cocci_id/* drivers/tty/n_gsm.c 1141 */;
	struct gsm_dlci {
		struct gsm_mux *gsm;
		int addr;
		int state;
#define DLCI_CLOSED 0
#define DLCI_OPENING 1
#define DLCI_OPEN 2
#define DLCI_CLOSING 3
		struct mutex mutex;
		int mode;
#define DLCI_MODE_ABM 0
#define DLCI_MODE_ADM 1
		spinlock_t lock;
		struct timer_list t1;
		int retries;
		struct tty_port port;
		struct kfifo *fifo;
		struct kfifo _fifo;
		int adaption;
		int prev_adaption;
		u32 modem_rx;
		u32 modem_tx;
		int dead;
		int throttled;
		int constipated;
		struct sk_buff *skb;
		struct sk_buff_head skb_list;
		void (*data)(struct gsm_dlci *dlci, const u8 *data, int len);
		void (*prev_data)(struct gsm_dlci *dlci, const u8 *data, int len);
		struct net_device *net;
	} cocci_id/* drivers/tty/n_gsm.c 113 */;
	struct tty_struct *cocci_id/* drivers/tty/n_gsm.c 1084 */;
	u32 cocci_id/* drivers/tty/n_gsm.c 1015 */;
}
