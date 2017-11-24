//
//  Robot.h
//  Project 1
//
//  Created by 杨博超 on 16/4/4.
//  Copyright © 2016年 杨博超. All rights reserved.
//

#ifndef Robot_h
#define Robot_h

class Arena;

class Robot
{
public:
    // Constructor
    Robot(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool getAttacked(int dir);
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};


#endif /* Robot_h */
