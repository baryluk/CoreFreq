/*
 * CoreFreq
 * Copyright (C) 2015-2019 CYRIL INGENIERIE
 * Licenses: GPL2
 */

#define SORTBY_STATE		0x010000000000000e
#define SORTBY_RTIME		0x010000000000000d
#define SORTBY_UTIME		0x010000000000000c
#define SORTBY_STIME		0x010000000000000b
#define SORTBY_PID		0x010000000000000a
#define SORTBY_COMM		0x0100000000000009

#define OPS_INTERVAL		0x1000000000001000
#define OPS_INTERVAL_100	0x1000000000001001
#define OPS_INTERVAL_150	0x1000000000001011
#define OPS_INTERVAL_250	0x1000000000001021
#define OPS_INTERVAL_500	0x1000000000001031
#define OPS_INTERVAL_750	0x1000000000001041
#define OPS_INTERVAL_1000	0x1000000000001051
#define OPS_INTERVAL_1500	0x1000000000001061
#define OPS_INTERVAL_2000	0x1000000000001071
#define OPS_INTERVAL_2500	0x1000000000001081
#define OPS_INTERVAL_3000	0x1000000000001091
#define OPS_AUTOCLOCK		0x1000000000002000
#define OPS_AUTOCLOCK_OFF	0x1000000000002001
#define OPS_AUTOCLOCK_ON	0x1000000000002002
#define OPS_EXPERIMENTAL	0x1000000000004000
#define OPS_EXPERIMENTAL_OFF	0x1000000000004001
#define OPS_EXPERIMENTAL_ON	0x1000000000004002
#define OPS_INTERRUPTS		0x1000000000008000
#define OPS_INTERRUPTS_OFF	0x1000000000008001
#define OPS_INTERRUPTS_ON	0x1000000000008002

#define BOXKEY_EIST		0x3000000000000004
#define BOXKEY_EIST_OFF 	0x3000000000000005
#define BOXKEY_EIST_ON		0x3000000000000006
#define BOXKEY_C1E		0x3000000000000008
#define BOXKEY_C1E_OFF		0x3000000000000009
#define BOXKEY_C1E_ON		0x300000000000000a
#define BOXKEY_TURBO		0x3000000000000010
#define BOXKEY_TURBO_OFF	0x3000000000000011
#define BOXKEY_TURBO_ON 	0x3000000000000012
#define BOXKEY_C1A		0x3000000000000020
#define BOXKEY_C1A_OFF		0x3000000000000021
#define BOXKEY_C1A_ON		0x3000000000000022
#define BOXKEY_C3A		0x3000000000000040
#define BOXKEY_C3A_OFF		0x3000000000000041
#define BOXKEY_C3A_ON		0x3000000000000042
#define BOXKEY_C1U		0x3000000000000080
#define BOXKEY_C1U_OFF		0x3000000000000081
#define BOXKEY_C1U_ON		0x3000000000000082
#define BOXKEY_C3U		0x3000000000000100
#define BOXKEY_C3U_OFF		0x3000000000000101
#define BOXKEY_C3U_ON		0x3000000000000102
#define BOXKEY_PKGCST		0x3000000000000200
#define BOXKEY_PKGCST_C0	0x3000000000000201
#define BOXKEY_PKGCST_C1	0x3000000000000211
#define BOXKEY_PKGCST_C2	0x3000000000000221
#define BOXKEY_PKGCST_C3	0x3000000000000231
#define BOXKEY_PKGCST_C6	0x3000000000000261
#define BOXKEY_PKGCST_C7	0x3000000000000271
#define BOXKEY_IOMWAIT		0x3000000000000400
#define BOXKEY_IOMWAIT_OFF	0x3000000000000401
#define BOXKEY_IOMWAIT_ON	0x3000000000000402
#define BOXKEY_IORCST		0x3000000000000800
#define BOXKEY_IORCST_C0	0x3000000000000801
#define BOXKEY_IORCST_C3	0x3000000000000831
#define BOXKEY_IORCST_C4	0x3000000000000841
#define BOXKEY_IORCST_C6	0x3000000000000861
#define BOXKEY_IORCST_C7	0x3000000000000871
#define BOXKEY_ODCM		0x3000000000001000
#define BOXKEY_ODCM_OFF 	0x3000000000001001
#define BOXKEY_ODCM_ON		0x3000000000001002
#define BOXKEY_DUTYCYCLE	0x3000000000002000
#define BOXKEY_ODCM_DC00	0x3000000000002001
#define BOXKEY_ODCM_DC01	0x3000000000002011
#define BOXKEY_ODCM_DC02	0x3000000000002021
#define BOXKEY_ODCM_DC03	0x3000000000002031
#define BOXKEY_ODCM_DC04	0x3000000000002041
#define BOXKEY_ODCM_DC05	0x3000000000002051
#define BOXKEY_ODCM_DC06	0x3000000000002061
#define BOXKEY_ODCM_DC07	0x3000000000002071
#define BOXKEY_ODCM_DC08	0x3000000000002081
#define BOXKEY_ODCM_DC09	0x3000000000002091
#define BOXKEY_ODCM_DC10	0x30000000000020a1
#define BOXKEY_ODCM_DC11	0x30000000000020b1
#define BOXKEY_ODCM_DC12	0x30000000000020c1
#define BOXKEY_ODCM_DC13	0x30000000000020d1
#define BOXKEY_ODCM_DC14	0x30000000000020e1
#define BOXKEY_CC6		0x3000000000004000
#define BOXKEY_CC6_OFF		0x3000000000004001
#define BOXKEY_CC6_ON		0x3000000000004002
#define BOXKEY_PC6		0x3000000000008000
#define BOXKEY_PC6_OFF		0x3000000000008001
#define BOXKEY_PC6_ON		0x3000000000008002

#define BOXKEY_TOOLS_MACHINE	0x3000000000010000
#define BOXKEY_TOOLS_ATOMIC	0x3000000000010010
#define BOXKEY_TOOLS_CRC32	0x3000000000010020
#define BOXKEY_TOOLS_CONIC	0x3000000000011000
#define BOXKEY_TOOLS_CONIC0	0x3000000000011401
#define BOXKEY_TOOLS_CONIC1	0x3000000000011411
#define BOXKEY_TOOLS_CONIC2	0x3000000000011421
#define BOXKEY_TOOLS_CONIC3	0x3000000000011431
#define BOXKEY_TOOLS_CONIC4	0x3000000000011441
#define BOXKEY_TOOLS_CONIC5	0x3000000000011451
#define BOXKEY_TOOLS_TURBO_RND	0x3000000000012001
#define BOXKEY_TOOLS_TURBO_RR	0x3000000000012011

#define BOXKEY_CLR_THM_SENSOR	0x3000000000020011
#define BOXKEY_CLR_THM_PROCHOT	0x3000000000020021
#define BOXKEY_CLR_THM_CRIT	0x3000000000020041
#define BOXKEY_CLR_THM_THOLD	0x3000000000020081
#define BOXKEY_CLR_PWR_LIMIT	0x3000000000020101
#define BOXKEY_CLR_CUR_LIMIT	0x3000000000020201
#define BOXKEY_CLR_X_DOMAIN	0x3000000000020401

#define CLEAR_EVENT_MASK	0x0000000000000ff0

#define TRACK_TASK		0x0200000000000000
#define TRACK_MASK		0x0000000000007fff

#define CPU_ONLINE		0x0400000000000000
#define CPU_OFFLINE		0x0800000000000000
#define CPUID_MASK		0x000000000000003f

#define BOXKEY_TURBO_CLOCK	0x00010000
#define BOXKEY_TURBO_CLOCK_NC	0x00020000
#define BOXKEY_TURBO_CLOCK_1C	0x0002000100000000
#define BOXKEY_TURBO_CLOCK_2C	0x0002000200000000
#define BOXKEY_TURBO_CLOCK_3C	0x0002000300000000
#define BOXKEY_TURBO_CLOCK_4C	0x0002000400000000
#define BOXKEY_TURBO_CLOCK_5C	0x0002000500000000
#define BOXKEY_TURBO_CLOCK_6C	0x0002000600000000
#define BOXKEY_TURBO_CLOCK_7C	0x0002000700000000
#define BOXKEY_TURBO_CLOCK_8C	0x0002000800000000

#define BOXKEY_RATIO_CLOCK	0x00040000
#define BOXKEY_RATIO_CLOCK_OR	0x00080000
#define BOXKEY_RATIO_CLOCK_MAX	0x0008000100000000
#define BOXKEY_RATIO_CLOCK_MIN	0x0008000200000000

#define BOXKEY_UNCORE_CLOCK	0x00400000
#define BOXKEY_UNCORE_CLOCK_OR	0x00800000
#define BOXKEY_UNCORE_CLOCK_MAX 0x0080000100000000
#define BOXKEY_UNCORE_CLOCK_MIN 0x0080000200000000

#define CLOCKMOD_RATIO_MASK	0x0000ffff

#define powered(bit)	( (bit) ? (char*) RSC(PRESENT).CODE()		\
				: (char*) RSC(MISSING).CODE() )

#define enabled(bit)	((bit) ? "ON" : "OFF")

#define MARGIN_WIDTH	2
#define MARGIN_HEIGHT	1
#define INTER_WIDTH	3
#define INTER_HEIGHT	(3 + 1)
#define LEADING_LEFT	(MIN_WIDTH / (MARGIN_WIDTH + (4 * INTER_WIDTH)))
#define LEADING_TOP	1

#define LOAD_LEAD	4

#define LayerDeclare(_ID, _len, _col, _row, _var)			\
	struct {							\
		Coordinate	origin;					\
		CUINT		length;					\
		ATTRIBUTE	*attr;					\
		ASCII		*code;					\
	} _var = {							\
		.origin = {						\
			.col = _col,					\
			.row = _row					\
		},							\
		.length = _len,						\
		.attr = RSC(_ID).ATTR(),				\
		.code = RSC(_ID).CODE() 				\
	}

typedef char HBCLK[11 + 1];

enum DISPOSAL {
	D_MAINVIEW,
	D_DASHBOARD,
	D_ASCIITEST
};

#define DISPOSAL_SIZE	(1 + D_ASCIITEST)

enum VIEW {
	V_FREQ,
	V_INST,
	V_CYCLES,
	V_CSTATES,
	V_PACKAGE,
	V_TASKS,
	V_INTR,
	V_VOLTAGE,
	V_SLICE
};

#define VIEW_SIZE	(1 + V_SLICE)

typedef void (*DISPOSAL_FUNC)(Layer*);

typedef CUINT (*VIEW_FUNC)(Layer*, const unsigned int, CUINT);

#define CELL_ARGS	Window *win,					\
			unsigned long long key, 			\
			ATTRIBUTE *attrib,				\
			ASCII *item

typedef void (*CELL_FUNC)(CELL_ARGS);

#define RENDER_OK	0x000
#define RENDER_KO	0x010
#define RENDER_OFF	0x100
