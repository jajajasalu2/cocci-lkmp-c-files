cocci_test_suite() {
	struct tda9874a_MODES {
		char *name;
		audiocmd cmd;
	} cocci_id/* drivers/media/i2c/tvaudio.c 893 */[9];
	unsigned int cocci_id/* drivers/media/i2c/tvaudio.c 879 */;
	struct CHIPDESC {
		char *name;
		int addr_lo,addr_hi;
		int registers;
		int *insmodopt;
		checkit checkit;
		initialize initialize;
		int flags;
#define CHIP_HAS_VOLUME 1
#define CHIP_HAS_BASSTREBLE 2
#define CHIP_HAS_INPUTSEL 4
#define CHIP_NEED_CHECKMODE 8
		audiocmd init;
		int leftreg,rightreg,treblereg,bassreg;
		int volinit,trebleinit,bassinit;
		getvalue volfunc,treblefunc,bassfunc;
		getrxsubchans getrxsubchans;
		setaudmode setaudmode;
		int inputreg;
		int inputmap[4];
		int inputmute;
		int inputmask;
	} cocci_id/* drivers/media/i2c/tvaudio.c 74 */;
	struct AUDIOCMD {
		int count;
		unsigned char bytes[MAXREGS + 1];
	} cocci_id/* drivers/media/i2c/tvaudio.c 68 */;
	void (*cocci_id/* drivers/media/i2c/tvaudio.c 65 */)(struct CHIPSTATE *, int mode);
	int (*cocci_id/* drivers/media/i2c/tvaudio.c 62 */)(struct CHIPSTATE *);
	int (*cocci_id/* drivers/media/i2c/tvaudio.c 61 */)(int);
	struct CHIPSTATE cocci_id/* drivers/media/i2c/tvaudio.c 60 */;
	struct CHIPDESC *cocci_id/* drivers/media/i2c/tvaudio.c 328 */;
	void *cocci_id/* drivers/media/i2c/tvaudio.c 325 */;
	struct timer_list *cocci_id/* drivers/media/i2c/tvaudio.c 319 */;
	void cocci_id/* drivers/media/i2c/tvaudio.c 319 */;
	struct i2c_client *cocci_id/* drivers/media/i2c/tvaudio.c 275 */;
	struct v4l2_subdev *cocci_id/* drivers/media/i2c/tvaudio.c 274 */;
	audiocmd *cocci_id/* drivers/media/i2c/tvaudio.c 272 */;
	struct CHIPSTATE *cocci_id/* drivers/media/i2c/tvaudio.c 272 */;
	char *cocci_id/* drivers/media/i2c/tvaudio.c 272 */;
	int cocci_id/* drivers/media/i2c/tvaudio.c 272 */;
	struct i2c_msg cocci_id/* drivers/media/i2c/tvaudio.c 244 */[2];
	unsigned char cocci_id/* drivers/media/i2c/tvaudio.c 242 */[1];
	unsigned char cocci_id/* drivers/media/i2c/tvaudio.c 223 */;
	struct i2c_driver cocci_id/* drivers/media/i2c/tvaudio.c 2094 */;
	const struct i2c_device_id cocci_id/* drivers/media/i2c/tvaudio.c 2088 */[];
	const struct i2c_device_id *cocci_id/* drivers/media/i2c/tvaudio.c 1937 */;
	const struct v4l2_subdev_ops cocci_id/* drivers/media/i2c/tvaudio.c 1925 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/i2c/tvaudio.c 1921 */;
	const struct v4l2_subdev_audio_ops cocci_id/* drivers/media/i2c/tvaudio.c 1917 */;
	const struct v4l2_subdev_tuner_ops cocci_id/* drivers/media/i2c/tvaudio.c 1910 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/i2c/tvaudio.c 1906 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/i2c/tvaudio.c 1902 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/i2c/tvaudio.c 1869 */;
	v4l2_std_id cocci_id/* drivers/media/i2c/tvaudio.c 1861 */;
	struct v4l2_tuner *cocci_id/* drivers/media/i2c/tvaudio.c 1843 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/i2c/tvaudio.c 1813 */;
	u32 cocci_id/* drivers/media/i2c/tvaudio.c 1759 */;
	unsigned char cocci_id/* drivers/media/i2c/tvaudio.c 158 */[2];
	struct CHIPDESC cocci_id/* drivers/media/i2c/tvaudio.c 1520 */[];
	struct v4l2_ctrl *cocci_id/* drivers/media/i2c/tvaudio.c 145 */;
	audiocmd cocci_id/* drivers/media/i2c/tvaudio.c 1445 */;
	struct CHIPSTATE {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		struct {
			struct v4l2_ctrl *volume;
			struct v4l2_ctrl *balance;
		};
		struct CHIPDESC *desc;
		audiocmd shadow;
		u16 muted;
		int prevmode;
		int radio;
		int input;
		struct task_struct *thread;
		struct timer_list wt;
		int audmode;
	} cocci_id/* drivers/media/i2c/tvaudio.c 112 */;
}
