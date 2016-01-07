//
//  MFMacro.h
//  MFCampaignEngagement
//
//  Created by NeroMilk on 11/30/15.
//  Copyright © 2015 MingFung. All rights reserved.
//

#ifndef MFMacro_h
#define MFMacro_h

//调试
#ifdef DEBUG
# define DLog(format, ...) NSLog((@"[文件名:%s]" "[函数名:%s]" "[行号:%d]" format), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
# define DLog(...);
#endif

//函数
#pragma mark Functions
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;





//常量
#pragma mark Size
#define SCREEN_WIDTH        [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT       [UIScreen mainScreen].bounds.size.height
#endif /* MFMacro_h */