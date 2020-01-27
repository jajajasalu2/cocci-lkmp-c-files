cocci_test_suite() {
	struct v4l2_fmtdesc *cocci_id/* drivers/media/usb/hackrf/hackrf.c 989 */;
	struct file *cocci_id/* drivers/media/usb/hackrf/hackrf.c 988 */;
	char *cocci_id/* drivers/media/usb/hackrf/hackrf.c 956 */;
	struct v4l2_format *cocci_id/* drivers/media/usb/hackrf/hackrf.c 951 */;
	struct hackrf_dev {
#define USB_STATE_URB_BUF 1
#define RX_ON 4
#define TX_ON 5
#define RX_ADC_FREQUENCY 11
#define TX_DAC_FREQUENCY 12
#define RX_BANDWIDTH 13
#define TX_BANDWIDTH 14
#define RX_RF_FREQUENCY 15
#define TX_RF_FREQUENCY 16
#define RX_RF_GAIN 17
#define TX_RF_GAIN 18
#define RX_IF_GAIN 19
#define RX_LNA_GAIN 20
#define TX_LNA_GAIN 21
		unsigned long flags;
		struct usb_interface *intf;
		struct device *dev;
		struct usb_device *udev;
		struct video_device rx_vdev;
		struct video_device tx_vdev;
		struct v4l2_device v4l2_dev;
		struct vb2_queue rx_vb2_queue;
		struct vb2_queue tx_vb2_queue;
		struct list_head rx_buffer_list;
		struct list_head tx_buffer_list;
		spinlock_t buffer_list_lock;
		unsigned int sequence;
		unsigned int vb_full;
		unsigned int vb_empty;
		struct mutex v4l2_lock;
		struct mutex vb_queue_lock;
		struct urb *urb_list[MAX_BULK_BUFS];
		int buf_num;
		unsigned long buf_size;
		u8 *buf_list[MAX_BULK_BUFS];
		dma_addr_t dma_addr[MAX_BULK_BUFS];
		int urbs_initialized;
		int urbs_submitted;
#define BUF_SIZE 24
		u8 buf[BUF_SIZE];
		unsigned int f_adc;
		unsigned int f_dac;
		unsigned int f_rx;
		unsigned int f_tx;
		u32 pixelformat;
		u32 buffersize;
		struct v4l2_ctrl_handler rx_ctrl_handler;
		struct v4l2_ctrl *rx_bandwidth_auto;
		struct v4l2_ctrl *rx_bandwidth;
		struct v4l2_ctrl *rx_rf_gain;
		struct v4l2_ctrl *rx_lna_gain;
		struct v4l2_ctrl *rx_if_gain;
		struct v4l2_ctrl_handler tx_ctrl_handler;
		struct v4l2_ctrl *tx_bandwidth_auto;
		struct v4l2_ctrl *tx_bandwidth;
		struct v4l2_ctrl *tx_rf_gain;
		struct v4l2_ctrl *tx_lna_gain;
		unsigned long jiffies_next;
		unsigned int sample;
		unsigned int sample_measured;
	} cocci_id/* drivers/media/usb/hackrf/hackrf.c 93 */;
	struct v4l2_capability *cocci_id/* drivers/media/usb/hackrf/hackrf.c 895 */;
	const struct vb2_ops cocci_id/* drivers/media/usb/hackrf/hackrf.c 885 */;
	struct hackrf_buffer {
		struct vb2_v4l2_buffer vb;
		struct list_head list;
	} cocci_id/* drivers/media/usb/hackrf/hackrf.c 88 */;
	const unsigned int cocci_id/* drivers/media/usb/hackrf/hackrf.c 85 */;
	struct hackrf_format cocci_id/* drivers/media/usb/hackrf/hackrf.c 78 */[];
	unsigned long cocci_id/* drivers/media/usb/hackrf/hackrf.c 776 */;
	struct list_head *cocci_id/* drivers/media/usb/hackrf/hackrf.c 775 */;
	struct hackrf_buffer cocci_id/* drivers/media/usb/hackrf/hackrf.c 774 */;
	struct hackrf_buffer *cocci_id/* drivers/media/usb/hackrf/hackrf.c 774 */;
	struct vb2_queue *cocci_id/* drivers/media/usb/hackrf/hackrf.c 772 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/usb/hackrf/hackrf.c 771 */;
	struct vb2_buffer *cocci_id/* drivers/media/usb/hackrf/hackrf.c 769 */;
	void cocci_id/* drivers/media/usb/hackrf/hackrf.c 769 */;
	struct device *cocci_id/* drivers/media/usb/hackrf/hackrf.c 753 */[];
	unsigned int cocci_id/* drivers/media/usb/hackrf/hackrf.c 753 */[];
	unsigned int *cocci_id/* drivers/media/usb/hackrf/hackrf.c 752 */;
	enum vb2_buffer_state cocci_id/* drivers/media/usb/hackrf/hackrf.c 727 */;
	struct hackrf_format {
		u32 pixelformat;
		u32 buffersize;
	} cocci_id/* drivers/media/usb/hackrf/hackrf.c 72 */;
	struct hackrf_dev cocci_id/* drivers/media/usb/hackrf/hackrf.c 708 */;
	struct v4l2_device *cocci_id/* drivers/media/usb/hackrf/hackrf.c 707 */;
	struct usb_interface *cocci_id/* drivers/media/usb/hackrf/hackrf.c 705 */;
	usb_complete_t cocci_id/* drivers/media/usb/hackrf/hackrf.c 670 */;
	unsigned int cocci_id/* drivers/media/usb/hackrf/hackrf.c 669 */;
	bool cocci_id/* drivers/media/usb/hackrf/hackrf.c 666 */;
	long long cocci_id/* drivers/media/usb/hackrf/hackrf.c 641 */;
	struct hackrf_dev *cocci_id/* drivers/media/usb/hackrf/hackrf.c 620 */;
	int cocci_id/* drivers/media/usb/hackrf/hackrf.c 620 */;
	const struct v4l2_frequency_band cocci_id/* drivers/media/usb/hackrf/hackrf.c 49 */[];
	struct urb *cocci_id/* drivers/media/usb/hackrf/hackrf.c 481 */;
	void *cocci_id/* drivers/media/usb/hackrf/hackrf.c 454 */;
	enum{CMD_SET_TRANSCEIVER_MODE=0x01, CMD_SAMPLE_RATE_SET=0x06, CMD_BASEBAND_FILTER_BANDWIDTH_SET=0x07, CMD_BOARD_ID_READ=0x0e, CMD_VERSION_STRING_READ=0x0f, CMD_SET_FREQ=0x10, CMD_AMP_ENABLE=0x11, CMD_SET_LNA_GAIN=0x13, CMD_SET_VGA_GAIN=0x14, CMD_SET_TXVGA_GAIN=0x15,} cocci_id/* drivers/media/usb/hackrf/hackrf.c 28 */;
	const struct {
		u32 freq;
	} cocci_id/* drivers/media/usb/hackrf/hackrf.c 243 */[];
	const bool cocci_id/* drivers/media/usb/hackrf/hackrf.c 241 */;
	u8 cocci_id/* drivers/media/usb/hackrf/hackrf.c 239 */[8];
	u8 *cocci_id/* drivers/media/usb/hackrf/hackrf.c 183 */;
	u8 cocci_id/* drivers/media/usb/hackrf/hackrf.c 182 */;
	u16 cocci_id/* drivers/media/usb/hackrf/hackrf.c 182 */;
	struct usb_driver cocci_id/* drivers/media/usb/hackrf/hackrf.c 1541 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/hackrf/hackrf.c 1534 */[];
	const struct usb_device_id *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1349 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/hackrf/hackrf.c 1340 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1267 */;
	const struct video_device cocci_id/* drivers/media/usb/hackrf/hackrf.c 1248 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/usb/hackrf/hackrf.c 1237 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/usb/hackrf/hackrf.c 1198 */;
	struct v4l2_frequency_band *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1169 */;
	struct video_device *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1140 */;
	struct v4l2_frequency *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1136 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1089 */;
	struct v4l2_modulator *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1060 */;
	const struct v4l2_modulator *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1050 */;
	struct v4l2_tuner *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1021 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/usb/hackrf/hackrf.c 1004 */;
}
