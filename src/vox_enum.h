#pragma once

typedef enum
{
	VOX_A,
	VOX_ACCELERATING,
	VOX_ACCELERATOR,
	VOX_ACCEPTED,
	VOX_ACCESS,
	VOX_ACKNOWLEDGE,
	VOX_ACKNOWLEDGED,
	VOX_ACQUIRED,
	VOX_ACQUISTION,
	VOX_ACROSS,
	VOX_ACTIVATE,
	VOX_ACTIVATED,
	VOX_ACTIVITY,
	VOX_ADIOS,
	VOX_ADMINISTRATION,
	VOX_ADVANCED,
	VOX_AFTER,
	VOX_AGENT,
	VOX_ALARM,
	VOX_ALERT,
	VOX_ALIEN,
	VOX_ALIGNED,
	VOX_ALL,
	VOX_ALPHA,
	VOX_AM,
	VOX_AMIGO,
	VOX_AMMUNITION,
	VOX_AN,
	VOX_AND,
	VOX_ANNOUNCEMENT,
	VOX_ANOMALOUS,
	VOX_ANTENNA,
	VOX_ANY,
	VOX_APPREHEND,
	VOX_APPROACH,
	VOX_ARE,
	VOX_AREA,
	VOX_ARM,
	VOX_ARMED,
	VOX_ARMOR,
	VOX_ARMORY,
	VOX_ARREST,
	VOX_ASS,
	VOX_AT,
	VOX_ATOMIC,
	VOX_ATTENTION,
	VOX_AUTHORIZE,
	VOX_AUTHORIZED,
	VOX_AUTOMATIC,
	VOX_AWAY,
	VOX_B,
	VOX_BACK,
	VOX_BACKMAN,
	VOX_BAD,
	VOX_BAG,
	VOX_BAILEY,
	VOX_BARRACKS,
	VOX_BASE,
	VOX_BAY,
	VOX_BE,
	VOX_BEEN,
	VOX_BEFORE,
	VOX_BEYOND,
	VOX_BIOHAZARD,
	VOX_BIOLOGICAL,
	VOX_BIRDWELL,
	VOX_BIZWARN,
	VOX_BLACK,
	VOX_BLAST,
	VOX_BLOCKED,
	VOX_BLOOP,
	VOX_BLUE,
	VOX_BOTTOM,
	VOX_BRAVO,
	VOX_BREACH,
	VOX_BREACHED,
	VOX_BREAK,
	VOX_BRIDGE,
	VOX_BUST,
	VOX_BUT,
	VOX_BUTTON,
	VOX_BUZWARN,
	VOX_BYPASS,
	VOX_C,
	VOX_CABLE,
	VOX_CALL,
	VOX_CALLED,
	VOX_CANAL,
	VOX_CAP,
	VOX_CAPTAIN,
	VOX_CAPTURE,
	VOX_CEILING,
	VOX_CELSIUS,
	VOX_CENTER,
	VOX_CENTI,
	VOX_CENTRAL,
	VOX_CHAMBER,
	VOX_CHARLIE,
	VOX_CHECK,
	VOX_CHECKPOINT,
	VOX_CHEMICAL,
	VOX_CLEANUP,
	VOX_CLEAR,
	VOX_CLEARANCE,
	VOX_CLOSE,
	VOX_CODE,
	VOX_CODED,
	VOX_COLLIDER,
	VOX_COMMA, /* DEPRECATED */
	VOX_COMMAND,
	VOX_COMMUNICATION,
	VOX_COMPLEX,
	VOX_COMPUTER,
	VOX_CONDITION,
	VOX_CONTAINMENT,
	VOX_CONTAMINATION,
	VOX_CONTROL,
	VOX_COOLANT,
	VOX_COOMER, /* :P */
	VOX_CORE,
	VOX_CORRECT,
	VOX_CORRIDOR,
	VOX_CREW,
	VOX_CROSS,
	VOX_CRYOGENIC,
	VOX_D,
	VOX_DADEDA,
	VOX_DAMAGE,
	VOX_DAMAGED,
	VOX_DANGER,
	VOX_DAY,
	VOX_DEACTIVATED,
	VOX_DECOMPRESSION,
	VOX_DECONTAMINATION,
	VOX_DEEOO,
	VOX_DEFENSE,
	VOX_DEGREES,
	VOX_DELTA,
	VOX_DENIED,
	VOX_DEPLOY,
	VOX_DEPLOYED,
	VOX_DESTROY,
	VOX_DESTROYED,
	VOX_DETAIN,
	VOX_DETECTED,
	VOX_DETONATION,
	VOX_DEVICE,
	VOX_DID,
	VOX_DIE,
	VOX_DIMENSIONAL,
	VOX_DIRT,
	VOX_DISENGAGED,
	VOX_DISH,
	VOX_DISPOSAL,
	VOX_DISTANCE,
	VOX_DISTORTION,
	VOX_DO,
	VOX_DOCTOR,
	VOX_DOOP,
	VOX_DOOR,
	VOX_DOWN,
	VOX_DUAL,
	VOX_DUCT,
	VOX_E,
	VOX_EAST,
	VOX_ECHO,
	VOX_ED,
	VOX_EFFECT,
	VOX_EGRESS,
	VOX_EIGHT,
	VOX_EIGHTEEN,
	VOX_EIGHTY,
	VOX_ELECTRIC,
	VOX_ELECTROMAGNETIC,
	VOX_ELEVATOR,
	VOX_ELEVEN,
	VOX_ELIMINATE,
	VOX_EMERGENCY,
	VOX_ENERGY,
	VOX_ENGAGE,
	VOX_ENGAGED,
	VOX_ENGINE,
	VOX_ENTER,
	VOX_ENTRY,
	VOX_ENVIRONMENT,
	VOX_ERROR,
	VOX_ESCAPE,
	VOX_EVACUATE,
	VOX_EXCHANGE,
	VOX_EXIT,
	VOX_EXPECT,
	VOX_EXPERIMENT,
	VOX_EXPERIMENTAL,
	VOX_EXPLODE,
	VOX_EXPLOSION,
	VOX_EXPOSURE,
	VOX_EXTERMINATE,
	VOX_EXTINGUISH,
	VOX_EXTINGUISHER,
	VOX_EXTREME,
	VOX_F,
	VOX_FACILITY,
	VOX_FAHRENHEIT,
	VOX_FAILED,
	VOX_FAILURE,
	VOX_FARTHEST,
	VOX_FAST,
	VOX_FEET,
	VOX_FIELD,
	VOX_FIFTEEN,
	VOX_FIFTH,
	VOX_FIFTY,
	VOX_FINAL,
	VOX_FINE,
	VOX_FIRE,
	VOX_FIRST,
	VOX_FIVE,
	VOX_FLOODING,
	VOX_FLOOR,
	VOX_FOOL,
	VOX_FOR,
	VOX_FORBIDDEN,
	VOX_FORCE,
	VOX_FORMS,
	VOX_FOUND,
	VOX_FOUR,
	VOX_FOURTEEN,
	VOX_FOURTH,
	VOX_FOURTY,
	VOX_FOXTROT,
	VOX_FREEMAN,
	VOX_FREEZER,
	VOX_FROM,
	VOX_FRONT,
	VOX_FUEL,
	VOX_G,
	VOX_GET,
	VOX_GO,
	VOX_GOING,
	VOX_GOOD,
	VOX_GOODBYE,
	VOX_GORDON,
	VOX_GOT,
	VOX_GOVERNMENT,
	VOX_GRANTED,
	VOX_GREAT,
	VOX_GREEN,
	VOX_GRENADE,
	VOX_GUARD,
	VOX_GULF,
	VOX_GUN,
	VOX_GUTHRIE,
	VOX_HANDLING,
	VOX_HANGAR,
	VOX_HAS,
	VOX_HAVE,
	VOX_HAZARD,
	VOX_HEAD,
	VOX_HEALTH,
	VOX_HEAT,
	VOX_HELICOPTER,
	VOX_HELIUM,
	VOX_HELLO,
	VOX_HELP,
	VOX_HERE,
	VOX_HIDE,
	VOX_HIGH,
	VOX_HIGHEST,
	VOX_HIT,
	VOX_HOLE,
	VOX_HOSTILE,
	VOX_HOT,
	VOX_HOTEL,
	VOX_HOUR,
	VOX_HOURS,
	VOX_HUNDRED,
	VOX_HYDRO,
	VOX_I,
	VOX_IDIOT,
	VOX_ILLEGAL,
	VOX_IMMEDIATE,
	VOX_IMMEDIATELY,
	VOX_IN,
	VOX_INCHES,
	VOX_INDIA,
	VOX_ING,
	VOX_INOPERATIVE,
	VOX_INSIDE,
	VOX_INSPECTION,
	VOX_INSPECTOR,
	VOX_INTERCHANGE,
	VOX_INTRUDER,
	VOX_INVALID,
	VOX_INVASION,
	VOX_IS,
	VOX_IT,
	VOX_JOHNSON,
	VOX_JULIET,
	VOX_KEY,
	VOX_KILL,
	VOX_KILO,
	VOX_KIT,
	VOX_LAB,
	VOX_LAMBDA,
	VOX_LASER,
	VOX_LAST,
	VOX_LAUNCH,
	VOX_LEAK,
	VOX_LEAVE,
	VOX_LEFT,
	VOX_LEGAL,
	VOX_LEVEL,
	VOX_LEVER,
	VOX_LIE,
	VOX_LIEUTENANT,
	VOX_LIFE,
	VOX_LIGHT,
	VOX_LIMA,
	VOX_LIQUID,
	VOX_LOADING,
	VOX_LOCATE,
	VOX_LOCATED,
	VOX_LOCATION,
	VOX_LOCK,
	VOX_LOCKED,
	VOX_LOCKER,
	VOX_LOCKOUT,
	VOX_LOWER,
	VOX_LOWEST,
	VOX_MAGNETIC,
	VOX_MAIN,
	VOX_MAINTENANCE,
	VOX_MALFUNCTION,
	VOX_MAN,
	VOX_MASS,
	VOX_MATERIALS,
	VOX_MAXIMUM,
	VOX_MAY,
	VOX_MEDICAL,
	VOX_MEN,
	VOX_MERCY,
	VOX_MESA,
	VOX_MESSAGE,
	VOX_METER,
	VOX_MICRO,
	VOX_MIDDLE,
	VOX_MIKE,
	VOX_MILES,
	VOX_MILITARY,
	VOX_MILLI,
	VOX_MILLION,
	VOX_MINEFIELD,
	VOX_MINIMUM,
	VOX_MINUTES,
	VOX_MISTER,
	VOX_MODE,
	VOX_MOTOR,
	VOX_MOTORPOOL,
	VOX_MOVE,
	VOX_MUST,
	VOX_NEAREST,
	VOX_NICE,
	VOX_NINE,
	VOX_NINETEEN,
	VOX_NINETY,
	VOX_NO,
	VOX_NOMINAL,
	VOX_NORTH,
	VOX_NOT,
	VOX_NOVEMBER,
	VOX_NOW,
	VOX_NUMBER,
	VOX_OBJECTIVE,
	VOX_OBSERVATION,
	VOX_OF,
	VOX_OFFICER,
	VOX_OK,
	VOX_ON,
	VOX_ONE,
	VOX_OPEN,
	VOX_OPERATING,
	VOX_OPERATIONS,
	VOX_OPERATIVE,
	VOX_OPTION,
	VOX_ORDER,
	VOX_ORGANIC,
	VOX_OSCAR,
	VOX_OUT,
	VOX_OUTSIDE,
	VOX_OVER,
	VOX_OVERLOAD,
	VOX_OVERRIDE,
	VOX_PACIFY,
	VOX_PAIN,
	VOX_PAL,
	VOX_PANEL,
	VOX_PERCENT,
	VOX_PERIMETER,
	VOX_PERIOD,
	VOX_PERMITTED,
	VOX_PERSONNEL,
	VOX_PIPE,
	VOX_PLANT,
	VOX_PLATFORM,
	VOX_PLEASE,
	VOX_POINT,
	VOX_PORTAL,
	VOX_POWER,
	VOX_PRESENCE,
	VOX_PRESS,
	VOX_PRIMARY,
	VOX_PROCEED,
	VOX_PROCESSING,
	VOX_PROGRESS,
	VOX_PROPER,
	VOX_PROPULSION,
	VOX_PROSECUTE,
	VOX_PROTECTIVE,
	VOX_PUSH,
	VOX_QUANTUM,
	VOX_QUEBEC,
	VOX_QUESTION,
	VOX_QUESTIONING,
	VOX_QUICK,
	VOX_QUIT,
	VOX_RADIATION,
	VOX_RADIOACTIVE,
	VOX_RADS,
	VOX_RAPID,
	VOX_REACH,
	VOX_REACHED,
	VOX_REACTOR,
	VOX_RED,
	VOX_RELAY,
	VOX_RELEASED,
	VOX_REMAINING,
	VOX_RENEGADE,
	VOX_REPAIR,
	VOX_REPORT,
	VOX_REPORTS,
	VOX_REQUIRED,
	VOX_RESEARCH,
	VOX_RESEVOIR,
	VOX_RESISTANCE,
	VOX_RIGHT,
	VOX_ROCKET,
	VOX_ROGER,
	VOX_ROMEO,
	VOX_ROOM,
	VOX_ROUND,
	VOX_RUN,
	VOX_SAFE,
	VOX_SAFETY,
	VOX_SARGEANT,
	VOX_SATELITE,
	VOX_SAVE,
	VOX_SCIENCE,
	VOX_SCREAM,
	VOX_SCREEN,
	VOX_SEARCH,
	VOX_SECOND,
	VOX_SECONDARY,
	VOX_SECONDS,
	VOX_SECTOR,
	VOX_SECURE,
	VOX_SECURED,
	VOX_SECURITY,
	VOX_SELECT,
	VOX_SELECTED,
	VOX_SERVICE,
	VOX_SEVEN,
	VOX_SEVENTEEN,
	VOX_SEVENTY,
	VOX_SEVERE,
	VOX_SEWAGE,
	VOX_SEWER,
	VOX_SHIELD,
	VOX_SHIPMENT,
	VOX_SHOCK,
	VOX_SHOOT,
	VOX_SHOWER,
	VOX_SHUT,
	VOX_SIDE,
	VOX_SIERRA,
	VOX_SIGHT,
	VOX_SILO,
	VOX_SIX,
	VOX_SIXTEEN,
	VOX_SIXTY,
	VOX_SLIME,
	VOX_SLOW,
	VOX_SOLDIER,
	VOX_SOME,
	VOX_SOMEONE,
	VOX_SOMETHING,
	VOX_SON,
	VOX_SORRY,
	VOX_SOUTH,
	VOX_SQUAD,
	VOX_SQUARE,
	VOX_STAIRWAY,
	VOX_STATUS,
	VOX_STERILE,
	VOX_STERILIZATION,
	VOX_STORAGE,
	VOX_SUB,
	VOX_SUBSURFACE,
	VOX_SUDDEN,
	VOX_SUIT,
	VOX_SUPERCONDUCTING,
	VOX_SUPERCOOLED,
	VOX_SUPPLY,
	VOX_SURFACE,
	VOX_SURRENDER,
	VOX_SURROUND,
	VOX_SURROUNDED,
	VOX_SWITCH,
	VOX_SYSTEM,
	VOX_SYSTEMS,
	VOX_TACTICAL,
	VOX_TAKE,
	VOX_TALK,
	VOX_TANGO,
	VOX_TANK,
	VOX_TARGET,
	VOX_TEAM,
	VOX_TEMPERATURE,
	VOX_TEMPORAL,
	VOX_TEN,
	VOX_TERMINAL,
	VOX_TERMINATED,
	VOX_TERMINATION,
	VOX_TEST,
	VOX_THAT,
	VOX_THE,
	VOX_THEN,
	VOX_THERE,
	VOX_THIRD,
	VOX_THIRTEEN,
	VOX_THIRTY,
	VOX_THIS,
	VOX_THOSE,
	VOX_THOUSAND,
	VOX_THREAT,
	VOX_THREE,
	VOX_THROUGH,
	VOX_TIME,
	VOX_TO,
	VOX_TOP,
	VOX_TOPSIDE,
	VOX_TOUCH,
	VOX_TOWARDS,
	VOX_TRACK,
	VOX_TRAIN,
	VOX_TRANSPORTATION,
	VOX_TRUCK,
	VOX_TUNNEL,
	VOX_TURN,
	VOX_TURRET,
	VOX_TWELVE,
	VOX_TWENTY,
	VOX_TWO,
	VOX_UNAUTHORIZED,
	VOX_UNDER,
	VOX_UNIFORM,
	VOX_UNLOCKED,
	VOX_UNTIL,
	VOX_UP,
	VOX_UPPER,
	VOX_URANIUM,
	VOX_US,
	VOX_USA,
	VOX_USE,
	VOX_USED,
	VOX_USER,
	VOX_VACATE,
	VOX_VALID,
	VOX_VAPOR,
	VOX_VENT,
	VOX_VENTILATION,
	VOX_VICTOR,
	VOX_VIOLATED,
	VOX_VIOLATION,
	VOX_VOLTAGE,
	VOX_LOGIN,
	VOX_WALK,
	VOX_WALL,
	VOX_WANT,
	VOX_WANTED,
	VOX_WARM,
	VOX_WARN,
	VOX_WARNING,
	VOX_WASTE,
	VOX_WATER,
	VOX_WE,
	VOX_WEAPON,
	VOX_WEST,
	VOX_WHISKEY,
	VOX_WHITE,
	VOX_WILCO,
	VOX_WILL,
	VOX_WITH,
	VOX_WITHOUT,
	VOX_WOOP,
	VOX_XENO,
	VOX_YANKEE,
	VOX_YARDS,
	VOX_YEAR,
	VOX_YELLOW,
	VOX_YES,
	VOX_YOU,
	VOX_YOUR,
	VOX_YOURSELF,
	VOX_ZERO,
	VOX_ZONE,
	VOX_ZULU,
	VOX_EXT_NUM_LINES
} VoxEnum;