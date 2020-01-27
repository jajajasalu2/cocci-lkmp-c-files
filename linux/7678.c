cocci_test_suite() {
	struct atmel_uart_char {
		u16 status;
		u16 ch;
	} cocci_id/* drivers/tty/serial/atmel_serial.c 94 */;
	dma_addr_t cocci_id/* drivers/tty/serial/atmel_serial.c 934 */;
	struct scatterlist cocci_id/* drivers/tty/serial/atmel_serial.c 932 */[2];
	struct atmel_dma_buffer {
		unsigned char *buf;
		dma_addr_t dma_addr;
		unsigned int dma_size;
		unsigned int ofs;
	} cocci_id/* drivers/tty/serial/atmel_serial.c 87 */;
	unsigned long cocci_id/* drivers/tty/serial/atmel_serial.c 866 */;
	struct dma_chan *cocci_id/* drivers/tty/serial/atmel_serial.c 865 */;
	struct atmel_uart_char *cocci_id/* drivers/tty/serial/atmel_serial.c 737 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/atmel_serial.c 736 */;
	struct atmel_uart_port *cocci_id/* drivers/tty/serial/atmel_serial.c 735 */;
	unsigned int cocci_id/* drivers/tty/serial/atmel_serial.c 732 */;
	struct uart_port *cocci_id/* drivers/tty/serial/atmel_serial.c 718 */;
	int cocci_id/* drivers/tty/serial/atmel_serial.c 718 */;
	void cocci_id/* drivers/tty/serial/atmel_serial.c 718 */;
	uint32_t cocci_id/* drivers/tty/serial/atmel_serial.c 688 */;
	void cocci_id/* drivers/tty/serial/atmel_serial.c 63 */(struct uart_port *port);
	struct serial_iso7816 cocci_id/* drivers/tty/serial/atmel_serial.c 381 */;
	u32 cocci_id/* drivers/tty/serial/atmel_serial.c 358 */;
	u64 cocci_id/* drivers/tty/serial/atmel_serial.c 341 */;
	struct serial_iso7816 *cocci_id/* drivers/tty/serial/atmel_serial.c 337 */;
	struct platform_driver cocci_id/* drivers/tty/serial/atmel_serial.c 3001 */;
	struct serial_rs485 *cocci_id/* drivers/tty/serial/atmel_serial.c 299 */;
	struct tasklet_struct *cocci_id/* drivers/tty/serial/atmel_serial.c 291 */;
	pm_message_t cocci_id/* drivers/tty/serial/atmel_serial.c 2712 */;
	bool cocci_id/* drivers/tty/serial/atmel_serial.c 2677 */;
	struct uart_driver cocci_id/* drivers/tty/serial/atmel_serial.c 2663 */;
	struct console *cocci_id/* drivers/tty/serial/atmel_serial.c 2631 */;
	char *cocci_id/* drivers/tty/serial/atmel_serial.c 2631 */;
	int __init cocci_id/* drivers/tty/serial/atmel_serial.c 2631 */;
	int *cocci_id/* drivers/tty/serial/atmel_serial.c 2597 */;
	void __init cocci_id/* drivers/tty/serial/atmel_serial.c 2597 */;
	u_int cocci_id/* drivers/tty/serial/atmel_serial.c 2553 */;
	const char *cocci_id/* drivers/tty/serial/atmel_serial.c 2553 */;
	struct platform_device *cocci_id/* drivers/tty/serial/atmel_serial.c 2482 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/atmel_serial.c 2452 */;
	unsigned char cocci_id/* drivers/tty/serial/atmel_serial.c 2443 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/atmel_serial.c 2414 */;
	struct ktermios *cocci_id/* drivers/tty/serial/atmel_serial.c 2337 */;
	u8 cocci_id/* drivers/tty/serial/atmel_serial.c 226 */;
	struct atmel_uart_port cocci_id/* drivers/tty/serial/atmel_serial.c 213 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/atmel_serial.c 204 */[];
	struct console cocci_id/* drivers/tty/serial/atmel_serial.c 200 */;
	struct atmel_uart_port cocci_id/* drivers/tty/serial/atmel_serial.c 196 */[ATMEL_MAX_UART];
	struct device_node *cocci_id/* drivers/tty/serial/atmel_serial.c 1747 */;
	struct atmel_dma_buffer *cocci_id/* drivers/tty/serial/atmel_serial.c 1685 */;
	irqreturn_t cocci_id/* drivers/tty/serial/atmel_serial.c 1403 */;
	struct timer_list *cocci_id/* drivers/tty/serial/atmel_serial.c 1275 */;
	struct atmel_uart_char cocci_id/* drivers/tty/serial/atmel_serial.c 1216 */;
	struct dma_slave_config cocci_id/* drivers/tty/serial/atmel_serial.c 1195 */;
	dma_cap_mask_t cocci_id/* drivers/tty/serial/atmel_serial.c 1194 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/tty/serial/atmel_serial.c 1193 */;
	struct device *cocci_id/* drivers/tty/serial/atmel_serial.c 1192 */;
	struct atmel_uart_port {
		struct uart_port uart;
		struct clk *clk;
		int may_wakeup;
		u32 backup_imr;
		int break_active;
		bool use_dma_rx;
		bool use_pdc_rx;
		short pdc_rx_idx;
		struct atmel_dma_buffer pdc_rx[2];
		bool use_dma_tx;
		bool use_pdc_tx;
		struct atmel_dma_buffer pdc_tx;
		spinlock_t lock_tx;
		spinlock_t lock_rx;
		struct dma_chan *chan_tx;
		struct dma_chan *chan_rx;
		struct dma_async_tx_descriptor *desc_tx;
		struct dma_async_tx_descriptor *desc_rx;
		dma_cookie_t cookie_tx;
		dma_cookie_t cookie_rx;
		struct scatterlist sg_tx;
		struct scatterlist sg_rx;
		struct tasklet_struct tasklet_rx;
		struct tasklet_struct tasklet_tx;
		atomic_t tasklet_shutdown;
		unsigned int irq_status_prev;
		unsigned int tx_len;
		struct circ_buf rx_ring;
		struct mctrl_gpios *gpios;
		u32 backup_mode;
		u32 backup_brgr;
		unsigned int tx_done_mask;
		u32 fifo_size;
		u32 rts_high;
		u32 rts_low;
		bool ms_irq_enabled;
		u32 rtor;
		bool has_frac_baudrate;
		bool has_hw_timer;
		struct timer_list uart_timer;
		bool tx_stopped;
		bool suspended;
		unsigned int pending;
		unsigned int pending_status;
		spinlock_t lock_suspended;
		bool hd_start_rx;
		unsigned int fidi_min;
		unsigned int fidi_max;
#ifdef CONFIG_PM
		struct {
			u32 cr;
			u32 mr;
			u32 imr;
			u32 brgr;
			u32 rtor;
			u32 ttgr;
			u32 fmr;
			u32 fimr;
		} cache;
#endif
		int (*prepare_rx)(struct uart_port *port);
		int (*prepare_tx)(struct uart_port *port);
		void (*schedule_rx)(struct uart_port *port);
		void (*schedule_tx)(struct uart_port *port);
		void (*release_rx)(struct uart_port *port);
		void (*release_tx)(struct uart_port *port);
	} cocci_id/* drivers/tty/serial/atmel_serial.c 116 */;
	size_t cocci_id/* drivers/tty/serial/atmel_serial.c 1109 */;
	enum dma_status cocci_id/* drivers/tty/serial/atmel_serial.c 1108 */;
	struct dma_tx_state cocci_id/* drivers/tty/serial/atmel_serial.c 1107 */;
	struct tty_port *cocci_id/* drivers/tty/serial/atmel_serial.c 1104 */;
	void *cocci_id/* drivers/tty/serial/atmel_serial.c 1076 */;
}