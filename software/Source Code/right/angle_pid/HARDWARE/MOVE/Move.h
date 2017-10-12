#define Kp 10
#define LEFT_DIS 23
#define RIGHT_DIS 23
#define THRESHOLD 3

typedef struct{
	int left;
	int right;		
}Angle;

typedef struct{
    int front;
    int left;
	int right;
}Distance;

extern Distance distance,last_distance;
extern Angle angle,last_angle;
extern int Map[6][6];

extern int turn_flag;
extern int room_flag;
extern int CX,CY,Direction,C_distance_front;

void forward_left(void);
void forward_right(void);
void left(void);
void right(void);
void parameter_init(void);
void turn_left(void);
void turn_right(void);
void forward(void);
void stop(void);
void up(void);