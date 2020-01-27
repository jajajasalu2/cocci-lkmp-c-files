cocci_test_suite() {
	const struct pvr2_ctl_info cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 990 */[];
	struct pvr2_hdw *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 916 */;
	unsigned int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 915 */;
	struct pvr2_ctrl *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 912 */;
	int *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 912 */;
	v4l2_std_id cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 868 */;
	const char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 864 */;
	unsigned int *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 857 */;
	char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 856 */;
	struct pvr2_ctl_info *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 788 */;
	struct v4l2_queryctrl cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 787 */;
	struct v4l2_ext_control cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 741 */;
	struct v4l2_ext_controls cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 740 */;
	unsigned long cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 684 */;
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 676 */;
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 59 */[PVR_NUM];
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 56 */;
	struct pvr2_hdw *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 53 */[PVR_NUM];
	struct v4l2_cropcap *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 507 */;
	u32 *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4970 */;
	char cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4871 */[256];
	struct i2c_client *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4814 */;
	struct pvr2_stream_stats cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4778 */;
	const state_eval_func cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4620 */[];
	int (*cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4617 */)(struct pvr2_hdw *);
	led_method_func cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4127 */;
	led_method_func cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4118 */[];
	void (*cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 4116 */)(struct pvr2_hdw *,
									   int);
	unsigned cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 401 */;
	char cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3836 */[50];
	unsigned char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3630 */;
	struct hdw_timer cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3581 */;
	struct hdw_timer *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3557 */;
	struct timer_list *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3555 */;
	struct hdw_timer {
		struct timer_list timer;
		struct pvr2_hdw *hdw;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3550 */;
	struct urb *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3542 */;
	enum pvr2_v4l_type cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3509 */;
	v4l2_std_id cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 335 */(struct pvr2_hdw *hdw);
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 334 */(struct pvr2_hdw *hdw);
	u16 cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3327 */;
	u8 cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3326 */;
	u8 cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3325 */[2];
	struct i2c_msg cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3323 */[2];
	u8 *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3321 */;
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 330 */(struct pvr2_hdw *hdw,
								      unsigned int timeout,
								      int probe_fl,
								      void *write_data,
								      unsigned int write_len,
								      void *read_data,
								      unsigned int read_len);
	struct pvr2_stream *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3296 */;
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 329 */(struct pvr2_hdw *,
								      u32);
	struct v4l2_tuner cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3289 */;
	struct v4l2_tuner *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3283 */;
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 326 */(struct timer_list *);
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 322 */(struct pvr2_hdw *hdw,
								      int runFl);
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 321 */(struct pvr2_hdw *);
	struct pvr2_hdw cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3193 */;
	struct work_struct *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3190 */;
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 319 */(struct pvr2_hdw *,
								      int state);
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 318 */(struct work_struct *work);
	void cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 317 */(struct pvr2_hdw *,
								       unsigned long);
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 316 */(struct pvr2_hdw *);
	int cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 314 */(struct pvr2_hdw *hdw,
								      int v);
	u32 cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 3139 */;
	char cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2976 */[100];
	struct v4l2_subdev_format cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2917 */;
	struct v4l2_frequency cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2893 */;
	struct tuner_setup cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2843 */;
	pvr2_subdev_update_func cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2838 */;
	const struct pvr2_fx2cmd_descdef cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 283 */[];
	struct v4l2_control cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2806 */;
	enum pvr2_ctl_type cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2791 */;
	struct pvr2_fx2cmd_descdef {
		unsigned char id;
		unsigned char *desc;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 278 */;
	struct video_device *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2657 */;
	const char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 251 */[];
	struct pvr2_ctrl cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2428 */;
	__u8 cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2356 */;
	const struct pvr2_device_desc *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2355 */;
	struct usb_device *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2354 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2348 */;
	struct usb_interface *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2347 */;
	void *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2325 */;
	void (*cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2324 */)(void *);
	const struct pvr2_device_client_table *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2065 */;
	const struct pvr2_string_table *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 2064 */;
	unsigned short cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1982 */[25];
	struct v4l2_subdev *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1978 */;
	unsigned char cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1977 */;
	const struct pvr2_device_client_desc *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1974 */;
	struct v4l2_format cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1955 */;
	const unsigned char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1930 */;
	unsigned short *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1930 */;
	char cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1862 */[40];
	const struct pvr2_std_hack cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1837 */[];
	struct pvr2_std_hack {
		v4l2_std_id pat;
		v4l2_std_id msk;
		v4l2_std_id std;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1822 */;
	const struct pvr2_mpeg_ids cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 149 */[];
	struct pvr2_mpeg_ids {
		const char *strid;
		int id;
	} cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 145 */;
	const struct firmware *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1409 */;
	const struct firmware **cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1352 */;
	enum pvr2_config cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 1268 */;
	const unsigned char *cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 123 */[];
	const pvr2_subdev_update_func cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 104 */[];
	void (*cocci_id/* drivers/media/usb/pvrusb2/pvrusb2-hdw.c 101 */)(struct pvr2_hdw *,
									  struct v4l2_subdev *);
}
