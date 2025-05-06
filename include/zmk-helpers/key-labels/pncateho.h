/*                                      PNCATEHO KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬─────────────────────╮ ╭─────────────────────┬─────────────────╮
  │  0   1   3   3     │       4   5   6   7 │ │ LT3 LT2 LT1 LT0     │ RT0 RT1 RT2 RT3 │
  │  8   9  10  11     │      12  13  14  15 │ │ LB3 LB2 LB1 LB0     │ RB0 RB1 RB2 RB3 │
  ╰──────────╮  16  17 │  18  19 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────╯
             ╰─────────┴─────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LT0  3  // left-top row
#define LT1  2
#define LT2  1
#define LT3  0

#define RT0  4  // right-top row
#define RT1  5
#define RT2  6
#define RT3  7

#define LB0 11  // left-bottom row
#define LB1 10
#define LB2 9
#define LB3 8

#define RB0 12  // right-bottom row
#define RB1 13
#define RB2 14
#define RB3 15

#define LH0 17  // left thumb keys
#define LH1 16

#define RH0 18  // right thumb keys
#define RH1 19
